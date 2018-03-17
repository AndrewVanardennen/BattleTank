// Copyright AndrewVanardennen

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Tank.generated.h" // Paste new includes above

// Forward declerations
class UTankBarrel;
class UTankTurret;
class AProjectile;

UCLASS()
class BATTLETANK_API ATank : public APawn
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void Fire();

	void AimAt(FVector HitLocation);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


private:	
	// Sets default values for this pawn's properties
	ATank();

	// TODO remove once firing is moved to aimingcomponent
	UPROPERTY(EditDefaultsOnly, Category = "Firing")
	float LaunchSpeed = 4000; // TODO find Sensible starting value
	
	UPROPERTY(EditDefaultsOnly, Category = "Firing")
	float ReloadTimeInSeconds = 3;

	UPROPERTY(EditDefaultsOnly, Category = "Setup")
		TSubclassOf<AProjectile> ProjectileBlueprint;
		
	// Local barrel reference for spawning projectile
	UTankBarrel* Barrel = nullptr; // TODO remove

	double LastFireTime = 0;

	
};
