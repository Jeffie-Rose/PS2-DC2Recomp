#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetupMonster__FP6CSceneP16CUserDataManager
// Address: 0x1ea6b0 - 0x1ea758
void SetupMonster__FP6CSceneP16CUserDataManager_0x1ea6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetupMonster__FP6CSceneP16CUserDataManager_0x1ea6b0");
#endif

    switch (ctx->pc) {
        case 0x1ea6d0u: goto label_1ea6d0;
        case 0x1ea6dcu: goto label_1ea6dc;
        case 0x1ea6fcu: goto label_1ea6fc;
        case 0x1ea728u: goto label_1ea728;
        default: break;
    }

    ctx->pc = 0x1ea6b0u;

    // 0x1ea6b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ea6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ea6b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ea6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ea6b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ea6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ea6bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ea6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ea6c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ea6c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea6c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ea6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ea6c8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ea6c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea6cc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ea6ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea6d0:
    // 0x1ea6d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ea6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea6d4: 0xc0a0ed8  jal         func_283B60
    ctx->pc = 0x1EA6D4u;
    SET_GPR_U32(ctx, 31, 0x1EA6DCu);
    ctx->pc = 0x1EA6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA6D4u;
            // 0x1ea6d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA6DCu; }
        if (ctx->pc != 0x1EA6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA6DCu; }
        if (ctx->pc != 0x1EA6DCu) { return; }
    }
    ctx->pc = 0x1EA6DCu;
label_1ea6dc:
    // 0x1ea6dc: 0x23d1821  addu        $v1, $s1, $sp
    ctx->pc = 0x1ea6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x1ea6e0: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x1ea6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x1ea6e4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ea6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1ea6e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ea6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ea6ec: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EA6ECu;
    {
        const bool branch_taken_0x1ea6ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea6ec) {
            ctx->pc = 0x1EA6FCu;
            goto label_1ea6fc;
        }
    }
    ctx->pc = 0x1EA6F4u;
    // 0x1ea6f4: 0xc05af58  jal         func_16BD60
    ctx->pc = 0x1EA6F4u;
    SET_GPR_U32(ctx, 31, 0x1EA6FCu);
    ctx->pc = 0x16BD60u;
    if (runtime->hasFunction(0x16BD60u)) {
        auto targetFn = runtime->lookupFunction(0x16BD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA6FCu; }
        if (ctx->pc != 0x1EA6FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetParent__12CActionCharaFv_0x16bd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA6FCu; }
        if (ctx->pc != 0x1EA6FCu) { return; }
    }
    ctx->pc = 0x1EA6FCu;
label_1ea6fc:
    // 0x1ea6fc: 0x0  nop
    ctx->pc = 0x1ea6fcu;
    // NOP
    // 0x1ea700: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ea700u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ea704: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x1ea704u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1ea708: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1EA708u;
    {
        const bool branch_taken_0x1ea708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA708u;
            // 0x1ea70c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea708) {
            ctx->pc = 0x1EA6D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ea6d0;
        }
    }
    ctx->pc = 0x1EA710u;
    // 0x1ea710: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ea710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ea714: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EA714u;
    {
        const bool branch_taken_0x1ea714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA714u;
            // 0x1ea718: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea714) {
            ctx->pc = 0x1EA728u;
            goto label_1ea728;
        }
    }
    ctx->pc = 0x1EA71Cu;
    // 0x1ea71c: 0x244400f0  addiu       $a0, $v0, 0xF0
    ctx->pc = 0x1ea71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x1ea720: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1EA720u;
    SET_GPR_U32(ctx, 31, 0x1EA728u);
    ctx->pc = 0x1EA724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA720u;
            // 0x1ea724: 0x24a584a8  addiu       $a1, $a1, -0x7B58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA728u; }
        if (ctx->pc != 0x1EA728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA728u; }
        if (ctx->pc != 0x1EA728u) { return; }
    }
    ctx->pc = 0x1EA728u;
label_1ea728:
    // 0x1ea728: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1ea728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ea72c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1ea72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ea730: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ea730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ea734: 0xac6406a8  sw          $a0, 0x6A8($v1)
    ctx->pc = 0x1ea734u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1704), GPR_U32(ctx, 4));
    // 0x1ea738: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1ea738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ea73c: 0xac640670  sw          $a0, 0x670($v1)
    ctx->pc = 0x1ea73cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1648), GPR_U32(ctx, 4));
    // 0x1ea740: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ea740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ea744: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ea744u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ea748: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ea748u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ea74c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ea74cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ea750: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA750u;
            // 0x1ea754: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EA758u;
}
