#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_PAKU_MOTION__FP12RS_STACKDATAi
// Address: 0x265a50 - 0x265b48
void ps2__SET_PAKU_MOTION__FP12RS_STACKDATAi_0x265a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_PAKU_MOTION__FP12RS_STACKDATAi_0x265a50");
#endif

    switch (ctx->pc) {
        case 0x265a80u: goto label_265a80;
        case 0x265a90u: goto label_265a90;
        case 0x265aa0u: goto label_265aa0;
        case 0x265ac0u: goto label_265ac0;
        case 0x265accu: goto label_265acc;
        case 0x265ae4u: goto label_265ae4;
        case 0x265afcu: goto label_265afc;
        case 0x265b18u: goto label_265b18;
        default: break;
    }

    ctx->pc = 0x265a50u;

    // 0x265a50: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x265a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x265a54: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x265a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x265a58: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x265a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x265a5c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x265a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x265a60: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x265a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x265a64: 0x24950008  addiu       $s5, $a0, 0x8
    ctx->pc = 0x265a64u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x265a68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x265a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x265a6c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x265a6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265a70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x265a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x265a74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x265a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x265a78: 0xc097e18  jal         func_25F860
    ctx->pc = 0x265A78u;
    SET_GPR_U32(ctx, 31, 0x265A80u);
    ctx->pc = 0x265A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265A78u;
            // 0x265a7c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265A80u; }
        if (ctx->pc != 0x265A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265A80u; }
        if (ctx->pc != 0x265A80u) { return; }
    }
    ctx->pc = 0x265A80u;
label_265a80:
    // 0x265a80: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x265a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265a84: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x265a84u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265a88: 0xc097e48  jal         func_25F920
    ctx->pc = 0x265A88u;
    SET_GPR_U32(ctx, 31, 0x265A90u);
    ctx->pc = 0x265A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265A88u;
            // 0x265a8c: 0x24950008  addiu       $s5, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265A90u; }
        if (ctx->pc != 0x265A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265A90u; }
        if (ctx->pc != 0x265A90u) { return; }
    }
    ctx->pc = 0x265A90u;
label_265a90:
    // 0x265a90: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x265a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265a94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x265a94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265a98: 0xc097e18  jal         func_25F860
    ctx->pc = 0x265A98u;
    SET_GPR_U32(ctx, 31, 0x265AA0u);
    ctx->pc = 0x265A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265A98u;
            // 0x265a9c: 0x24950008  addiu       $s5, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265AA0u; }
        if (ctx->pc != 0x265AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265AA0u; }
        if (ctx->pc != 0x265AA0u) { return; }
    }
    ctx->pc = 0x265AA0u;
label_265aa0:
    // 0x265aa0: 0x2a810004  slti        $at, $s4, 0x4
    ctx->pc = 0x265aa0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x265aa4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x265aa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265aa8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x265aa8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265aac: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x265AACu;
    {
        const bool branch_taken_0x265aac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x265AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265AACu;
            // 0x265ab0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265aac) {
            ctx->pc = 0x265AD0u;
            goto label_265ad0;
        }
    }
    ctx->pc = 0x265AB4u;
    // 0x265ab4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x265ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265ab8: 0xc097e48  jal         func_25F920
    ctx->pc = 0x265AB8u;
    SET_GPR_U32(ctx, 31, 0x265AC0u);
    ctx->pc = 0x265ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265AB8u;
            // 0x265abc: 0x24950008  addiu       $s5, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265AC0u; }
        if (ctx->pc != 0x265AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265AC0u; }
        if (ctx->pc != 0x265AC0u) { return; }
    }
    ctx->pc = 0x265AC0u;
label_265ac0:
    // 0x265ac0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x265ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265ac4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x265AC4u;
    SET_GPR_U32(ctx, 31, 0x265ACCu);
    ctx->pc = 0x265AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265AC4u;
            // 0x265ac8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265ACCu; }
        if (ctx->pc != 0x265ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265ACCu; }
        if (ctx->pc != 0x265ACCu) { return; }
    }
    ctx->pc = 0x265ACCu;
label_265acc:
    // 0x265acc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x265accu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_265ad0:
    // 0x265ad0: 0x3c0401ee  lui         $a0, 0x1EE
    ctx->pc = 0x265ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)494 << 16));
    // 0x265ad4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x265ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265ad8: 0x24840310  addiu       $a0, $a0, 0x310
    ctx->pc = 0x265ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 784));
    // 0x265adc: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x265ADCu;
    SET_GPR_U32(ctx, 31, 0x265AE4u);
    ctx->pc = 0x265AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265ADCu;
            // 0x265ae0: 0xaf9697fc  sw          $s6, -0x6804($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940668), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265AE4u; }
        if (ctx->pc != 0x265AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265AE4u; }
        if (ctx->pc != 0x265AE4u) { return; }
    }
    ctx->pc = 0x265AE4u;
label_265ae4:
    // 0x265ae4: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x265AE4u;
    {
        const bool branch_taken_0x265ae4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x265AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265AE4u;
            // 0x265ae8: 0xaf919800  sw          $s1, -0x6800($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940672), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265ae4) {
            ctx->pc = 0x265B04u;
            goto label_265b04;
        }
    }
    ctx->pc = 0x265AECu;
    // 0x265aec: 0x3c0401ee  lui         $a0, 0x1EE
    ctx->pc = 0x265aecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)494 << 16));
    // 0x265af0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x265af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265af4: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x265AF4u;
    SET_GPR_U32(ctx, 31, 0x265AFCu);
    ctx->pc = 0x265AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265AF4u;
            // 0x265af8: 0x24840350  addiu       $a0, $a0, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265AFCu; }
        if (ctx->pc != 0x265AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265AFCu; }
        if (ctx->pc != 0x265AFCu) { return; }
    }
    ctx->pc = 0x265AFCu;
label_265afc:
    // 0x265afc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x265AFCu;
    {
        const bool branch_taken_0x265afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265AFCu;
            // 0x265b00: 0xaf939804  sw          $s3, -0x67FC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940676), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265afc) {
            ctx->pc = 0x265B1Cu;
            goto label_265b1c;
        }
    }
    ctx->pc = 0x265B04u;
label_265b04:
    // 0x265b04: 0x3c0401ee  lui         $a0, 0x1EE
    ctx->pc = 0x265b04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)494 << 16));
    // 0x265b08: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x265b08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x265b0c: 0x24840350  addiu       $a0, $a0, 0x350
    ctx->pc = 0x265b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 848));
    // 0x265b10: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x265B10u;
    SET_GPR_U32(ctx, 31, 0x265B18u);
    ctx->pc = 0x265B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265B10u;
            // 0x265b14: 0x24a5c708  addiu       $a1, $a1, -0x38F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265B18u; }
        if (ctx->pc != 0x265B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265B18u; }
        if (ctx->pc != 0x265B18u) { return; }
    }
    ctx->pc = 0x265B18u;
label_265b18:
    // 0x265b18: 0xaf939804  sw          $s3, -0x67FC($gp)
    ctx->pc = 0x265b18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940676), GPR_U32(ctx, 19));
label_265b1c:
    // 0x265b1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x265b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x265b20: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x265b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x265b24: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x265b24u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x265b28: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x265b28u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x265b2c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x265b2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x265b30: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x265b30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x265b34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x265b34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265b38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x265b38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265b3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x265b3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265b40: 0x3e00008  jr          $ra
    ctx->pc = 0x265B40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265B40u;
            // 0x265b44: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x265B48u;
}
