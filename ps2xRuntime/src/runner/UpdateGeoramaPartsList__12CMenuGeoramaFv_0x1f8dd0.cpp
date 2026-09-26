#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: UpdateGeoramaPartsList__12CMenuGeoramaFv
// Address: 0x1f8dd0 - 0x1f9480
void UpdateGeoramaPartsList__12CMenuGeoramaFv_0x1f8dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdateGeoramaPartsList__12CMenuGeoramaFv_0x1f8dd0");
#endif

    switch (ctx->pc) {
        case 0x1f8e14u: goto label_1f8e14;
        case 0x1f8e30u: goto label_1f8e30;
        case 0x1f8e78u: goto label_1f8e78;
        case 0x1f8e8cu: goto label_1f8e8c;
        case 0x1f8ebcu: goto label_1f8ebc;
        case 0x1f8eccu: goto label_1f8ecc;
        case 0x1f8f04u: goto label_1f8f04;
        case 0x1f8f44u: goto label_1f8f44;
        case 0x1f8f7cu: goto label_1f8f7c;
        case 0x1f8fb8u: goto label_1f8fb8;
        case 0x1f8fc4u: goto label_1f8fc4;
        case 0x1f8ff0u: goto label_1f8ff0;
        case 0x1f900cu: goto label_1f900c;
        case 0x1f9070u: goto label_1f9070;
        case 0x1f9090u: goto label_1f9090;
        case 0x1f9180u: goto label_1f9180;
        case 0x1f91d8u: goto label_1f91d8;
        case 0x1f91ecu: goto label_1f91ec;
        case 0x1f91f8u: goto label_1f91f8;
        case 0x1f9210u: goto label_1f9210;
        case 0x1f929cu: goto label_1f929c;
        case 0x1f92dcu: goto label_1f92dc;
        case 0x1f92f0u: goto label_1f92f0;
        case 0x1f92fcu: goto label_1f92fc;
        case 0x1f9334u: goto label_1f9334;
        case 0x1f93d8u: goto label_1f93d8;
        case 0x1f9440u: goto label_1f9440;
        case 0x1f9450u: goto label_1f9450;
        default: break;
    }

    ctx->pc = 0x1f8dd0u;

    // 0x1f8dd0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1f8dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1f8dd4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1f8dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1f8dd8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1f8dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1f8ddc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1f8ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1f8de0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1f8de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1f8de4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f8de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1f8de8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f8de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1f8dec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f8decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1f8df0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f8df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f8df4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f8df4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8df8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f8df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f8dfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f8dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f8e00: 0x8f848ff8  lw          $a0, -0x7008($gp)
    ctx->pc = 0x1f8e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938616)));
    // 0x1f8e04: 0x10800192  beqz        $a0, . + 4 + (0x192 << 2)
    ctx->pc = 0x1F8E04u;
    {
        const bool branch_taken_0x1f8e04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8E04u;
            // 0x1f8e08: 0x266501b4  addiu       $a1, $s3, 0x1B4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 436));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8e04) {
            ctx->pc = 0x1F9450u;
            goto label_1f9450;
        }
    }
    ctx->pc = 0x1F8E0Cu;
    // 0x1f8e0c: 0xc06c358  jal         func_1B0D60
    ctx->pc = 0x1F8E0Cu;
    SET_GPR_U32(ctx, 31, 0x1F8E14u);
    ctx->pc = 0x1F8E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8E0Cu;
            // 0x1f8e10: 0x24060180  addiu       $a2, $zero, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0D60u;
    if (runtime->hasFunction(0x1B0D60u)) {
        auto targetFn = runtime->lookupFunction(0x1B0D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8E14u; }
        if (ctx->pc != 0x1F8E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceIDList__8CEditMapFPii_0x1b0d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8E14u; }
        if (ctx->pc != 0x1F8E14u) { return; }
    }
    ctx->pc = 0x1F8E14u;
label_1f8e14:
    // 0x1f8e14: 0xae6201b0  sw          $v0, 0x1B0($s3)
    ctx->pc = 0x1f8e14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 432), GPR_U32(ctx, 2));
    // 0x1f8e18: 0x8e6501b0  lw          $a1, 0x1B0($s3)
    ctx->pc = 0x1f8e18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 432)));
    // 0x1f8e1c: 0x28a10180  slti        $at, $a1, 0x180
    ctx->pc = 0x1f8e1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)384) ? 1 : 0);
    // 0x1f8e20: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x1F8E20u;
    {
        const bool branch_taken_0x1f8e20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8E20u;
            // 0x1f8e24: 0x53080  sll         $a2, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8e20) {
            ctx->pc = 0x1F8E54u;
            goto label_1f8e54;
        }
    }
    ctx->pc = 0x1F8E28u;
    // 0x1f8e28: 0x53980  sll         $a3, $a1, 6
    ctx->pc = 0x1f8e28u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x1f8e2c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1f8e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f8e30:
    // 0x1f8e30: 0x2661821  addu        $v1, $s3, $a2
    ctx->pc = 0x1f8e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x1f8e34: 0x2671021  addu        $v0, $s3, $a3
    ctx->pc = 0x1f8e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x1f8e38: 0xac6401b4  sw          $a0, 0x1B4($v1)
    ctx->pc = 0x1f8e38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 436), GPR_U32(ctx, 4));
    // 0x1f8e3c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f8e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f8e40: 0xa04007b4  sb          $zero, 0x7B4($v0)
    ctx->pc = 0x1f8e40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1972), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f8e44: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1f8e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1f8e48: 0x28a20180  slti        $v0, $a1, 0x180
    ctx->pc = 0x1f8e48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)384) ? 1 : 0);
    // 0x1f8e4c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F8E4Cu;
    {
        const bool branch_taken_0x1f8e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8E4Cu;
            // 0x1f8e50: 0x24e70040  addiu       $a3, $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8e4c) {
            ctx->pc = 0x1F8E30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f8e30;
        }
    }
    ctx->pc = 0x1F8E54u;
label_1f8e54:
    // 0x1f8e54: 0x0  nop
    ctx->pc = 0x1f8e54u;
    // NOP
    // 0x1f8e58: 0x3402bbb8  ori         $v0, $zero, 0xBBB8
    ctx->pc = 0x1f8e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48056);
    // 0x1f8e5c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1f8e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1f8e60: 0x3401bbbc  ori         $at, $zero, 0xBBBC
    ctx->pc = 0x1f8e60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48060);
    // 0x1f8e64: 0x2612021  addu        $a0, $s3, $at
    ctx->pc = 0x1f8e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
    // 0x1f8e68: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1f8e68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1f8e6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f8e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8e70: 0xc049c86  jal         func_127218
    ctx->pc = 0x1F8E70u;
    SET_GPR_U32(ctx, 31, 0x1F8E78u);
    ctx->pc = 0x1F8E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8E70u;
            // 0x1f8e74: 0x24065400  addiu       $a2, $zero, 0x5400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8E78u; }
        if (ctx->pc != 0x1F8E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8E78u; }
        if (ctx->pc != 0x1F8E78u) { return; }
    }
    ctx->pc = 0x1F8E78u;
label_1f8e78:
    // 0x1f8e78: 0x266467b8  addiu       $a0, $s3, 0x67B8
    ctx->pc = 0x1f8e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 26552));
    // 0x1f8e7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f8e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8e80: 0x24065400  addiu       $a2, $zero, 0x5400
    ctx->pc = 0x1f8e80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21504));
    // 0x1f8e84: 0xc049c86  jal         func_127218
    ctx->pc = 0x1F8E84u;
    SET_GPR_U32(ctx, 31, 0x1F8E8Cu);
    ctx->pc = 0x1F8E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8E84u;
            // 0x1f8e88: 0xae6067b4  sw          $zero, 0x67B4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 26548), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8E8Cu; }
        if (ctx->pc != 0x1F8E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8E8Cu; }
        if (ctx->pc != 0x1F8E8Cu) { return; }
    }
    ctx->pc = 0x1F8E8Cu;
label_1f8e8c:
    // 0x1f8e8c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1f8e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1f8e90: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f8e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f8e94: 0x344263c0  ori         $v0, $v0, 0x63C0
    ctx->pc = 0x1f8e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25536);
    // 0x1f8e98: 0xae6067b4  sw          $zero, 0x67B4($s3)
    ctx->pc = 0x1f8e98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 26548), GPR_U32(ctx, 0));
    // 0x1f8e9c: 0x2610821  addu        $at, $s3, $at
    ctx->pc = 0x1f8e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
    // 0x1f8ea0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1f8ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1f8ea4: 0xac20bbb8  sw          $zero, -0x4448($at)
    ctx->pc = 0x1f8ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949816), GPR_U32(ctx, 0));
    // 0x1f8ea8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f8ea8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8eac: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1f8eacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1f8eb0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f8eb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8eb4: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x1F8EB4u;
    {
        const bool branch_taken_0x1f8eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8EB4u;
            // 0x1f8eb8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8eb4) {
            ctx->pc = 0x1F91BCu;
            goto label_1f91bc;
        }
    }
    ctx->pc = 0x1F8EBCu;
label_1f8ebc:
    // 0x1f8ebc: 0x8f848ff8  lw          $a0, -0x7008($gp)
    ctx->pc = 0x1f8ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938616)));
    // 0x1f8ec0: 0x8c4501b4  lw          $a1, 0x1B4($v0)
    ctx->pc = 0x1f8ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 436)));
    // 0x1f8ec4: 0xc06c310  jal         func_1B0C40
    ctx->pc = 0x1F8EC4u;
    SET_GPR_U32(ctx, 31, 0x1F8ECCu);
    ctx->pc = 0x1F8EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8EC4u;
            // 0x1f8ec8: 0x245601b4  addiu       $s6, $v0, 0x1B4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 436));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8ECCu; }
        if (ctx->pc != 0x1F8ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8ECCu; }
        if (ctx->pc != 0x1F8ECCu) { return; }
    }
    ctx->pc = 0x1F8ECCu;
label_1f8ecc:
    // 0x1f8ecc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1f8eccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8ed0: 0x128000b6  beqz        $s4, . + 4 + (0xB6 << 2)
    ctx->pc = 0x1F8ED0u;
    {
        const bool branch_taken_0x1f8ed0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8ed0) {
            ctx->pc = 0x1F91ACu;
            goto label_1f91ac;
        }
    }
    ctx->pc = 0x1F8ED8u;
    // 0x1f8ed8: 0x8e950324  lw          $s5, 0x324($s4)
    ctx->pc = 0x1f8ed8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 804)));
    // 0x1f8edc: 0x12a000b3  beqz        $s5, . + 4 + (0xB3 << 2)
    ctx->pc = 0x1F8EDCu;
    {
        const bool branch_taken_0x1f8edc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8edc) {
            ctx->pc = 0x1F91ACu;
            goto label_1f91ac;
        }
    }
    ctx->pc = 0x1F8EE4u;
    // 0x1f8ee4: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x1f8ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1f8ee8: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1f8ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1f8eec: 0x144000af  bnez        $v0, . + 4 + (0xAF << 2)
    ctx->pc = 0x1F8EECu;
    {
        const bool branch_taken_0x1f8eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f8eec) {
            ctx->pc = 0x1F91ACu;
            goto label_1f91ac;
        }
    }
    ctx->pc = 0x1F8EF4u;
    // 0x1f8ef4: 0x8ea5003c  lw          $a1, 0x3C($s5)
    ctx->pc = 0x1f8ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
    // 0x1f8ef8: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x1f8ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x1f8efc: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1F8EFCu;
    SET_GPR_U32(ctx, 31, 0x1F8F04u);
    ctx->pc = 0x1F8F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8EFCu;
            // 0x1f8f00: 0x244407b4  addiu       $a0, $v0, 0x7B4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1972));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8F04u; }
        if (ctx->pc != 0x1F8F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8F04u; }
        if (ctx->pc != 0x1F8F04u) { return; }
    }
    ctx->pc = 0x1F8F04u;
label_1f8f04:
    // 0x1f8f04: 0x8e970310  lw          $s7, 0x310($s4)
    ctx->pc = 0x1f8f04u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 784)));
    // 0x1f8f08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f8f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8f0c: 0x16e20022  bne         $s7, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1F8F0Cu;
    {
        const bool branch_taken_0x1f8f0c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F8F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8F0Cu;
            // 0x1f8f10: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8f0c) {
            ctx->pc = 0x1F8F98u;
            goto label_1f8f98;
        }
    }
    ctx->pc = 0x1F8F14u;
    // 0x1f8f14: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f8f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8f18: 0x2610821  addu        $at, $s3, $at
    ctx->pc = 0x1f8f18u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
    // 0x1f8f1c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1f8f1cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8f20: 0x8c2363c0  lw          $v1, 0x63C0($at)
    ctx->pc = 0x1f8f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 25536)));
    // 0x1f8f24: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1f8f24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f8f28: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f8f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f8f2c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1f8f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f8f30: 0x342163c4  ori         $at, $at, 0x63C4
    ctx->pc = 0x1f8f30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25540);
    // 0x1f8f34: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1f8f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1f8f38: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1f8f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1f8f3c: 0xc06d778  jal         func_1B5DE0
    ctx->pc = 0x1F8F3Cu;
    SET_GPR_U32(ctx, 31, 0x1F8F44u);
    ctx->pc = 0x1F8F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8F3Cu;
            // 0x1f8f40: 0x41a021  addu        $s4, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5DE0u;
    if (runtime->hasFunction(0x1B5DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8F44u; }
        if (ctx->pc != 0x1F8F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartsType__10CEditPartsFv_0x1b5de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8F44u; }
        if (ctx->pc != 0x1F8F44u) { return; }
    }
    ctx->pc = 0x1F8F44u;
label_1f8f44:
    // 0x1f8f44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f8f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8f48: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F8F48u;
    {
        const bool branch_taken_0x1f8f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f8f48) {
            ctx->pc = 0x1F8F54u;
            goto label_1f8f54;
        }
    }
    ctx->pc = 0x1F8F50u;
    // 0x1f8f50: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x1f8f50u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f8f54:
    // 0x1f8f54: 0x0  nop
    ctx->pc = 0x1f8f54u;
    // NOP
    // 0x1f8f58: 0x13c0000f  beqz        $fp, . + 4 + (0xF << 2)
    ctx->pc = 0x1F8F58u;
    {
        const bool branch_taken_0x1f8f58 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8f58) {
            ctx->pc = 0x1F8F98u;
            goto label_1f8f98;
        }
    }
    ctx->pc = 0x1F8F60u;
    // 0x1f8f60: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x1f8f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1f8f64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f8f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8f68: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x1f8f68u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x1f8f6c: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x1f8f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x1f8f70: 0x8ea5003c  lw          $a1, 0x3C($s5)
    ctx->pc = 0x1f8f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
    // 0x1f8f74: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1F8F74u;
    SET_GPR_U32(ctx, 31, 0x1F8F7Cu);
    ctx->pc = 0x1F8F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8F74u;
            // 0x1f8f78: 0x26840008  addiu       $a0, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8F7Cu; }
        if (ctx->pc != 0x1F8F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8F7Cu; }
        if (ctx->pc != 0x1F8F7Cu) { return; }
    }
    ctx->pc = 0x1F8F7Cu;
label_1f8f7c:
    // 0x1f8f7c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f8f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f8f80: 0x2610821  addu        $at, $s3, $at
    ctx->pc = 0x1f8f80u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
    // 0x1f8f84: 0x8c2263c0  lw          $v0, 0x63C0($at)
    ctx->pc = 0x1f8f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 25536)));
    // 0x1f8f88: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f8f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f8f8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f8f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f8f90: 0x2610821  addu        $at, $s3, $at
    ctx->pc = 0x1f8f90u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
    // 0x1f8f94: 0xac2263c0  sw          $v0, 0x63C0($at)
    ctx->pc = 0x1f8f94u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 25536), GPR_U32(ctx, 2));
label_1f8f98:
    // 0x1f8f98: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1f8f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1f8f9c: 0x3442b838  ori         $v0, $v0, 0xB838
    ctx->pc = 0x1f8f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47160);
    // 0x1f8fa0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1f8fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1f8fa4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f8fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f8fa8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1F8FA8u;
    {
        const bool branch_taken_0x1f8fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8fa8) {
            ctx->pc = 0x1F900Cu;
            goto label_1f900c;
        }
    }
    ctx->pc = 0x1F8FB0u;
    // 0x1f8fb0: 0xc064220  jal         func_190880
    ctx->pc = 0x1F8FB0u;
    SET_GPR_U32(ctx, 31, 0x1F8FB8u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8FB8u; }
        if (ctx->pc != 0x1F8FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8FB8u; }
        if (ctx->pc != 0x1F8FB8u) { return; }
    }
    ctx->pc = 0x1F8FB8u;
label_1f8fb8:
    // 0x1f8fb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f8fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8fbc: 0xc0bd920  jal         func_2F6480
    ctx->pc = 0x1F8FBCu;
    SET_GPR_U32(ctx, 31, 0x1F8FC4u);
    ctx->pc = 0x1F8FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8FBCu;
            // 0x1f8fc0: 0x24050208  addiu       $a1, $zero, 0x208 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6480u;
    if (runtime->hasFunction(0x2F6480u)) {
        auto targetFn = runtime->lookupFunction(0x2F6480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8FC4u; }
        if (ctx->pc != 0x1F8FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitFlag__9CSaveDataFi_0x2f6480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8FC4u; }
        if (ctx->pc != 0x1F8FC4u) { return; }
    }
    ctx->pc = 0x1F8FC4u;
label_1f8fc4:
    // 0x1f8fc4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F8FC4u;
    {
        const bool branch_taken_0x1f8fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8FC4u;
            // 0x1f8fc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8fc4) {
            ctx->pc = 0x1F8FE4u;
            goto label_1f8fe4;
        }
    }
    ctx->pc = 0x1F8FCCu;
    // 0x1f8fcc: 0x8f838ffc  lw          $v1, -0x7004($gp)
    ctx->pc = 0x1f8fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938620)));
    // 0x1f8fd0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f8fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f8fd4: 0x8c630140  lw          $v1, 0x140($v1)
    ctx->pc = 0x1f8fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 320)));
    // 0x1f8fd8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F8FD8u;
    {
        const bool branch_taken_0x1f8fd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f8fd8) {
            ctx->pc = 0x1F8FE4u;
            goto label_1f8fe4;
        }
    }
    ctx->pc = 0x1F8FE0u;
    // 0x1f8fe0: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x1f8fe0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
label_1f8fe4:
    // 0x1f8fe4: 0x0  nop
    ctx->pc = 0x1f8fe4u;
    // NOP
    // 0x1f8fe8: 0xc0aa688  jal         func_2A9A20
    ctx->pc = 0x1F8FE8u;
    SET_GPR_U32(ctx, 31, 0x1F8FF0u);
    ctx->pc = 0x1F8FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8FE8u;
            // 0x1f8fec: 0x8f848ff8  lw          $a0, -0x7008($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938616)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9A20u;
    if (runtime->hasFunction(0x2A9A20u)) {
        auto targetFn = runtime->lookupFunction(0x2A9A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8FF0u; }
        if (ctx->pc != 0x1F8FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CultureAnalyze__8CEditMapFi_0x2a9a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8FF0u; }
        if (ctx->pc != 0x1F8FF0u) { return; }
    }
    ctx->pc = 0x1F8FF0u;
label_1f8ff0:
    // 0x1f8ff0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f8ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f8ff4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f8ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f8ff8: 0x2610821  addu        $at, $s3, $at
    ctx->pc = 0x1f8ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
    // 0x1f8ffc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f8ffcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9000: 0x8c24b838  lw          $a0, -0x47C8($at)
    ctx->pc = 0x1f9000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948920)));
    // 0x1f9004: 0xc089728  jal         func_225CA0
    ctx->pc = 0x1F9004u;
    SET_GPR_U32(ctx, 31, 0x1F900Cu);
    ctx->pc = 0x1F9008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9004u;
            // 0x1f9008: 0x24a58b38  addiu       $a1, $a1, -0x74C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F900Cu; }
        if (ctx->pc != 0x1F900Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F900Cu; }
        if (ctx->pc != 0x1F900Cu) { return; }
    }
    ctx->pc = 0x1F900Cu;
label_1f900c:
    // 0x1f900c: 0x0  nop
    ctx->pc = 0x1f900cu;
    // NOP
    // 0x1f9010: 0x16e00066  bnez        $s7, . + 4 + (0x66 << 2)
    ctx->pc = 0x1F9010u;
    {
        const bool branch_taken_0x1f9010 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9010) {
            ctx->pc = 0x1F91ACu;
            goto label_1f91ac;
        }
    }
    ctx->pc = 0x1F9018u;
    // 0x1f9018: 0x8e6367b4  lw          $v1, 0x67B4($s3)
    ctx->pc = 0x1f9018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26548)));
    // 0x1f901c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f901cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9020: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x1f9020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1f9024: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1f9024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f9028: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1f9028u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f902c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1f902cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1f9030: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1f9030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1f9034: 0xac4567b8  sw          $a1, 0x67B8($v0)
    ctx->pc = 0x1f9034u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 26552), GPR_U32(ctx, 5));
    // 0x1f9038: 0x8e6367b4  lw          $v1, 0x67B4($s3)
    ctx->pc = 0x1f9038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26548)));
    // 0x1f903c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1f903cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f9040: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1f9040u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f9044: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1f9044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1f9048: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1f9048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1f904c: 0xac4467bc  sw          $a0, 0x67BC($v0)
    ctx->pc = 0x1f904cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 26556), GPR_U32(ctx, 4));
    // 0x1f9050: 0x8e6367b4  lw          $v1, 0x67B4($s3)
    ctx->pc = 0x1f9050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26548)));
    // 0x1f9054: 0x8ea5003c  lw          $a1, 0x3C($s5)
    ctx->pc = 0x1f9054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
    // 0x1f9058: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1f9058u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f905c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1f905cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f9060: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1f9060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1f9064: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1f9064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1f9068: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1F9068u;
    SET_GPR_U32(ctx, 31, 0x1F9070u);
    ctx->pc = 0x1F906Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9068u;
            // 0x1f906c: 0x244467c0  addiu       $a0, $v0, 0x67C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9070u; }
        if (ctx->pc != 0x1F9070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9070u; }
        if (ctx->pc != 0x1F9070u) { return; }
    }
    ctx->pc = 0x1F9070u;
label_1f9070:
    // 0x1f9070: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f9070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f9074: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f9074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9078: 0x2610821  addu        $at, $s3, $at
    ctx->pc = 0x1f9078u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
    // 0x1f907c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1f907cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f9080: 0x8c28bbb8  lw          $t0, -0x4448($at)
    ctx->pc = 0x1f9080u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949816)));
    // 0x1f9084: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f9084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9088: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1F9088u;
    {
        const bool branch_taken_0x1f9088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F908Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9088u;
            // 0x1f908c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9088) {
            ctx->pc = 0x1F90C0u;
            goto label_1f90c0;
        }
    }
    ctx->pc = 0x1F9090u;
label_1f9090:
    // 0x1f9090: 0x2671021  addu        $v0, $s3, $a3
    ctx->pc = 0x1f9090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x1f9094: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f9094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f9098: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1f9098u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1f909c: 0x8c23bbbc  lw          $v1, -0x4444($at)
    ctx->pc = 0x1f909cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949820)));
    // 0x1f90a0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1f90a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1f90a4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F90A4u;
    {
        const bool branch_taken_0x1f90a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f90a4) {
            ctx->pc = 0x1F90B8u;
            goto label_1f90b8;
        }
    }
    ctx->pc = 0x1F90ACu;
    // 0x1f90ac: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1f90acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f90b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F90B0u;
    {
        const bool branch_taken_0x1f90b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F90B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F90B0u;
            // 0x1f90b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f90b0) {
            ctx->pc = 0x1F90CCu;
            goto label_1f90cc;
        }
    }
    ctx->pc = 0x1F90B8u;
label_1f90b8:
    // 0x1f90b8: 0x24e70038  addiu       $a3, $a3, 0x38
    ctx->pc = 0x1f90b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 56));
    // 0x1f90bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f90bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1f90c0:
    // 0x1f90c0: 0x88102a  slt         $v0, $a0, $t0
    ctx->pc = 0x1f90c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1f90c4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1F90C4u;
    {
        const bool branch_taken_0x1f90c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f90c4) {
            ctx->pc = 0x1F9090u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f9090;
        }
    }
    ctx->pc = 0x1F90CCu;
label_1f90cc:
    // 0x1f90cc: 0x0  nop
    ctx->pc = 0x1f90ccu;
    // NOP
    // 0x1f90d0: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1F90D0u;
    {
        const bool branch_taken_0x1f90d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F90D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F90D0u;
            // 0x1f90d4: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f90d0) {
            ctx->pc = 0x1F9104u;
            goto label_1f9104;
        }
    }
    ctx->pc = 0x1F90D8u;
    // 0x1f90d8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f90d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f90dc: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1f90dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1f90e0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1f90e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1f90e4: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x1f90e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1f90e8: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1f90e8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1f90ec: 0x8c22bbc0  lw          $v0, -0x4440($at)
    ctx->pc = 0x1f90ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949824)));
    // 0x1f90f0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f90f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f90f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f90f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f90f8: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1f90f8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1f90fc: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1F90FCu;
    {
        const bool branch_taken_0x1f90fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F90FCu;
            // 0x1f9100: 0xac22bbc0  sw          $v0, -0x4440($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294949824), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f90fc) {
            ctx->pc = 0x1F919Cu;
            goto label_1f919c;
        }
    }
    ctx->pc = 0x1F9104u;
label_1f9104:
    // 0x1f9104: 0x0  nop
    ctx->pc = 0x1f9104u;
    // NOP
    // 0x1f9108: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x1f9108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1f910c: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x1f910cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x1f9110: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f9110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f9114: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x1f9114u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1f9118: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f9118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f911c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1f911cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1f9120: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1f9120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1f9124: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1f9124u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1f9128: 0xac23bbbc  sw          $v1, -0x4444($at)
    ctx->pc = 0x1f9128u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949820), GPR_U32(ctx, 3));
    // 0x1f912c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f912cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f9130: 0x2610821  addu        $at, $s3, $at
    ctx->pc = 0x1f9130u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
    // 0x1f9134: 0x8c23bbb8  lw          $v1, -0x4448($at)
    ctx->pc = 0x1f9134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949816)));
    // 0x1f9138: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1f9138u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f913c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f913cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f9140: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1f9140u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f9144: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1f9144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1f9148: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1f9148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1f914c: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1f914cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1f9150: 0xac24bbc0  sw          $a0, -0x4440($at)
    ctx->pc = 0x1f9150u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949824), GPR_U32(ctx, 4));
    // 0x1f9154: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f9154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f9158: 0x8ea5003c  lw          $a1, 0x3C($s5)
    ctx->pc = 0x1f9158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
    // 0x1f915c: 0x2610821  addu        $at, $s3, $at
    ctx->pc = 0x1f915cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
    // 0x1f9160: 0x8c23bbb8  lw          $v1, -0x4448($at)
    ctx->pc = 0x1f9160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949816)));
    // 0x1f9164: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1f9164u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f9168: 0x3401bbc4  ori         $at, $zero, 0xBBC4
    ctx->pc = 0x1f9168u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48068);
    // 0x1f916c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1f916cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f9170: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1f9170u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1f9174: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1f9174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1f9178: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1F9178u;
    SET_GPR_U32(ctx, 31, 0x1F9180u);
    ctx->pc = 0x1F917Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9178u;
            // 0x1f917c: 0x412021  addu        $a0, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9180u; }
        if (ctx->pc != 0x1F9180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9180u; }
        if (ctx->pc != 0x1F9180u) { return; }
    }
    ctx->pc = 0x1F9180u;
label_1f9180:
    // 0x1f9180: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f9180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f9184: 0x2610821  addu        $at, $s3, $at
    ctx->pc = 0x1f9184u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
    // 0x1f9188: 0x8c22bbb8  lw          $v0, -0x4448($at)
    ctx->pc = 0x1f9188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949816)));
    // 0x1f918c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f918cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f9190: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f9190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f9194: 0x2610821  addu        $at, $s3, $at
    ctx->pc = 0x1f9194u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
    // 0x1f9198: 0xac22bbb8  sw          $v0, -0x4448($at)
    ctx->pc = 0x1f9198u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949816), GPR_U32(ctx, 2));
label_1f919c:
    // 0x1f919c: 0x0  nop
    ctx->pc = 0x1f919cu;
    // NOP
    // 0x1f91a0: 0x8e6267b4  lw          $v0, 0x67B4($s3)
    ctx->pc = 0x1f91a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26548)));
    // 0x1f91a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f91a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f91a8: 0xae6267b4  sw          $v0, 0x67B4($s3)
    ctx->pc = 0x1f91a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 26548), GPR_U32(ctx, 2));
label_1f91ac:
    // 0x1f91ac: 0x0  nop
    ctx->pc = 0x1f91acu;
    // NOP
    // 0x1f91b0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1f91b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1f91b4: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x1f91b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1f91b8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1f91b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1f91bc:
    // 0x1f91bc: 0x0  nop
    ctx->pc = 0x1f91bcu;
    // NOP
    // 0x1f91c0: 0x8e6201b0  lw          $v0, 0x1B0($s3)
    ctx->pc = 0x1f91c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 432)));
    // 0x1f91c4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1f91c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f91c8: 0x1440ff3c  bnez        $v0, . + 4 + (-0xC4 << 2)
    ctx->pc = 0x1F91C8u;
    {
        const bool branch_taken_0x1f91c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F91CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F91C8u;
            // 0x1f91cc: 0x2701021  addu        $v0, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f91c8) {
            ctx->pc = 0x1F8EBCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f8ebc;
        }
    }
    ctx->pc = 0x1F91D0u;
    // 0x1f91d0: 0xc064220  jal         func_190880
    ctx->pc = 0x1F91D0u;
    SET_GPR_U32(ctx, 31, 0x1F91D8u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F91D8u; }
        if (ctx->pc != 0x1F91D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F91D8u; }
        if (ctx->pc != 0x1F91D8u) { return; }
    }
    ctx->pc = 0x1F91D8u;
label_1f91d8:
    // 0x1f91d8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f91d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f91dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f91dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f91e0: 0x2610821  addu        $at, $s3, $at
    ctx->pc = 0x1f91e0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
    // 0x1f91e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f91e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f91e8: 0xac20bbb8  sw          $zero, -0x4448($at)
    ctx->pc = 0x1f91e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949816), GPR_U32(ctx, 0));
label_1f91ec:
    // 0x1f91ec: 0x8f848ff8  lw          $a0, -0x7008($gp)
    ctx->pc = 0x1f91ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938616)));
    // 0x1f91f0: 0xc06c2d4  jal         func_1B0B50
    ctx->pc = 0x1F91F0u;
    SET_GPR_U32(ctx, 31, 0x1F91F8u);
    ctx->pc = 0x1F91F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F91F0u;
            // 0x1f91f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0B50u;
    if (runtime->hasFunction(0x1B0B50u)) {
        auto targetFn = runtime->lookupFunction(0x1B0B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F91F8u; }
        if (ctx->pc != 0x1F91F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePartsInfoAtID__8CEditMapFi_0x1b0b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F91F8u; }
        if (ctx->pc != 0x1F91F8u) { return; }
    }
    ctx->pc = 0x1F91F8u;
label_1f91f8:
    // 0x1f91f8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f91f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f91fc: 0x1240002f  beqz        $s2, . + 4 + (0x2F << 2)
    ctx->pc = 0x1F91FCu;
    {
        const bool branch_taken_0x1f91fc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f91fc) {
            ctx->pc = 0x1F92BCu;
            goto label_1f92bc;
        }
    }
    ctx->pc = 0x1F9204u;
    // 0x1f9204: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1f9204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f9208: 0xc0bd978  jal         func_2F65E0
    ctx->pc = 0x1F9208u;
    SET_GPR_U32(ctx, 31, 0x1F9210u);
    ctx->pc = 0x1F920Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9208u;
            // 0x1f920c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F65E0u;
    if (runtime->hasFunction(0x2F65E0u)) {
        auto targetFn = runtime->lookupFunction(0x2F65E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9210u; }
        if (ctx->pc != 0x1F9210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBuildPartsNum__9CSaveDataFi_0x2f65e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9210u; }
        if (ctx->pc != 0x1F9210u) { return; }
    }
    ctx->pc = 0x1F9210u;
label_1f9210:
    // 0x1f9210: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1f9210u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f9214: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
    ctx->pc = 0x1F9214u;
    {
        const bool branch_taken_0x1f9214 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9214u;
            // 0x1f9218: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9214) {
            ctx->pc = 0x1F92BCu;
            goto label_1f92bc;
        }
    }
    ctx->pc = 0x1F921Cu;
    // 0x1f921c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1f921cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f9220: 0x2610821  addu        $at, $s3, $at
    ctx->pc = 0x1f9220u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
    // 0x1f9224: 0x8c24bbb8  lw          $a0, -0x4448($at)
    ctx->pc = 0x1f9224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949816)));
    // 0x1f9228: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1f9228u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1f922c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f922cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f9230: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1f9230u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f9234: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1f9234u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f9238: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1f9238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1f923c: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1f923cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1f9240: 0xac25bbbc  sw          $a1, -0x4444($at)
    ctx->pc = 0x1f9240u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949820), GPR_U32(ctx, 5));
    // 0x1f9244: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f9244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f9248: 0x2610821  addu        $at, $s3, $at
    ctx->pc = 0x1f9248u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
    // 0x1f924c: 0x8c24bbb8  lw          $a0, -0x4448($at)
    ctx->pc = 0x1f924cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949816)));
    // 0x1f9250: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1f9250u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1f9254: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f9254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f9258: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1f9258u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f925c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1f925cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f9260: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1f9260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1f9264: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1f9264u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1f9268: 0xac22bbc0  sw          $v0, -0x4440($at)
    ctx->pc = 0x1f9268u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949824), GPR_U32(ctx, 2));
    // 0x1f926c: 0x8e45003c  lw          $a1, 0x3C($s2)
    ctx->pc = 0x1f926cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x1f9270: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1F9270u;
    {
        const bool branch_taken_0x1f9270 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9270u;
            // 0x1f9274: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9270) {
            ctx->pc = 0x1F929Cu;
            goto label_1f929c;
        }
    }
    ctx->pc = 0x1F9278u;
    // 0x1f9278: 0x2610821  addu        $at, $s3, $at
    ctx->pc = 0x1f9278u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
    // 0x1f927c: 0x8c23bbb8  lw          $v1, -0x4448($at)
    ctx->pc = 0x1f927cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949816)));
    // 0x1f9280: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1f9280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f9284: 0x3401bbc4  ori         $at, $zero, 0xBBC4
    ctx->pc = 0x1f9284u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48068);
    // 0x1f9288: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1f9288u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f928c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1f928cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1f9290: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1f9290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1f9294: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1F9294u;
    SET_GPR_U32(ctx, 31, 0x1F929Cu);
    ctx->pc = 0x1F9298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9294u;
            // 0x1f9298: 0x412021  addu        $a0, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F929Cu; }
        if (ctx->pc != 0x1F929Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F929Cu; }
        if (ctx->pc != 0x1F929Cu) { return; }
    }
    ctx->pc = 0x1F929Cu;
label_1f929c:
    // 0x1f929c: 0x0  nop
    ctx->pc = 0x1f929cu;
    // NOP
    // 0x1f92a0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f92a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f92a4: 0x2610821  addu        $at, $s3, $at
    ctx->pc = 0x1f92a4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
    // 0x1f92a8: 0x8c22bbb8  lw          $v0, -0x4448($at)
    ctx->pc = 0x1f92a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949816)));
    // 0x1f92ac: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f92acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f92b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f92b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f92b4: 0x2610821  addu        $at, $s3, $at
    ctx->pc = 0x1f92b4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
    // 0x1f92b8: 0xac22bbb8  sw          $v0, -0x4448($at)
    ctx->pc = 0x1f92b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949816), GPR_U32(ctx, 2));
label_1f92bc:
    // 0x1f92bc: 0x0  nop
    ctx->pc = 0x1f92bcu;
    // NOP
    // 0x1f92c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f92c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f92c4: 0x2a220080  slti        $v0, $s1, 0x80
    ctx->pc = 0x1f92c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1f92c8: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x1F92C8u;
    {
        const bool branch_taken_0x1f92c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F92CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F92C8u;
            // 0x1f92cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f92c8) {
            ctx->pc = 0x1F91ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f91ec;
        }
    }
    ctx->pc = 0x1F92D0u;
    // 0x1f92d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f92d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f92d4: 0xc07e260  jal         func_1F8980
    ctx->pc = 0x1F92D4u;
    SET_GPR_U32(ctx, 31, 0x1F92DCu);
    ctx->pc = 0x1F92D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F92D4u;
            // 0x1f92d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F8980u;
    if (runtime->hasFunction(0x1F8980u)) {
        auto targetFn = runtime->lookupFunction(0x1F8980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F92DCu; }
        if (ctx->pc != 0x1F92DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ArrangePartsList__12CMenuGeoramaFii_0x1f8980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F92DCu; }
        if (ctx->pc != 0x1F92DCu) { return; }
    }
    ctx->pc = 0x1F92DCu;
label_1f92dc:
    // 0x1f92dc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1f92dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1f92e0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f92e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f92e4: 0x34420fbc  ori         $v0, $v0, 0xFBC
    ctx->pc = 0x1f92e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4028);
    // 0x1f92e8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1f92e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1f92ec: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1f92ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1f92f0:
    // 0x1f92f0: 0x8f848ff8  lw          $a0, -0x7008($gp)
    ctx->pc = 0x1f92f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938616)));
    // 0x1f92f4: 0xc06c2cc  jal         func_1B0B30
    ctx->pc = 0x1F92F4u;
    SET_GPR_U32(ctx, 31, 0x1F92FCu);
    ctx->pc = 0x1F92F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F92F4u;
            // 0x1f92f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0B30u;
    if (runtime->hasFunction(0x1B0B30u)) {
        auto targetFn = runtime->lookupFunction(0x1B0B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F92FCu; }
        if (ctx->pc != 0x1F92FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePartsInfo__8CEditMapFi_0x1b0b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F92FCu; }
        if (ctx->pc != 0x1F92FCu) { return; }
    }
    ctx->pc = 0x1F92FCu;
label_1f92fc:
    // 0x1f92fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f92fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9300: 0x1200004b  beqz        $s0, . + 4 + (0x4B << 2)
    ctx->pc = 0x1F9300u;
    {
        const bool branch_taken_0x1f9300 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9300) {
            ctx->pc = 0x1F9430u;
            goto label_1f9430;
        }
    }
    ctx->pc = 0x1F9308u;
    // 0x1f9308: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f9308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f930c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1f930cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1f9310: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x1F9310u;
    {
        const bool branch_taken_0x1f9310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9310) {
            ctx->pc = 0x1F9420u;
            goto label_1f9420;
        }
    }
    ctx->pc = 0x1F9318u;
    // 0x1f9318: 0x8f838f88  lw          $v1, -0x7078($gp)
    ctx->pc = 0x1f9318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938504)));
    // 0x1f931c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x1f931cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x1f9320: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f9320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9324: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f9324u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9328: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f9328u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f932c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1F932Cu;
    {
        const bool branch_taken_0x1f932c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F932Cu;
            // 0x1f9330: 0x24848ea0  addiu       $a0, $a0, -0x7160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f932c) {
            ctx->pc = 0x1F9360u;
            goto label_1f9360;
        }
    }
    ctx->pc = 0x1F9334u;
label_1f9334:
    // 0x1f9334: 0x0  nop
    ctx->pc = 0x1f9334u;
    // NOP
    // 0x1f9338: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x1f9338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1f933c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1f933cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f9340: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f9340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f9344: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9344u;
    {
        const bool branch_taken_0x1f9344 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f9344) {
            ctx->pc = 0x1F9354u;
            goto label_1f9354;
        }
    }
    ctx->pc = 0x1F934Cu;
    // 0x1f934c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F934Cu;
    {
        const bool branch_taken_0x1f934c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F934Cu;
            // 0x1f9350: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f934c) {
            ctx->pc = 0x1F936Cu;
            goto label_1f936c;
        }
    }
    ctx->pc = 0x1F9354u;
label_1f9354:
    // 0x1f9354: 0x0  nop
    ctx->pc = 0x1f9354u;
    // NOP
    // 0x1f9358: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1f9358u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1f935c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f935cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1f9360:
    // 0x1f9360: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x1f9360u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1f9364: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1F9364u;
    {
        const bool branch_taken_0x1f9364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9364) {
            ctx->pc = 0x1F9334u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f9334;
        }
    }
    ctx->pc = 0x1F936Cu;
label_1f936c:
    // 0x1f936c: 0x0  nop
    ctx->pc = 0x1f936cu;
    // NOP
    // 0x1f9370: 0x14c0002b  bnez        $a2, . + 4 + (0x2B << 2)
    ctx->pc = 0x1F9370u;
    {
        const bool branch_taken_0x1f9370 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9370) {
            ctx->pc = 0x1F9420u;
            goto label_1f9420;
        }
    }
    ctx->pc = 0x1F9378u;
    // 0x1f9378: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1f9378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1f937c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1F937Cu;
    {
        const bool branch_taken_0x1f937c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F937Cu;
            // 0x1f9380: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f937c) {
            ctx->pc = 0x1F9420u;
            goto label_1f9420;
        }
    }
    ctx->pc = 0x1F9384u;
    // 0x1f9384: 0x2610821  addu        $at, $s3, $at
    ctx->pc = 0x1f9384u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
    // 0x1f9388: 0x8c230fbc  lw          $v1, 0xFBC($at)
    ctx->pc = 0x1f9388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4028)));
    // 0x1f938c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1f938cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f9390: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f9390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f9394: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1f9394u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f9398: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1f9398u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1f939c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1f939cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1f93a0: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1f93a0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1f93a4: 0xac310fc0  sw          $s1, 0xFC0($at)
    ctx->pc = 0x1f93a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4032), GPR_U32(ctx, 17));
    // 0x1f93a8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f93a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f93ac: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x1f93acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1f93b0: 0x2610821  addu        $at, $s3, $at
    ctx->pc = 0x1f93b0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
    // 0x1f93b4: 0x8c230fbc  lw          $v1, 0xFBC($at)
    ctx->pc = 0x1f93b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4028)));
    // 0x1f93b8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1f93b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f93bc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f93bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f93c0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1f93c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f93c4: 0x34210fc8  ori         $at, $at, 0xFC8
    ctx->pc = 0x1f93c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4040);
    // 0x1f93c8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1f93c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1f93cc: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1f93ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1f93d0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1F93D0u;
    SET_GPR_U32(ctx, 31, 0x1F93D8u);
    ctx->pc = 0x1F93D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F93D0u;
            // 0x1f93d4: 0x412021  addu        $a0, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F93D8u; }
        if (ctx->pc != 0x1F93D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F93D8u; }
        if (ctx->pc != 0x1F93D8u) { return; }
    }
    ctx->pc = 0x1F93D8u;
label_1f93d8:
    // 0x1f93d8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f93d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f93dc: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x1f93dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1f93e0: 0x2610821  addu        $at, $s3, $at
    ctx->pc = 0x1f93e0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
    // 0x1f93e4: 0x8c230fbc  lw          $v1, 0xFBC($at)
    ctx->pc = 0x1f93e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4028)));
    // 0x1f93e8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1f93e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f93ec: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f93ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f93f0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1f93f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f93f4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1f93f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1f93f8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1f93f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1f93fc: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1f93fcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1f9400: 0xac240fc4  sw          $a0, 0xFC4($at)
    ctx->pc = 0x1f9400u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4036), GPR_U32(ctx, 4));
    // 0x1f9404: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f9404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f9408: 0x2610821  addu        $at, $s3, $at
    ctx->pc = 0x1f9408u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
    // 0x1f940c: 0x8c220fbc  lw          $v0, 0xFBC($at)
    ctx->pc = 0x1f940cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4028)));
    // 0x1f9410: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f9410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f9414: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f9414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f9418: 0x2610821  addu        $at, $s3, $at
    ctx->pc = 0x1f9418u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
    // 0x1f941c: 0xac220fbc  sw          $v0, 0xFBC($at)
    ctx->pc = 0x1f941cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4028), GPR_U32(ctx, 2));
label_1f9420:
    // 0x1f9420: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f9420u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f9424: 0x2a220180  slti        $v0, $s1, 0x180
    ctx->pc = 0x1f9424u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)384) ? 1 : 0);
    // 0x1f9428: 0x1440ffb1  bnez        $v0, . + 4 + (-0x4F << 2)
    ctx->pc = 0x1F9428u;
    {
        const bool branch_taken_0x1f9428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9428) {
            ctx->pc = 0x1F92F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f92f0;
        }
    }
    ctx->pc = 0x1F9430u;
label_1f9430:
    // 0x1f9430: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f9430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9434: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f9434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9438: 0xc07e260  jal         func_1F8980
    ctx->pc = 0x1F9438u;
    SET_GPR_U32(ctx, 31, 0x1F9440u);
    ctx->pc = 0x1F943Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9438u;
            // 0x1f943c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F8980u;
    if (runtime->hasFunction(0x1F8980u)) {
        auto targetFn = runtime->lookupFunction(0x1F8980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9440u; }
        if (ctx->pc != 0x1F9440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ArrangePartsList__12CMenuGeoramaFii_0x1f8980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9440u; }
        if (ctx->pc != 0x1F9440u) { return; }
    }
    ctx->pc = 0x1F9440u;
label_1f9440:
    // 0x1f9440: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f9440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9444: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f9444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f9448: 0xc07e260  jal         func_1F8980
    ctx->pc = 0x1F9448u;
    SET_GPR_U32(ctx, 31, 0x1F9450u);
    ctx->pc = 0x1F944Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9448u;
            // 0x1f944c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F8980u;
    if (runtime->hasFunction(0x1F8980u)) {
        auto targetFn = runtime->lookupFunction(0x1F8980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9450u; }
        if (ctx->pc != 0x1F9450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ArrangePartsList__12CMenuGeoramaFii_0x1f8980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9450u; }
        if (ctx->pc != 0x1F9450u) { return; }
    }
    ctx->pc = 0x1F9450u;
label_1f9450:
    // 0x1f9450: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1f9450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f9454: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1f9454u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f9458: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1f9458u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f945c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1f945cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f9460: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f9460u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f9464: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f9464u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f9468: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f9468u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f946c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f946cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9470: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f9470u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9474: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f9474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9478: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F947Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9478u;
            // 0x1f947c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F9480u;
}
