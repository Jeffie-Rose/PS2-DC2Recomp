#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: BurnEditParts__Fv
// Address: 0x1af250 - 0x1af3a0
void BurnEditParts__Fv_0x1af250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BurnEditParts__Fv_0x1af250");
#endif

    switch (ctx->pc) {
        case 0x1af26cu: goto label_1af26c;
        case 0x1af278u: goto label_1af278;
        case 0x1af290u: goto label_1af290;
        case 0x1af2a8u: goto label_1af2a8;
        case 0x1af2c0u: goto label_1af2c0;
        case 0x1af2ccu: goto label_1af2cc;
        case 0x1af2d8u: goto label_1af2d8;
        case 0x1af2e0u: goto label_1af2e0;
        case 0x1af2f8u: goto label_1af2f8;
        case 0x1af318u: goto label_1af318;
        case 0x1af324u: goto label_1af324;
        case 0x1af358u: goto label_1af358;
        case 0x1af368u: goto label_1af368;
        default: break;
    }

    ctx->pc = 0x1af250u;

    // 0x1af250: 0x27bdfb10  addiu       $sp, $sp, -0x4F0
    ctx->pc = 0x1af250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966032));
    // 0x1af254: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1af254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1af258: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1af258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1af25c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1af25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1af260: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1af260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1af264: 0xc064220  jal         func_190880
    ctx->pc = 0x1AF264u;
    SET_GPR_U32(ctx, 31, 0x1AF26Cu);
    ctx->pc = 0x1AF268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF264u;
            // 0x1af268: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF26Cu; }
        if (ctx->pc != 0x1AF26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF26Cu; }
        if (ctx->pc != 0x1AF26Cu) { return; }
    }
    ctx->pc = 0x1AF26Cu;
label_1af26c:
    // 0x1af26c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1af26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af270: 0xc0bd920  jal         func_2F6480
    ctx->pc = 0x1AF270u;
    SET_GPR_U32(ctx, 31, 0x1AF278u);
    ctx->pc = 0x1AF274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF270u;
            // 0x1af274: 0x24050208  addiu       $a1, $zero, 0x208 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6480u;
    if (runtime->hasFunction(0x2F6480u)) {
        auto targetFn = runtime->lookupFunction(0x2F6480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF278u; }
        if (ctx->pc != 0x1AF278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitFlag__9CSaveDataFi_0x2f6480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF278u; }
        if (ctx->pc != 0x1AF278u) { return; }
    }
    ctx->pc = 0x1AF278u;
label_1af278:
    // 0x1af278: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF278u;
    {
        const bool branch_taken_0x1af278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF278u;
            // 0x1af27c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af278) {
            ctx->pc = 0x1AF288u;
            goto label_1af288;
        }
    }
    ctx->pc = 0x1AF280u;
    // 0x1af280: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1AF280u;
    {
        const bool branch_taken_0x1af280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF280u;
            // 0x1af284: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af280) {
            ctx->pc = 0x1AF388u;
            goto label_1af388;
        }
    }
    ctx->pc = 0x1AF288u;
label_1af288:
    // 0x1af288: 0xc0a0f80  jal         func_283E00
    ctx->pc = 0x1AF288u;
    SET_GPR_U32(ctx, 31, 0x1AF290u);
    ctx->pc = 0x1AF28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF288u;
            // 0x1af28c: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283E00u;
    if (runtime->hasFunction(0x283E00u)) {
        auto targetFn = runtime->lookupFunction(0x283E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF290u; }
        if (ctx->pc != 0x1AF290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainMapNo__6CSceneFv_0x283e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF290u; }
        if (ctx->pc != 0x1AF290u) { return; }
    }
    ctx->pc = 0x1AF290u;
label_1af290:
    // 0x1af290: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1af290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1af294: 0x1443003b  bne         $v0, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x1AF294u;
    {
        const bool branch_taken_0x1af294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1AF298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF294u;
            // 0x1af298: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af294) {
            ctx->pc = 0x1AF384u;
            goto label_1af384;
        }
    }
    ctx->pc = 0x1AF29Cu;
    // 0x1af29c: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1af29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1af2a0: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x1AF2A0u;
    SET_GPR_U32(ctx, 31, 0x1AF2A8u);
    ctx->pc = 0x1AF2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF2A0u;
            // 0x1af2a4: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF2A8u; }
        if (ctx->pc != 0x1AF2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF2A8u; }
        if (ctx->pc != 0x1AF2A8u) { return; }
    }
    ctx->pc = 0x1AF2A8u;
label_1af2a8:
    // 0x1af2a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1af2a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af2ac: 0x12000034  beqz        $s0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1AF2ACu;
    {
        const bool branch_taken_0x1af2ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF2ACu;
            // 0x1af2b0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af2ac) {
            ctx->pc = 0x1AF380u;
            goto label_1af380;
        }
    }
    ctx->pc = 0x1AF2B4u;
    // 0x1af2b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1af2b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af2b8: 0xc049c86  jal         func_127218
    ctx->pc = 0x1AF2B8u;
    SET_GPR_U32(ctx, 31, 0x1AF2C0u);
    ctx->pc = 0x1AF2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF2B8u;
            // 0x1af2bc: 0x24060494  addiu       $a2, $zero, 0x494 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1172));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF2C0u; }
        if (ctx->pc != 0x1AF2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF2C0u; }
        if (ctx->pc != 0x1AF2C0u) { return; }
    }
    ctx->pc = 0x1AF2C0u;
label_1af2c0:
    // 0x1af2c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1af2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af2c4: 0xc06c738  jal         func_1B1CE0
    ctx->pc = 0x1AF2C4u;
    SET_GPR_U32(ctx, 31, 0x1AF2CCu);
    ctx->pc = 0x1AF2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF2C4u;
            // 0x1af2c8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1CE0u;
    if (runtime->hasFunction(0x1B1CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B1CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF2CCu; }
        if (ctx->pc != 0x1AF2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BurnEditParts__8CEditMapFPQ28CEditMap10RemoveInfo_0x1b1ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF2CCu; }
        if (ctx->pc != 0x1AF2CCu) { return; }
    }
    ctx->pc = 0x1AF2CCu;
label_1af2cc:
    // 0x1af2cc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1af2ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af2d0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1AF2D0u;
    {
        const bool branch_taken_0x1af2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF2D0u;
            // 0x1af2d4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af2d0) {
            ctx->pc = 0x1AF300u;
            goto label_1af300;
        }
    }
    ctx->pc = 0x1AF2D8u;
label_1af2d8:
    // 0x1af2d8: 0xc064220  jal         func_190880
    ctx->pc = 0x1AF2D8u;
    SET_GPR_U32(ctx, 31, 0x1AF2E0u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF2E0u; }
        if (ctx->pc != 0x1AF2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF2E0u; }
        if (ctx->pc != 0x1AF2E0u) { return; }
    }
    ctx->pc = 0x1AF2E0u;
label_1af2e0:
    // 0x1af2e0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1af2e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1af2e4: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x1af2e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x1af2e8: 0x412021  addu        $a0, $v0, $at
    ctx->pc = 0x1af2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1af2ec: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x1af2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x1af2f0: 0xc06725c  jal         func_19C970
    ctx->pc = 0x1AF2F0u;
    SET_GPR_U32(ctx, 31, 0x1AF2F8u);
    ctx->pc = 0x1AF2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF2F0u;
            // 0x1af2f4: 0x8c450464  lw          $a1, 0x464($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1124)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C970u;
    if (runtime->hasFunction(0x19C970u)) {
        auto targetFn = runtime->lookupFunction(0x19C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF2F8u; }
        if (ctx->pc != 0x1AF2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LeaveHouse__16CUserDataManagerFi_0x19c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF2F8u; }
        if (ctx->pc != 0x1AF2F8u) { return; }
    }
    ctx->pc = 0x1AF2F8u;
label_1af2f8:
    // 0x1af2f8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1af2f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1af2fc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1af2fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1af300:
    // 0x1af300: 0x8fa20460  lw          $v0, 0x460($sp)
    ctx->pc = 0x1af300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x1af304: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1af304u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1af308: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1AF308u;
    {
        const bool branch_taken_0x1af308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af308) {
            ctx->pc = 0x1AF2D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1af2d8;
        }
    }
    ctx->pc = 0x1AF310u;
    // 0x1af310: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1af310u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af314: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1af314u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af318:
    // 0x1af318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1af318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af31c: 0xc06c2d4  jal         func_1B0B50
    ctx->pc = 0x1AF31Cu;
    SET_GPR_U32(ctx, 31, 0x1AF324u);
    ctx->pc = 0x1AF320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF31Cu;
            // 0x1af320: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0B50u;
    if (runtime->hasFunction(0x1B0B50u)) {
        auto targetFn = runtime->lookupFunction(0x1B0B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF324u; }
        if (ctx->pc != 0x1AF324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePartsInfoAtID__8CEditMapFi_0x1b0b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF324u; }
        if (ctx->pc != 0x1AF324u) { return; }
    }
    ctx->pc = 0x1AF324u;
label_1af324:
    // 0x1af324: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1AF324u;
    {
        const bool branch_taken_0x1af324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af324) {
            ctx->pc = 0x1AF368u;
            goto label_1af368;
        }
    }
    ctx->pc = 0x1AF32Cu;
    // 0x1af32c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1af32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1af330: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x1af330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x1af334: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1AF334u;
    {
        const bool branch_taken_0x1af334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF334u;
            // 0x1af338: 0x30621000  andi        $v0, $v1, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af334) {
            ctx->pc = 0x1AF368u;
            goto label_1af368;
        }
    }
    ctx->pc = 0x1AF33Cu;
    // 0x1af33c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1AF33Cu;
    {
        const bool branch_taken_0x1af33c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF33Cu;
            // 0x1af340: 0x25d1021  addu        $v0, $s2, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af33c) {
            ctx->pc = 0x1AF368u;
            goto label_1af368;
        }
    }
    ctx->pc = 0x1AF344u;
    // 0x1af344: 0x8c530060  lw          $s3, 0x60($v0)
    ctx->pc = 0x1af344u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1af348: 0x1a600007  blez        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AF348u;
    {
        const bool branch_taken_0x1af348 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x1af348) {
            ctx->pc = 0x1AF368u;
            goto label_1af368;
        }
    }
    ctx->pc = 0x1AF350u;
    // 0x1af350: 0xc064220  jal         func_190880
    ctx->pc = 0x1AF350u;
    SET_GPR_U32(ctx, 31, 0x1AF358u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF358u; }
        if (ctx->pc != 0x1AF358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF358u; }
        if (ctx->pc != 0x1AF358u) { return; }
    }
    ctx->pc = 0x1AF358u;
label_1af358:
    // 0x1af358: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1af358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af35c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1af35cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af360: 0xc0bd988  jal         func_2F6620
    ctx->pc = 0x1AF360u;
    SET_GPR_U32(ctx, 31, 0x1AF368u);
    ctx->pc = 0x1AF364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF360u;
            // 0x1af364: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6620u;
    if (runtime->hasFunction(0x2F6620u)) {
        auto targetFn = runtime->lookupFunction(0x2F6620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF368u; }
        if (ctx->pc != 0x1AF368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddBuildPartsNum__9CSaveDataFii_0x2f6620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF368u; }
        if (ctx->pc != 0x1AF368u) { return; }
    }
    ctx->pc = 0x1AF368u;
label_1af368:
    // 0x1af368: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1af368u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1af36c: 0x2a220100  slti        $v0, $s1, 0x100
    ctx->pc = 0x1af36cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1af370: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1AF370u;
    {
        const bool branch_taken_0x1af370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF370u;
            // 0x1af374: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af370) {
            ctx->pc = 0x1AF318u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1af318;
        }
    }
    ctx->pc = 0x1AF378u;
    // 0x1af378: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AF378u;
    {
        const bool branch_taken_0x1af378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF378u;
            // 0x1af37c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af378) {
            ctx->pc = 0x1AF384u;
            goto label_1af384;
        }
    }
    ctx->pc = 0x1AF380u;
label_1af380:
    // 0x1af380: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1af380u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af384:
    // 0x1af384: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1af384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1af388:
    // 0x1af388: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1af388u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1af38c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1af38cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af390: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1af390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af394: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1af394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af398: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF398u;
            // 0x1af39c: 0x27bd04f0  addiu       $sp, $sp, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AF3A0u;
}
