#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitEnd__14CMenuQuestViewFv
// Address: 0x294d70 - 0x2950e4
void InitEnd__14CMenuQuestViewFv_0x294d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitEnd__14CMenuQuestViewFv_0x294d70");
#endif

    switch (ctx->pc) {
        case 0x294da0u: goto label_294da0;
        case 0x294dacu: goto label_294dac;
        case 0x294dccu: goto label_294dcc;
        case 0x294e04u: goto label_294e04;
        case 0x294e3cu: goto label_294e3c;
        case 0x294e70u: goto label_294e70;
        case 0x294e90u: goto label_294e90;
        case 0x294ea0u: goto label_294ea0;
        case 0x294ec0u: goto label_294ec0;
        case 0x294ed8u: goto label_294ed8;
        case 0x294eecu: goto label_294eec;
        case 0x294f08u: goto label_294f08;
        case 0x294f18u: goto label_294f18;
        case 0x294f24u: goto label_294f24;
        case 0x294f34u: goto label_294f34;
        case 0x294f3cu: goto label_294f3c;
        case 0x294f44u: goto label_294f44;
        case 0x294f54u: goto label_294f54;
        case 0x294f60u: goto label_294f60;
        case 0x294f68u: goto label_294f68;
        case 0x294f78u: goto label_294f78;
        case 0x294f84u: goto label_294f84;
        case 0x294f94u: goto label_294f94;
        case 0x294facu: goto label_294fac;
        case 0x294fb4u: goto label_294fb4;
        case 0x294fc4u: goto label_294fc4;
        case 0x294fd0u: goto label_294fd0;
        case 0x294ffcu: goto label_294ffc;
        case 0x295018u: goto label_295018;
        case 0x295030u: goto label_295030;
        case 0x29505cu: goto label_29505c;
        case 0x29506cu: goto label_29506c;
        case 0x2950c0u: goto label_2950c0;
        default: break;
    }

    ctx->pc = 0x294d70u;

    // 0x294d70: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x294d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x294d74: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x294d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x294d78: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x294d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x294d7c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x294d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x294d80: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x294d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x294d84: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x294d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x294d88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x294d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x294d8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x294d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x294d90: 0xac800110  sw          $zero, 0x110($a0)
    ctx->pc = 0x294d90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 0));
    // 0x294d94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x294d94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294d98: 0xc07f84c  jal         func_1FE130
    ctx->pc = 0x294D98u;
    SET_GPR_U32(ctx, 31, 0x294DA0u);
    ctx->pc = 0x294D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294D98u;
            // 0x294d9c: 0xac800114  sw          $zero, 0x114($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE130u;
    if (runtime->hasFunction(0x1FE130u)) {
        auto targetFn = runtime->lookupFunction(0x1FE130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294DA0u; }
        if (ctx->pc != 0x294DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetInventUserDataPtr__Fv_0x1fe130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294DA0u; }
        if (ctx->pc != 0x294DA0u) { return; }
    }
    ctx->pc = 0x294DA0u;
label_294da0:
    // 0x294da0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x294da0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294da4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x294da4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294da8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x294da8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_294dac:
    // 0x294dac: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x294dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x294db0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x294db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x294db4: 0xac430118  sw          $v1, 0x118($v0)
    ctx->pc = 0x294db4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 3));
    // 0x294db8: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x294DB8u;
    {
        const bool branch_taken_0x294db8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x294DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294DB8u;
            // 0x294dbc: 0x24540118  addiu       $s4, $v0, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294db8) {
            ctx->pc = 0x294DE8u;
            goto label_294de8;
        }
    }
    ctx->pc = 0x294DC0u;
    // 0x294dc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x294dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294dc4: 0xc07faac  jal         func_1FEAB0
    ctx->pc = 0x294DC4u;
    SET_GPR_U32(ctx, 31, 0x294DCCu);
    ctx->pc = 0x294DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294DC4u;
            // 0x294dc8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEAB0u;
    if (runtime->hasFunction(0x1FEAB0u)) {
        auto targetFn = runtime->lookupFunction(0x1FEAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294DCCu; }
        if (ctx->pc != 0x294DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPhotoInfo__15CInventUserDataFi_0x1feab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294DCCu; }
        if (ctx->pc != 0x294DCCu) { return; }
    }
    ctx->pc = 0x294DCCu;
label_294dcc:
    // 0x294dcc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x294DCCu;
    {
        const bool branch_taken_0x294dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x294dcc) {
            ctx->pc = 0x294DE8u;
            goto label_294de8;
        }
    }
    ctx->pc = 0x294DD4u;
    // 0x294dd4: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x294dd4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x294dd8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x294DD8u;
    {
        const bool branch_taken_0x294dd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x294dd8) {
            ctx->pc = 0x294DE8u;
            goto label_294de8;
        }
    }
    ctx->pc = 0x294DE0u;
    // 0x294de0: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x294de0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x294de4: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x294de4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_294de8:
    // 0x294de8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x294de8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x294dec: 0x2a42001e  slti        $v0, $s2, 0x1E
    ctx->pc = 0x294decu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x294df0: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x294DF0u;
    {
        const bool branch_taken_0x294df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x294DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294DF0u;
            // 0x294df4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294df0) {
            ctx->pc = 0x294DACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_294dac;
        }
    }
    ctx->pc = 0x294DF8u;
    // 0x294df8: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x294df8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x294dfc: 0xc04e780  jal         func_139E00
    ctx->pc = 0x294DFCu;
    SET_GPR_U32(ctx, 31, 0x294E04u);
    ctx->pc = 0x294E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294DFCu;
            // 0x294e00: 0x248452e0  addiu       $a0, $a0, 0x52E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294E04u; }
        if (ctx->pc != 0x294E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294E04u; }
        if (ctx->pc != 0x294E04u) { return; }
    }
    ctx->pc = 0x294E04u;
label_294e04:
    // 0x294e04: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x294e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x294e08: 0x838398dc  lb          $v1, -0x6724($gp)
    ctx->pc = 0x294e08u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940892)));
    // 0x294e0c: 0x8c255304  lw          $a1, 0x5304($at)
    ctx->pc = 0x294e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21252)));
    // 0x294e10: 0x27828448  addiu       $v0, $gp, -0x7BB8
    ctx->pc = 0x294e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935624));
    // 0x294e14: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x294e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294e18: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x294e18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x294e1c: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x294e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x294e20: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x294e20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x294e24: 0x8c245300  lw          $a0, 0x5300($at)
    ctx->pc = 0x294e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21248)));
    // 0x294e28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x294e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x294e2c: 0x859021  addu        $s2, $a0, $a1
    ctx->pc = 0x294e2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x294e30: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x294e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x294e34: 0xc094440  jal         func_251100
    ctx->pc = 0x294E34u;
    SET_GPR_U32(ctx, 31, 0x294E3Cu);
    ctx->pc = 0x294E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294E34u;
            // 0x294e38: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251100u;
    if (runtime->hasFunction(0x251100u)) {
        auto targetFn = runtime->lookupFunction(0x251100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294E3Cu; }
        if (ctx->pc != 0x294E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileMenu__FPcP1i_0x251100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294E3Cu; }
        if (ctx->pc != 0x294E3Cu) { return; }
    }
    ctx->pc = 0x294E3Cu;
label_294e3c:
    // 0x294e3c: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x294e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x294e40: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x294e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x294e44: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x294e44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x294e48: 0x1020007c  beqz        $at, . + 4 + (0x7C << 2)
    ctx->pc = 0x294E48u;
    {
        const bool branch_taken_0x294e48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x294E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294E48u;
            // 0x294e4c: 0x3c024120  lui         $v0, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294e48) {
            ctx->pc = 0x29503Cu;
            goto label_29503c;
        }
    }
    ctx->pc = 0x294E50u;
    // 0x294e50: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x294e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x294e54: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x294E54u;
    {
        const bool branch_taken_0x294e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x294E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294E54u;
            // 0x294e58: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294e54) {
            ctx->pc = 0x294E64u;
            goto label_294e64;
        }
    }
    ctx->pc = 0x294E5Cu;
    // 0x294e5c: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x294e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x294e60: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x294e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_294e64:
    // 0x294e64: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x294e64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x294e68: 0xc04e748  jal         func_139D20
    ctx->pc = 0x294E68u;
    SET_GPR_U32(ctx, 31, 0x294E70u);
    ctx->pc = 0x294E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294E68u;
            // 0x294e6c: 0x248452e0  addiu       $a0, $a0, 0x52E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294E70u; }
        if (ctx->pc != 0x294E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294E70u; }
        if (ctx->pc != 0x294E70u) { return; }
    }
    ctx->pc = 0x294E70u;
label_294e70:
    // 0x294e70: 0x838298dc  lb          $v0, -0x6724($gp)
    ctx->pc = 0x294e70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940892)));
    // 0x294e74: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x294E74u;
    {
        const bool branch_taken_0x294e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x294e74) {
            ctx->pc = 0x294EC0u;
            goto label_294ec0;
        }
    }
    ctx->pc = 0x294E7Cu;
    // 0x294e7c: 0x8f868ad0  lw          $a2, -0x7530($gp)
    ctx->pc = 0x294e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x294e80: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x294e80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x294e84: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x294e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x294e88: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x294E88u;
    SET_GPR_U32(ctx, 31, 0x294E90u);
    ctx->pc = 0x294E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294E88u;
            // 0x294e8c: 0x24a5dd40  addiu       $a1, $a1, -0x22C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294E90u; }
        if (ctx->pc != 0x294E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294E90u; }
        if (ctx->pc != 0x294E90u) { return; }
    }
    ctx->pc = 0x294E90u;
label_294e90:
    // 0x294e90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x294e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294e94: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x294e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x294e98: 0xc052734  jal         func_149CD0
    ctx->pc = 0x294E98u;
    SET_GPR_U32(ctx, 31, 0x294EA0u);
    ctx->pc = 0x294E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294E98u;
            // 0x294e9c: 0x27a600bc  addiu       $a2, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294EA0u; }
        if (ctx->pc != 0x294EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294EA0u; }
        if (ctx->pc != 0x294EA0u) { return; }
    }
    ctx->pc = 0x294EA0u;
label_294ea0:
    // 0x294ea0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x294EA0u;
    {
        const bool branch_taken_0x294ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x294ea0) {
            ctx->pc = 0x294EC0u;
            goto label_294ec0;
        }
    }
    ctx->pc = 0x294EA8u;
    // 0x294ea8: 0x8f849894  lw          $a0, -0x676C($gp)
    ctx->pc = 0x294ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940820)));
    // 0x294eac: 0x3c0501f0  lui         $a1, 0x1F0
    ctx->pc = 0x294eacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)496 << 16));
    // 0x294eb0: 0x8fa700bc  lw          $a3, 0xBC($sp)
    ctx->pc = 0x294eb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x294eb4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x294eb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294eb8: 0xc0c6a70  jal         func_31A9C0
    ctx->pc = 0x294EB8u;
    SET_GPR_U32(ctx, 31, 0x294EC0u);
    ctx->pc = 0x294EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294EB8u;
            // 0x294ebc: 0x24a552e0  addiu       $a1, $a1, 0x52E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31A9C0u;
    if (runtime->hasFunction(0x31A9C0u)) {
        auto targetFn = runtime->lookupFunction(0x31A9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294EC0u; }
        if (ctx->pc != 0x294EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadCfg__13CQuestManagerFP9mgCMemoryPci_0x31a9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294EC0u; }
        if (ctx->pc != 0x294EC0u) { return; }
    }
    ctx->pc = 0x294EC0u;
label_294ec0:
    // 0x294ec0: 0x838398dc  lb          $v1, -0x6724($gp)
    ctx->pc = 0x294ec0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940892)));
    // 0x294ec4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x294ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294ec8: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x294EC8u;
    {
        const bool branch_taken_0x294ec8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x294ec8) {
            ctx->pc = 0x294F08u;
            goto label_294f08;
        }
    }
    ctx->pc = 0x294ED0u;
    // 0x294ed0: 0xc07fcc0  jal         func_1FF300
    ctx->pc = 0x294ED0u;
    SET_GPR_U32(ctx, 31, 0x294ED8u);
    ctx->pc = 0x1FF300u;
    if (runtime->hasFunction(0x1FF300u)) {
        auto targetFn = runtime->lookupFunction(0x1FF300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294ED8u; }
        if (ctx->pc != 0x294ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitScoopString__Fv_0x1ff300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294ED8u; }
        if (ctx->pc != 0x294ED8u) { return; }
    }
    ctx->pc = 0x294ED8u;
label_294ed8:
    // 0x294ed8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x294ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x294edc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x294edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294ee0: 0x24a5dd50  addiu       $a1, $a1, -0x22B0
    ctx->pc = 0x294ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958416));
    // 0x294ee4: 0xc052734  jal         func_149CD0
    ctx->pc = 0x294EE4u;
    SET_GPR_U32(ctx, 31, 0x294EECu);
    ctx->pc = 0x294EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294EE4u;
            // 0x294ee8: 0x27a600bc  addiu       $a2, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294EECu; }
        if (ctx->pc != 0x294EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294EECu; }
        if (ctx->pc != 0x294EECu) { return; }
    }
    ctx->pc = 0x294EECu;
label_294eec:
    // 0x294eec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x294EECu;
    {
        const bool branch_taken_0x294eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x294eec) {
            ctx->pc = 0x294F08u;
            goto label_294f08;
        }
    }
    ctx->pc = 0x294EF4u;
    // 0x294ef4: 0x8fa600bc  lw          $a2, 0xBC($sp)
    ctx->pc = 0x294ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x294ef8: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x294ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x294efc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x294efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294f00: 0xc07fd0c  jal         func_1FF430
    ctx->pc = 0x294F00u;
    SET_GPR_U32(ctx, 31, 0x294F08u);
    ctx->pc = 0x294F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294F00u;
            // 0x294f04: 0x248452e0  addiu       $a0, $a0, 0x52E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF430u;
    if (runtime->hasFunction(0x1FF430u)) {
        auto targetFn = runtime->lookupFunction(0x1FF430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294F08u; }
        if (ctx->pc != 0x294F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AnalyzeScoopString__FP9mgCMemoryPci_0x1ff430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294F08u; }
        if (ctx->pc != 0x294F08u) { return; }
    }
    ctx->pc = 0x294F08u;
label_294f08:
    // 0x294f08: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x294f08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x294f0c: 0x2405022f  addiu       $a1, $zero, 0x22F
    ctx->pc = 0x294f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 559));
    // 0x294f10: 0xc04e748  jal         func_139D20
    ctx->pc = 0x294F10u;
    SET_GPR_U32(ctx, 31, 0x294F18u);
    ctx->pc = 0x294F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294F10u;
            // 0x294f14: 0x248452e0  addiu       $a0, $a0, 0x52E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294F18u; }
        if (ctx->pc != 0x294F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294F18u; }
        if (ctx->pc != 0x294F18u) { return; }
    }
    ctx->pc = 0x294F18u;
label_294f18:
    // 0x294f18: 0x240422d0  addiu       $a0, $zero, 0x22D0
    ctx->pc = 0x294f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8912));
    // 0x294f1c: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x294F1Cu;
    SET_GPR_U32(ctx, 31, 0x294F24u);
    ctx->pc = 0x294F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294F1Cu;
            // 0x294f20: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294F24u; }
        if (ctx->pc != 0x294F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294F24u; }
        if (ctx->pc != 0x294F24u) { return; }
    }
    ctx->pc = 0x294F24u;
label_294f24:
    // 0x294f24: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x294F24u;
    {
        const bool branch_taken_0x294f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x294F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294F24u;
            // 0x294f28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294f24) {
            ctx->pc = 0x294F34u;
            goto label_294f34;
        }
    }
    ctx->pc = 0x294F2Cu;
    // 0x294f2c: 0xc0874b4  jal         func_21D2D0
    ctx->pc = 0x294F2Cu;
    SET_GPR_U32(ctx, 31, 0x294F34u);
    ctx->pc = 0x21D2D0u;
    if (runtime->hasFunction(0x21D2D0u)) {
        auto targetFn = runtime->lookupFunction(0x21D2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294F34u; }
        if (ctx->pc != 0x294F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__7CDC2MesFv_0x21d2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294F34u; }
        if (ctx->pc != 0x294F34u) { return; }
    }
    ctx->pc = 0x294F34u;
label_294f34:
    // 0x294f34: 0xc065a18  jal         func_196860
    ctx->pc = 0x294F34u;
    SET_GPR_U32(ctx, 31, 0x294F3Cu);
    ctx->pc = 0x294F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294F34u;
            // 0x294f38: 0xaf8298a0  sw          $v0, -0x6760($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940832), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196860u;
    if (runtime->hasFunction(0x196860u)) {
        auto targetFn = runtime->lookupFunction(0x196860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294F3Cu; }
        if (ctx->pc != 0x294F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMesBuffer__Fv_0x196860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294F3Cu; }
        if (ctx->pc != 0x294F3Cu) { return; }
    }
    ctx->pc = 0x294F3Cu;
label_294f3c:
    // 0x294f3c: 0xc08d1bc  jal         func_2346F0
    ctx->pc = 0x294F3Cu;
    SET_GPR_U32(ctx, 31, 0x294F44u);
    ctx->pc = 0x294F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294F3Cu;
            // 0x294f40: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2346F0u;
    if (runtime->hasFunction(0x2346F0u)) {
        auto targetFn = runtime->lookupFunction(0x2346F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294F44u; }
        if (ctx->pc != 0x294F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainMessageBuffer__Fv_0x2346f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294F44u; }
        if (ctx->pc != 0x294F44u) { return; }
    }
    ctx->pc = 0x294F44u;
label_294f44:
    // 0x294f44: 0x8f8498a0  lw          $a0, -0x6760($gp)
    ctx->pc = 0x294f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940832)));
    // 0x294f48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x294f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294f4c: 0xc0874d8  jal         func_21D360
    ctx->pc = 0x294F4Cu;
    SET_GPR_U32(ctx, 31, 0x294F54u);
    ctx->pc = 0x294F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294F4Cu;
            // 0x294f50: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D360u;
    if (runtime->hasFunction(0x21D360u)) {
        auto targetFn = runtime->lookupFunction(0x21D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294F54u; }
        if (ctx->pc != 0x294F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMessData__7CDC2MesFPsPs_0x21d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294F54u; }
        if (ctx->pc != 0x294F54u) { return; }
    }
    ctx->pc = 0x294F54u;
label_294f54:
    // 0x294f54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x294f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294f58: 0xc0a5314  jal         func_294C50
    ctx->pc = 0x294F58u;
    SET_GPR_U32(ctx, 31, 0x294F60u);
    ctx->pc = 0x294F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294F58u;
            // 0x294f5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294C50u;
    if (runtime->hasFunction(0x294C50u)) {
        auto targetFn = runtime->lookupFunction(0x294C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294F60u; }
        if (ctx->pc != 0x294F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnderMsg__14CMenuQuestViewFi_0x294c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294F60u; }
        if (ctx->pc != 0x294F60u) { return; }
    }
    ctx->pc = 0x294F60u;
label_294f60:
    // 0x294f60: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x294f60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294f64: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x294f64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_294f68:
    // 0x294f68: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x294f68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x294f6c: 0x2405022f  addiu       $a1, $zero, 0x22F
    ctx->pc = 0x294f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 559));
    // 0x294f70: 0xc04e748  jal         func_139D20
    ctx->pc = 0x294F70u;
    SET_GPR_U32(ctx, 31, 0x294F78u);
    ctx->pc = 0x294F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294F70u;
            // 0x294f74: 0x248452e0  addiu       $a0, $a0, 0x52E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294F78u; }
        if (ctx->pc != 0x294F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294F78u; }
        if (ctx->pc != 0x294F78u) { return; }
    }
    ctx->pc = 0x294F78u;
label_294f78:
    // 0x294f78: 0x240422d0  addiu       $a0, $zero, 0x22D0
    ctx->pc = 0x294f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8912));
    // 0x294f7c: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x294F7Cu;
    SET_GPR_U32(ctx, 31, 0x294F84u);
    ctx->pc = 0x294F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294F7Cu;
            // 0x294f80: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294F84u; }
        if (ctx->pc != 0x294F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294F84u; }
        if (ctx->pc != 0x294F84u) { return; }
    }
    ctx->pc = 0x294F84u;
label_294f84:
    // 0x294f84: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x294F84u;
    {
        const bool branch_taken_0x294f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x294F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294F84u;
            // 0x294f88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294f84) {
            ctx->pc = 0x294F94u;
            goto label_294f94;
        }
    }
    ctx->pc = 0x294F8Cu;
    // 0x294f8c: 0xc0874b4  jal         func_21D2D0
    ctx->pc = 0x294F8Cu;
    SET_GPR_U32(ctx, 31, 0x294F94u);
    ctx->pc = 0x21D2D0u;
    if (runtime->hasFunction(0x21D2D0u)) {
        auto targetFn = runtime->lookupFunction(0x21D2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294F94u; }
        if (ctx->pc != 0x294F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__7CDC2MesFv_0x21d2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294F94u; }
        if (ctx->pc != 0x294F94u) { return; }
    }
    ctx->pc = 0x294F94u;
label_294f94:
    // 0x294f94: 0x0  nop
    ctx->pc = 0x294f94u;
    // NOP
    // 0x294f98: 0x3c0301f0  lui         $v1, 0x1F0
    ctx->pc = 0x294f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)496 << 16));
    // 0x294f9c: 0x24635320  addiu       $v1, $v1, 0x5320
    ctx->pc = 0x294f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21280));
    // 0x294fa0: 0x73a821  addu        $s5, $v1, $s3
    ctx->pc = 0x294fa0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x294fa4: 0xc065a18  jal         func_196860
    ctx->pc = 0x294FA4u;
    SET_GPR_U32(ctx, 31, 0x294FACu);
    ctx->pc = 0x294FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294FA4u;
            // 0x294fa8: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196860u;
    if (runtime->hasFunction(0x196860u)) {
        auto targetFn = runtime->lookupFunction(0x196860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294FACu; }
        if (ctx->pc != 0x294FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMesBuffer__Fv_0x196860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294FACu; }
        if (ctx->pc != 0x294FACu) { return; }
    }
    ctx->pc = 0x294FACu;
label_294fac:
    // 0x294fac: 0xc08d1bc  jal         func_2346F0
    ctx->pc = 0x294FACu;
    SET_GPR_U32(ctx, 31, 0x294FB4u);
    ctx->pc = 0x294FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294FACu;
            // 0x294fb0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2346F0u;
    if (runtime->hasFunction(0x2346F0u)) {
        auto targetFn = runtime->lookupFunction(0x2346F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294FB4u; }
        if (ctx->pc != 0x294FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainMessageBuffer__Fv_0x2346f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294FB4u; }
        if (ctx->pc != 0x294FB4u) { return; }
    }
    ctx->pc = 0x294FB4u;
label_294fb4:
    // 0x294fb4: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x294fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x294fb8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x294fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294fbc: 0xc0874d8  jal         func_21D360
    ctx->pc = 0x294FBCu;
    SET_GPR_U32(ctx, 31, 0x294FC4u);
    ctx->pc = 0x294FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294FBCu;
            // 0x294fc0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D360u;
    if (runtime->hasFunction(0x21D360u)) {
        auto targetFn = runtime->lookupFunction(0x21D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294FC4u; }
        if (ctx->pc != 0x294FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMessData__7CDC2MesFPsPs_0x21d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294FC4u; }
        if (ctx->pc != 0x294FC4u) { return; }
    }
    ctx->pc = 0x294FC4u;
label_294fc4:
    // 0x294fc4: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x294fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x294fc8: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x294FC8u;
    SET_GPR_U32(ctx, 31, 0x294FD0u);
    ctx->pc = 0x294FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294FC8u;
            // 0x294fcc: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294FD0u; }
        if (ctx->pc != 0x294FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294FD0u; }
        if (ctx->pc != 0x294FD0u) { return; }
    }
    ctx->pc = 0x294FD0u;
label_294fd0:
    // 0x294fd0: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x294fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x294fd4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x294fd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x294fd8: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x294fd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x294fdc: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x294fdcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x294fe0: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x294FE0u;
    {
        const bool branch_taken_0x294fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x294FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294FE0u;
            // 0x294fe4: 0xac6017f4  sw          $zero, 0x17F4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 6132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294fe0) {
            ctx->pc = 0x294F68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_294f68;
        }
    }
    ctx->pc = 0x294FE8u;
    // 0x294fe8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x294fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x294fec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x294fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294ff0: 0x24a5dd60  addiu       $a1, $a1, -0x22A0
    ctx->pc = 0x294ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958432));
    // 0x294ff4: 0xc052734  jal         func_149CD0
    ctx->pc = 0x294FF4u;
    SET_GPR_U32(ctx, 31, 0x294FFCu);
    ctx->pc = 0x294FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294FF4u;
            // 0x294ff8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294FFCu; }
        if (ctx->pc != 0x294FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294FFCu; }
        if (ctx->pc != 0x294FFCu) { return; }
    }
    ctx->pc = 0x294FFCu;
label_294ffc:
    // 0x294ffc: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x294ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x295000: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x295000u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x295004: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x295004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295008: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x295008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x29500c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29500cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295010: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x295010u;
    SET_GPR_U32(ctx, 31, 0x295018u);
    ctx->pc = 0x295014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295010u;
            // 0x295014: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295018u; }
        if (ctx->pc != 0x295018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295018u; }
        if (ctx->pc != 0x295018u) { return; }
    }
    ctx->pc = 0x295018u;
label_295018:
    // 0x295018: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x295018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x29501c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x29501cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x295020: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x295020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x295024: 0x24a5dd68  addiu       $a1, $a1, -0x2298
    ctx->pc = 0x295024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958440));
    // 0x295028: 0xc04b414  jal         func_12D050
    ctx->pc = 0x295028u;
    SET_GPR_U32(ctx, 31, 0x295030u);
    ctx->pc = 0x29502Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295028u;
            // 0x29502c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295030u; }
        if (ctx->pc != 0x295030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295030u; }
        if (ctx->pc != 0x295030u) { return; }
    }
    ctx->pc = 0x295030u;
label_295030:
    // 0x295030: 0xaf82989c  sw          $v0, -0x6764($gp)
    ctx->pc = 0x295030u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940828), GPR_U32(ctx, 2));
    // 0x295034: 0xaf8098a8  sw          $zero, -0x6758($gp)
    ctx->pc = 0x295034u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940840), GPR_U32(ctx, 0));
    // 0x295038: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x295038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_29503c:
    // 0x29503c: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x29503cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x295040: 0xaf8298c4  sw          $v0, -0x673C($gp)
    ctx->pc = 0x295040u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940868), GPR_U32(ctx, 2));
    // 0x295044: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x295044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295048: 0x3c0242a4  lui         $v0, 0x42A4
    ctx->pc = 0x295048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17060 << 16));
    // 0x29504c: 0xaf8398c0  sw          $v1, -0x6740($gp)
    ctx->pc = 0x29504cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940864), GPR_U32(ctx, 3));
    // 0x295050: 0xaf8298b0  sw          $v0, -0x6750($gp)
    ctx->pc = 0x295050u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940848), GPR_U32(ctx, 2));
    // 0x295054: 0xc0a5350  jal         func_294D40
    ctx->pc = 0x295054u;
    SET_GPR_U32(ctx, 31, 0x29505Cu);
    ctx->pc = 0x295058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295054u;
            // 0x295058: 0xaf8398b4  sw          $v1, -0x674C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940852), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294D40u;
    if (runtime->hasFunction(0x294D40u)) {
        auto targetFn = runtime->lookupFunction(0x294D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29505Cu; }
        if (ctx->pc != 0x29505Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SelectMax__14CMenuQuestViewFv_0x294d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29505Cu; }
        if (ctx->pc != 0x29505Cu) { return; }
    }
    ctx->pc = 0x29505Cu;
label_29505c:
    // 0x29505c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x29505Cu;
    {
        const bool branch_taken_0x29505c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29505Cu;
            // 0x295060: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29505c) {
            ctx->pc = 0x2950A0u;
            goto label_2950a0;
        }
    }
    ctx->pc = 0x295064u;
    // 0x295064: 0xc0a5350  jal         func_294D40
    ctx->pc = 0x295064u;
    SET_GPR_U32(ctx, 31, 0x29506Cu);
    ctx->pc = 0x295068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295064u;
            // 0x295068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294D40u;
    if (runtime->hasFunction(0x294D40u)) {
        auto targetFn = runtime->lookupFunction(0x294D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29506Cu; }
        if (ctx->pc != 0x29506Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SelectMax__14CMenuQuestViewFv_0x294d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29506Cu; }
        if (ctx->pc != 0x29506Cu) { return; }
    }
    ctx->pc = 0x29506Cu;
label_29506c:
    // 0x29506c: 0x240300f8  addiu       $v1, $zero, 0xF8
    ctx->pc = 0x29506cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
    // 0x295070: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x295070u;
    {
        const bool branch_taken_0x295070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295070u;
            // 0x295074: 0x62001a  div         $zero, $v1, $v0 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x295070) {
            ctx->pc = 0x29507Cu;
            goto label_29507c;
        }
    }
    ctx->pc = 0x295078u;
    // 0x295078: 0x1cd  break       0, 7
    ctx->pc = 0x295078u;
    runtime->handleBreak(rdram, ctx);
label_29507c:
    // 0x29507c: 0x1812  mflo        $v1
    ctx->pc = 0x29507cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x295080: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x295080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x295084: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x295084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x295088: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x295088u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29508c: 0x0  nop
    ctx->pc = 0x29508cu;
    // NOP
    // 0x295090: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x295090u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x295094: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x295094u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x295098: 0xe78098c4  swc1        $f0, -0x673C($gp)
    ctx->pc = 0x295098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294940868), bits); }
    // 0x29509c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29509cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2950a0:
    // 0x2950a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2950a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2950a4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2950a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2950a8: 0xaf828444  sw          $v0, -0x7BBC($gp)
    ctx->pc = 0x2950a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935620), GPR_U32(ctx, 2));
    // 0x2950ac: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x2950acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2950b0: 0xa38098c8  sb          $zero, -0x6738($gp)
    ctx->pc = 0x2950b0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940872), (uint8_t)GPR_U32(ctx, 0));
    // 0x2950b4: 0xaf8098a4  sw          $zero, -0x675C($gp)
    ctx->pc = 0x2950b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940836), GPR_U32(ctx, 0));
    // 0x2950b8: 0xc08e88c  jal         func_23A230
    ctx->pc = 0x2950B8u;
    SET_GPR_U32(ctx, 31, 0x2950C0u);
    ctx->pc = 0x2950BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2950B8u;
            // 0x2950bc: 0xaf8098d4  sw          $zero, -0x672C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940884), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A230u;
    if (runtime->hasFunction(0x23A230u)) {
        auto targetFn = runtime->lookupFunction(0x23A230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2950C0u; }
        if (ctx->pc != 0x2950C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeInMenu__14CBaseMenuClassFif_0x23a230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2950C0u; }
        if (ctx->pc != 0x2950C0u) { return; }
    }
    ctx->pc = 0x2950C0u;
label_2950c0:
    // 0x2950c0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2950c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2950c4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2950c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2950c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2950c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2950cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2950ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2950d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2950d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2950d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2950d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2950d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2950d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2950dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2950DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2950E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2950DCu;
            // 0x2950e0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2950E4u;
}
