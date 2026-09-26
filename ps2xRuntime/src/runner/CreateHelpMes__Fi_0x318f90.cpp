#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreateHelpMes__Fi
// Address: 0x318f90 - 0x3193cc
void CreateHelpMes__Fi_0x318f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateHelpMes__Fi_0x318f90");
#endif

    switch (ctx->pc) {
        case 0x318ff0u: goto label_318ff0;
        case 0x31904cu: goto label_31904c;
        case 0x319090u: goto label_319090;
        case 0x3190e4u: goto label_3190e4;
        case 0x319100u: goto label_319100;
        case 0x319124u: goto label_319124;
        case 0x319168u: goto label_319168;
        case 0x3192d0u: goto label_3192d0;
        case 0x319348u: goto label_319348;
        case 0x319358u: goto label_319358;
        case 0x31936cu: goto label_31936c;
        default: break;
    }

    ctx->pc = 0x318f90u;

    // 0x318f90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x318f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x318f94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x318f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x318f98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x318f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x318f9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x318f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x318fa0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x318fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x318fa4: 0x8f83a324  lw          $v1, -0x5CDC($gp)
    ctx->pc = 0x318fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943524)));
    // 0x318fa8: 0x10600102  beqz        $v1, . + 4 + (0x102 << 2)
    ctx->pc = 0x318FA8u;
    {
        const bool branch_taken_0x318fa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x318FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318FA8u;
            // 0x318fac: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318fa8) {
            ctx->pc = 0x3193B4u;
            goto label_3193b4;
        }
    }
    ctx->pc = 0x318FB0u;
    // 0x318fb0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x318fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x318fb4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x318fb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318fb8: 0xac200a84  sw          $zero, 0xA84($at)
    ctx->pc = 0x318fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2692), GPR_U32(ctx, 0));
    // 0x318fbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x318fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318fc0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x318fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x318fc4: 0xac200aa4  sw          $zero, 0xAA4($at)
    ctx->pc = 0x318fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2724), GPR_U32(ctx, 0));
    // 0x318fc8: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x318fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x318fcc: 0xac200aa8  sw          $zero, 0xAA8($at)
    ctx->pc = 0x318fccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2728), GPR_U32(ctx, 0));
    // 0x318fd0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x318fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x318fd4: 0xac200aac  sw          $zero, 0xAAC($at)
    ctx->pc = 0x318fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2732), GPR_U32(ctx, 0));
    // 0x318fd8: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x318fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x318fdc: 0xac200ab0  sw          $zero, 0xAB0($at)
    ctx->pc = 0x318fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2736), GPR_U32(ctx, 0));
    // 0x318fe0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x318fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x318fe4: 0xac200ab4  sw          $zero, 0xAB4($at)
    ctx->pc = 0x318fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2740), GPR_U32(ctx, 0));
    // 0x318fe8: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x318fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x318fec: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x318fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
label_318ff0:
    // 0x318ff0: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x318ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x318ff4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x318ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x318ff8: 0xacc000e8  sw          $zero, 0xE8($a2)
    ctx->pc = 0x318ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 232), GPR_U32(ctx, 0));
    // 0x318ffc: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x318ffcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x319000: 0xacc000ec  sw          $zero, 0xEC($a2)
    ctx->pc = 0x319000u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 236), GPR_U32(ctx, 0));
    // 0x319004: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x319004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x319008: 0xacc000f0  sw          $zero, 0xF0($a2)
    ctx->pc = 0x319008u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 240), GPR_U32(ctx, 0));
    // 0x31900c: 0xacc000f4  sw          $zero, 0xF4($a2)
    ctx->pc = 0x31900cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 244), GPR_U32(ctx, 0));
    // 0x319010: 0xacc000f8  sw          $zero, 0xF8($a2)
    ctx->pc = 0x319010u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 248), GPR_U32(ctx, 0));
    // 0x319014: 0xacc000fc  sw          $zero, 0xFC($a2)
    ctx->pc = 0x319014u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 252), GPR_U32(ctx, 0));
    // 0x319018: 0xacc00100  sw          $zero, 0x100($a2)
    ctx->pc = 0x319018u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 256), GPR_U32(ctx, 0));
    // 0x31901c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x31901Cu;
    {
        const bool branch_taken_0x31901c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31901Cu;
            // 0x319020: 0xacc00104  sw          $zero, 0x104($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 260), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31901c) {
            ctx->pc = 0x318FF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_318ff0;
        }
    }
    ctx->pc = 0x319024u;
    // 0x319024: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x319024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x319028: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x319028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31902c: 0xac200af8  sw          $zero, 0xAF8($at)
    ctx->pc = 0x31902cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2808), GPR_U32(ctx, 0));
    // 0x319030: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x319030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x319034: 0xac220b5c  sw          $v0, 0xB5C($at)
    ctx->pc = 0x319034u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2908), GPR_U32(ctx, 2));
    // 0x319038: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x319038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x31903c: 0xac200afc  sw          $zero, 0xAFC($at)
    ctx->pc = 0x31903cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2812), GPR_U32(ctx, 0));
    // 0x319040: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x319040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x319044: 0xc0547dc  jal         func_151F70
    ctx->pc = 0x319044u;
    SET_GPR_U32(ctx, 31, 0x31904Cu);
    ctx->pc = 0x319048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319044u;
            // 0x319048: 0xac200b58  sw          $zero, 0xB58($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 2904), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151F70u;
    if (runtime->hasFunction(0x151F70u)) {
        auto targetFn = runtime->lookupFunction(0x151F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31904Cu; }
        if (ctx->pc != 0x31904Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawSpeedDef__6ClsMesFv_0x151f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31904Cu; }
        if (ctx->pc != 0x31904Cu) { return; }
    }
    ctx->pc = 0x31904Cu;
label_31904c:
    // 0x31904c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x31904cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x319050: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x319050u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x319054: 0xe4200b88  swc1        $f0, 0xB88($at)
    ctx->pc = 0x319054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 2952), bits); }
    // 0x319058: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x319058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x31905c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x31905cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x319060: 0xac200b90  sw          $zero, 0xB90($at)
    ctx->pc = 0x319060u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2960), GPR_U32(ctx, 0));
    // 0x319064: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x319064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x319068: 0xac200b9c  sw          $zero, 0xB9C($at)
    ctx->pc = 0x319068u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2972), GPR_U32(ctx, 0));
    // 0x31906c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x31906cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x319070: 0xac200ba0  sw          $zero, 0xBA0($at)
    ctx->pc = 0x319070u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2976), GPR_U32(ctx, 0));
    // 0x319074: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x319074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x319078: 0xac200ba4  sw          $zero, 0xBA4($at)
    ctx->pc = 0x319078u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2980), GPR_U32(ctx, 0));
    // 0x31907c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x31907cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x319080: 0xac200ba8  sw          $zero, 0xBA8($at)
    ctx->pc = 0x319080u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2984), GPR_U32(ctx, 0));
    // 0x319084: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x319084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x319088: 0xc0557f0  jal         func_155FC0
    ctx->pc = 0x319088u;
    SET_GPR_U32(ctx, 31, 0x319090u);
    ctx->pc = 0x31908Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319088u;
            // 0x31908c: 0xac200bac  sw          $zero, 0xBAC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 2988), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155FC0u;
    if (runtime->hasFunction(0x155FC0u)) {
        auto targetFn = runtime->lookupFunction(0x155FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319090u; }
        if (ctx->pc != 0x319090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMesWinTbl__6ClsMesFv_0x155fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319090u; }
        if (ctx->pc != 0x319090u) { return; }
    }
    ctx->pc = 0x319090u;
label_319090:
    // 0x319090: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x319090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x319094: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x319094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x319098: 0xac2021a8  sw          $zero, 0x21A8($at)
    ctx->pc = 0x319098u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8616), GPR_U32(ctx, 0));
    // 0x31909c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x31909cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3190a0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x3190a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x3190a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3190a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3190a8: 0xac2221b0  sw          $v0, 0x21B0($at)
    ctx->pc = 0x3190a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8624), GPR_U32(ctx, 2));
    // 0x3190ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3190acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3190b0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x3190b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x3190b4: 0xac2221b4  sw          $v0, 0x21B4($at)
    ctx->pc = 0x3190b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8628), GPR_U32(ctx, 2));
    // 0x3190b8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x3190b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3190bc: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x3190bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x3190c0: 0xa02221d0  sb          $v0, 0x21D0($at)
    ctx->pc = 0x3190c0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 8656), (uint8_t)GPR_U32(ctx, 2));
    // 0x3190c4: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x3190c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x3190c8: 0xac2021ac  sw          $zero, 0x21AC($at)
    ctx->pc = 0x3190c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8620), GPR_U32(ctx, 0));
    // 0x3190cc: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x3190ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x3190d0: 0xac2021b8  sw          $zero, 0x21B8($at)
    ctx->pc = 0x3190d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8632), GPR_U32(ctx, 0));
    // 0x3190d4: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x3190d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x3190d8: 0x8c2221a0  lw          $v0, 0x21A0($at)
    ctx->pc = 0x3190d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8608)));
    // 0x3190dc: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x3190dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x3190e0: 0xac2221a4  sw          $v0, 0x21A4($at)
    ctx->pc = 0x3190e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8612), GPR_U32(ctx, 2));
label_3190e4:
    // 0x3190e4: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x3190e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x3190e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3190e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3190ec: 0x244209d0  addiu       $v0, $v0, 0x9D0
    ctx->pc = 0x3190ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2512));
    // 0x3190f0: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x3190f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3190f4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3190f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3190f8: 0xc049c86  jal         func_127218
    ctx->pc = 0x3190F8u;
    SET_GPR_U32(ctx, 31, 0x319100u);
    ctx->pc = 0x3190FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3190F8u;
            // 0x3190fc: 0x24441801  addiu       $a0, $v0, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319100u; }
        if (ctx->pc != 0x319100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319100u; }
        if (ctx->pc != 0x319100u) { return; }
    }
    ctx->pc = 0x319100u;
label_319100:
    // 0x319100: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x319100u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x319104: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x319104u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x319108: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x319108u;
    {
        const bool branch_taken_0x319108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31910Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x319108u;
            // 0x31910c: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319108) {
            ctx->pc = 0x3190E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3190e4;
        }
    }
    ctx->pc = 0x319110u;
    // 0x319110: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x319110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319114: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x319114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319118: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x319118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
    // 0x31911c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x31911cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x319120: 0x246309d0  addiu       $v1, $v1, 0x9D0
    ctx->pc = 0x319120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2512));
label_319124:
    // 0x319124: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x319124u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x319128: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x319128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x31912c: 0xace41a04  sw          $a0, 0x1A04($a3)
    ctx->pc = 0x31912cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6660), GPR_U32(ctx, 4));
    // 0x319130: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x319130u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x319134: 0xace41a08  sw          $a0, 0x1A08($a3)
    ctx->pc = 0x319134u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6664), GPR_U32(ctx, 4));
    // 0x319138: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x319138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x31913c: 0xace41a0c  sw          $a0, 0x1A0C($a3)
    ctx->pc = 0x31913cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6668), GPR_U32(ctx, 4));
    // 0x319140: 0xace41a10  sw          $a0, 0x1A10($a3)
    ctx->pc = 0x319140u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6672), GPR_U32(ctx, 4));
    // 0x319144: 0xace41a14  sw          $a0, 0x1A14($a3)
    ctx->pc = 0x319144u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6676), GPR_U32(ctx, 4));
    // 0x319148: 0xace41a18  sw          $a0, 0x1A18($a3)
    ctx->pc = 0x319148u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6680), GPR_U32(ctx, 4));
    // 0x31914c: 0xace41a1c  sw          $a0, 0x1A1C($a3)
    ctx->pc = 0x31914cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6684), GPR_U32(ctx, 4));
    // 0x319150: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x319150u;
    {
        const bool branch_taken_0x319150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x319150u;
            // 0x319154: 0xace41a20  sw          $a0, 0x1A20($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 6688), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319150) {
            ctx->pc = 0x319124u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_319124;
        }
    }
    ctx->pc = 0x319158u;
    // 0x319158: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x319158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31915c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31915cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319160: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x319160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
    // 0x319164: 0x246309d0  addiu       $v1, $v1, 0x9D0
    ctx->pc = 0x319164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2512));
label_319168:
    // 0x319168: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x319168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x31916c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x31916cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x319170: 0xacc01a44  sw          $zero, 0x1A44($a2)
    ctx->pc = 0x319170u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6724), GPR_U32(ctx, 0));
    // 0x319174: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x319174u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x319178: 0xacc01a84  sw          $zero, 0x1A84($a2)
    ctx->pc = 0x319178u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6788), GPR_U32(ctx, 0));
    // 0x31917c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x31917cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x319180: 0xacc01a48  sw          $zero, 0x1A48($a2)
    ctx->pc = 0x319180u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6728), GPR_U32(ctx, 0));
    // 0x319184: 0xacc01a88  sw          $zero, 0x1A88($a2)
    ctx->pc = 0x319184u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6792), GPR_U32(ctx, 0));
    // 0x319188: 0xacc01a4c  sw          $zero, 0x1A4C($a2)
    ctx->pc = 0x319188u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6732), GPR_U32(ctx, 0));
    // 0x31918c: 0xacc01a8c  sw          $zero, 0x1A8C($a2)
    ctx->pc = 0x31918cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6796), GPR_U32(ctx, 0));
    // 0x319190: 0xacc01a50  sw          $zero, 0x1A50($a2)
    ctx->pc = 0x319190u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6736), GPR_U32(ctx, 0));
    // 0x319194: 0xacc01a90  sw          $zero, 0x1A90($a2)
    ctx->pc = 0x319194u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6800), GPR_U32(ctx, 0));
    // 0x319198: 0xacc01a54  sw          $zero, 0x1A54($a2)
    ctx->pc = 0x319198u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6740), GPR_U32(ctx, 0));
    // 0x31919c: 0xacc01a94  sw          $zero, 0x1A94($a2)
    ctx->pc = 0x31919cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6804), GPR_U32(ctx, 0));
    // 0x3191a0: 0xacc01a58  sw          $zero, 0x1A58($a2)
    ctx->pc = 0x3191a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6744), GPR_U32(ctx, 0));
    // 0x3191a4: 0xacc01a98  sw          $zero, 0x1A98($a2)
    ctx->pc = 0x3191a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6808), GPR_U32(ctx, 0));
    // 0x3191a8: 0xacc01a5c  sw          $zero, 0x1A5C($a2)
    ctx->pc = 0x3191a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6748), GPR_U32(ctx, 0));
    // 0x3191ac: 0xacc01a9c  sw          $zero, 0x1A9C($a2)
    ctx->pc = 0x3191acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6812), GPR_U32(ctx, 0));
    // 0x3191b0: 0xacc01a60  sw          $zero, 0x1A60($a2)
    ctx->pc = 0x3191b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6752), GPR_U32(ctx, 0));
    // 0x3191b4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x3191B4u;
    {
        const bool branch_taken_0x3191b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3191B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3191B4u;
            // 0x3191b8: 0xacc01aa0  sw          $zero, 0x1AA0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 6816), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3191b4) {
            ctx->pc = 0x319168u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_319168;
        }
    }
    ctx->pc = 0x3191BCu;
    // 0x3191bc: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x3191bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x3191c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3191c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3191c4: 0xac202494  sw          $zero, 0x2494($at)
    ctx->pc = 0x3191c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9364), GPR_U32(ctx, 0));
    // 0x3191c8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3191c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3191cc: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x3191ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x3191d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3191d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3191d4: 0xac22249c  sw          $v0, 0x249C($at)
    ctx->pc = 0x3191d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9372), GPR_U32(ctx, 2));
    // 0x3191d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3191d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3191dc: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x3191dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x3191e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3191e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3191e4: 0xac202498  sw          $zero, 0x2498($at)
    ctx->pc = 0x3191e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9368), GPR_U32(ctx, 0));
    // 0x3191e8: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x3191e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x3191ec: 0xac2024a0  sw          $zero, 0x24A0($at)
    ctx->pc = 0x3191ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9376), GPR_U32(ctx, 0));
    // 0x3191f0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x3191f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x3191f4: 0xac2024a4  sw          $zero, 0x24A4($at)
    ctx->pc = 0x3191f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9380), GPR_U32(ctx, 0));
    // 0x3191f8: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x3191f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x3191fc: 0xac2024a8  sw          $zero, 0x24A8($at)
    ctx->pc = 0x3191fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9384), GPR_U32(ctx, 0));
    // 0x319200: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x319200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x319204: 0xac2324ac  sw          $v1, 0x24AC($at)
    ctx->pc = 0x319204u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9388), GPR_U32(ctx, 3));
    // 0x319208: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x319208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x31920c: 0xac2324b0  sw          $v1, 0x24B0($at)
    ctx->pc = 0x31920cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9392), GPR_U32(ctx, 3));
    // 0x319210: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x319210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x319214: 0xac2324b4  sw          $v1, 0x24B4($at)
    ctx->pc = 0x319214u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9396), GPR_U32(ctx, 3));
    // 0x319218: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x319218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x31921c: 0xac2024b8  sw          $zero, 0x24B8($at)
    ctx->pc = 0x31921cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9400), GPR_U32(ctx, 0));
    // 0x319220: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x319220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x319224: 0xac2024bc  sw          $zero, 0x24BC($at)
    ctx->pc = 0x319224u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9404), GPR_U32(ctx, 0));
    // 0x319228: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x319228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x31922c: 0xac2024c0  sw          $zero, 0x24C0($at)
    ctx->pc = 0x31922cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9408), GPR_U32(ctx, 0));
    // 0x319230: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x319230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x319234: 0xac2024c4  sw          $zero, 0x24C4($at)
    ctx->pc = 0x319234u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9412), GPR_U32(ctx, 0));
    // 0x319238: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x319238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x31923c: 0xac2024c8  sw          $zero, 0x24C8($at)
    ctx->pc = 0x31923cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9416), GPR_U32(ctx, 0));
    // 0x319240: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x319240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x319244: 0xac2024cc  sw          $zero, 0x24CC($at)
    ctx->pc = 0x319244u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9420), GPR_U32(ctx, 0));
    // 0x319248: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x319248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x31924c: 0xac2024d0  sw          $zero, 0x24D0($at)
    ctx->pc = 0x31924cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9424), GPR_U32(ctx, 0));
    // 0x319250: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x319250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x319254: 0xac2324d4  sw          $v1, 0x24D4($at)
    ctx->pc = 0x319254u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9428), GPR_U32(ctx, 3));
    // 0x319258: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x319258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x31925c: 0xac2324d8  sw          $v1, 0x24D8($at)
    ctx->pc = 0x31925cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9432), GPR_U32(ctx, 3));
    // 0x319260: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x319260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x319264: 0xac2324dc  sw          $v1, 0x24DC($at)
    ctx->pc = 0x319264u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9436), GPR_U32(ctx, 3));
    // 0x319268: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x319268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x31926c: 0xac2324e0  sw          $v1, 0x24E0($at)
    ctx->pc = 0x31926cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9440), GPR_U32(ctx, 3));
    // 0x319270: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x319270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x319274: 0xac2024e4  sw          $zero, 0x24E4($at)
    ctx->pc = 0x319274u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9444), GPR_U32(ctx, 0));
    // 0x319278: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x319278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x31927c: 0xac2024e8  sw          $zero, 0x24E8($at)
    ctx->pc = 0x31927cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9448), GPR_U32(ctx, 0));
    // 0x319280: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x319280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x319284: 0xac2024ec  sw          $zero, 0x24EC($at)
    ctx->pc = 0x319284u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9452), GPR_U32(ctx, 0));
    // 0x319288: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x319288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x31928c: 0xac2024f0  sw          $zero, 0x24F0($at)
    ctx->pc = 0x31928cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9456), GPR_U32(ctx, 0));
    // 0x319290: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x319290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x319294: 0xac2024f4  sw          $zero, 0x24F4($at)
    ctx->pc = 0x319294u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9460), GPR_U32(ctx, 0));
    // 0x319298: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x319298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x31929c: 0xac2024f8  sw          $zero, 0x24F8($at)
    ctx->pc = 0x31929cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9464), GPR_U32(ctx, 0));
    // 0x3192a0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x3192a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x3192a4: 0xac202500  sw          $zero, 0x2500($at)
    ctx->pc = 0x3192a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9472), GPR_U32(ctx, 0));
    // 0x3192a8: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x3192a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x3192ac: 0xac202504  sw          $zero, 0x2504($at)
    ctx->pc = 0x3192acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9476), GPR_U32(ctx, 0));
    // 0x3192b0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x3192b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x3192b4: 0xac20250c  sw          $zero, 0x250C($at)
    ctx->pc = 0x3192b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9484), GPR_U32(ctx, 0));
    // 0x3192b8: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x3192b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x3192bc: 0xac202508  sw          $zero, 0x2508($at)
    ctx->pc = 0x3192bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9480), GPR_U32(ctx, 0));
    // 0x3192c0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x3192c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x3192c4: 0xac202510  sw          $zero, 0x2510($at)
    ctx->pc = 0x3192c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9488), GPR_U32(ctx, 0));
    // 0x3192c8: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x3192c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x3192cc: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x3192ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
label_3192d0:
    // 0x3192d0: 0x864021  addu        $t0, $a0, $a2
    ctx->pc = 0x3192d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x3192d4: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x3192d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x3192d8: 0xad001b44  sw          $zero, 0x1B44($t0)
    ctx->pc = 0x3192d8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 6980), GPR_U32(ctx, 0));
    // 0x3192dc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3192dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3192e0: 0xac401b94  sw          $zero, 0x1B94($v0)
    ctx->pc = 0x3192e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7060), GPR_U32(ctx, 0));
    // 0x3192e4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x3192e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x3192e8: 0xac401b98  sw          $zero, 0x1B98($v0)
    ctx->pc = 0x3192e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7064), GPR_U32(ctx, 0));
    // 0x3192ec: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x3192ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x3192f0: 0xad001c34  sw          $zero, 0x1C34($t0)
    ctx->pc = 0x3192f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7220), GPR_U32(ctx, 0));
    // 0x3192f4: 0x28a20014  slti        $v0, $a1, 0x14
    ctx->pc = 0x3192f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x3192f8: 0xad031c84  sw          $v1, 0x1C84($t0)
    ctx->pc = 0x3192f8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7300), GPR_U32(ctx, 3));
    // 0x3192fc: 0xad001cd4  sw          $zero, 0x1CD4($t0)
    ctx->pc = 0x3192fcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7380), GPR_U32(ctx, 0));
    // 0x319300: 0xad001d24  sw          $zero, 0x1D24($t0)
    ctx->pc = 0x319300u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7460), GPR_U32(ctx, 0));
    // 0x319304: 0xad001d74  sw          $zero, 0x1D74($t0)
    ctx->pc = 0x319304u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7540), GPR_U32(ctx, 0));
    // 0x319308: 0xad001dc4  sw          $zero, 0x1DC4($t0)
    ctx->pc = 0x319308u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7620), GPR_U32(ctx, 0));
    // 0x31930c: 0xad001e14  sw          $zero, 0x1E14($t0)
    ctx->pc = 0x31930cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7700), GPR_U32(ctx, 0));
    // 0x319310: 0xad031e64  sw          $v1, 0x1E64($t0)
    ctx->pc = 0x319310u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7780), GPR_U32(ctx, 3));
    // 0x319314: 0xad001eb4  sw          $zero, 0x1EB4($t0)
    ctx->pc = 0x319314u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7860), GPR_U32(ctx, 0));
    // 0x319318: 0xad001f04  sw          $zero, 0x1F04($t0)
    ctx->pc = 0x319318u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7940), GPR_U32(ctx, 0));
    // 0x31931c: 0xad001f54  sw          $zero, 0x1F54($t0)
    ctx->pc = 0x31931cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8020), GPR_U32(ctx, 0));
    // 0x319320: 0xad031fa4  sw          $v1, 0x1FA4($t0)
    ctx->pc = 0x319320u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8100), GPR_U32(ctx, 3));
    // 0x319324: 0xad031ff4  sw          $v1, 0x1FF4($t0)
    ctx->pc = 0x319324u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8180), GPR_U32(ctx, 3));
    // 0x319328: 0xad002044  sw          $zero, 0x2044($t0)
    ctx->pc = 0x319328u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8260), GPR_U32(ctx, 0));
    // 0x31932c: 0xad002094  sw          $zero, 0x2094($t0)
    ctx->pc = 0x31932cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8340), GPR_U32(ctx, 0));
    // 0x319330: 0xad0020e4  sw          $zero, 0x20E4($t0)
    ctx->pc = 0x319330u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8420), GPR_U32(ctx, 0));
    // 0x319334: 0xad002134  sw          $zero, 0x2134($t0)
    ctx->pc = 0x319334u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8500), GPR_U32(ctx, 0));
    // 0x319338: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x319338u;
    {
        const bool branch_taken_0x319338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31933Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x319338u;
            // 0x31933c: 0xad002184  sw          $zero, 0x2184($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8580), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319338) {
            ctx->pc = 0x3192D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3192d0;
        }
    }
    ctx->pc = 0x319340u;
    // 0x319340: 0xc054bb4  jal         func_152ED0
    ctx->pc = 0x319340u;
    SET_GPR_U32(ctx, 31, 0x319348u);
    ctx->pc = 0x319344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319340u;
            // 0x319344: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152ED0u;
    if (runtime->hasFunction(0x152ED0u)) {
        auto targetFn = runtime->lookupFunction(0x152ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319348u; }
        if (ctx->pc != 0x319348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset__6ClsMesFi_0x152ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319348u; }
        if (ctx->pc != 0x319348u) { return; }
    }
    ctx->pc = 0x319348u;
label_319348:
    // 0x319348: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x319348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x31934c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31934cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319350: 0xc054cdc  jal         func_153370
    ctx->pc = 0x319350u;
    SET_GPR_U32(ctx, 31, 0x319358u);
    ctx->pc = 0x319354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319350u;
            // 0x319354: 0x248409d0  addiu       $a0, $a0, 0x9D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153370u;
    if (runtime->hasFunction(0x153370u)) {
        auto targetFn = runtime->lookupFunction(0x153370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319358u; }
        if (ctx->pc != 0x319358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWindowMode__6ClsMesFi_0x153370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319358u; }
        if (ctx->pc != 0x319358u) { return; }
    }
    ctx->pc = 0x319358u;
label_319358:
    // 0x319358: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x319358u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
    // 0x31935c: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x31935cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x319360: 0x24a5f9d0  addiu       $a1, $a1, -0x630
    ctx->pc = 0x319360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965712));
    // 0x319364: 0xc054ba8  jal         func_152EA0
    ctx->pc = 0x319364u;
    SET_GPR_U32(ctx, 31, 0x31936Cu);
    ctx->pc = 0x319368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319364u;
            // 0x319368: 0x248409d0  addiu       $a0, $a0, 0x9D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EA0u;
    if (runtime->hasFunction(0x152EA0u)) {
        auto targetFn = runtime->lookupFunction(0x152EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31936Cu; }
        if (ctx->pc != 0x31936Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuff__6ClsMesFPs_0x152ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31936Cu; }
        if (ctx->pc != 0x31936Cu) { return; }
    }
    ctx->pc = 0x31936Cu;
label_31936c:
    // 0x31936c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x31936cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x319370: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x319370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x319374: 0xac3224fc  sw          $s2, 0x24FC($at)
    ctx->pc = 0x319374u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9468), GPR_U32(ctx, 18));
    // 0x319378: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x319378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x31937c: 0xaf80a32c  sw          $zero, -0x5CD4($gp)
    ctx->pc = 0x31937cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943532), GPR_U32(ctx, 0));
    // 0x319380: 0xac202bb8  sw          $zero, 0x2BB8($at)
    ctx->pc = 0x319380u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11192), GPR_U32(ctx, 0));
    // 0x319384: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x319384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x319388: 0xac232bbc  sw          $v1, 0x2BBC($at)
    ctx->pc = 0x319388u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11196), GPR_U32(ctx, 3));
    // 0x31938c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x31938cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x319390: 0xac232bc8  sw          $v1, 0x2BC8($at)
    ctx->pc = 0x319390u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11208), GPR_U32(ctx, 3));
    // 0x319394: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x319394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x319398: 0xac202bb0  sw          $zero, 0x2BB0($at)
    ctx->pc = 0x319398u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11184), GPR_U32(ctx, 0));
    // 0x31939c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x31939cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x3193a0: 0xac202bc4  sw          $zero, 0x2BC4($at)
    ctx->pc = 0x3193a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11204), GPR_U32(ctx, 0));
    // 0x3193a4: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x3193a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x3193a8: 0xac202bc0  sw          $zero, 0x2BC0($at)
    ctx->pc = 0x3193a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11200), GPR_U32(ctx, 0));
    // 0x3193ac: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x3193acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x3193b0: 0xac202bb4  sw          $zero, 0x2BB4($at)
    ctx->pc = 0x3193b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11188), GPR_U32(ctx, 0));
label_3193b4:
    // 0x3193b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3193b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3193b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3193b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3193bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3193bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3193c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3193c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3193c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3193C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3193C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3193C4u;
            // 0x3193c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3193CCu;
}
