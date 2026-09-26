#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitializeCMenuPosDataManage__18CMenuPosDataManageFv
// Address: 0x22cb10 - 0x22cb9c
void InitializeCMenuPosDataManage__18CMenuPosDataManageFv_0x22cb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitializeCMenuPosDataManage__18CMenuPosDataManageFv_0x22cb10");
#endif

    switch (ctx->pc) {
        case 0x22cb24u: goto label_22cb24;
        case 0x22cb6cu: goto label_22cb6c;
        case 0x22cb7cu: goto label_22cb7c;
        case 0x22cb8cu: goto label_22cb8c;
        default: break;
    }

    ctx->pc = 0x22cb10u;

    // 0x22cb10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22cb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22cb14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22cb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22cb18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22cb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22cb1c: 0xc08a9cc  jal         func_22A730
    ctx->pc = 0x22CB1Cu;
    SET_GPR_U32(ctx, 31, 0x22CB24u);
    ctx->pc = 0x22CB20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CB1Cu;
            // 0x22cb20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A730u;
    if (runtime->hasFunction(0x22A730u)) {
        auto targetFn = runtime->lookupFunction(0x22A730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CB24u; }
        if (ctx->pc != 0x22CB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__14CPosDataManageFv_0x22a730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CB24u; }
        if (ctx->pc != 0x22CB24u) { return; }
    }
    ctx->pc = 0x22CB24u;
label_22cb24:
    // 0x22cb24: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x22cb24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x22cb28: 0x26040074  addiu       $a0, $s0, 0x74
    ctx->pc = 0x22cb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
    // 0x22cb2c: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x22cb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x22cb30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22cb30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cb34: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x22cb34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x22cb38: 0x24060258  addiu       $a2, $zero, 0x258
    ctx->pc = 0x22cb38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x22cb3c: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x22cb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x22cb40: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x22cb40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x22cb44: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x22cb44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x22cb48: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x22cb48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x22cb4c: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x22cb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x22cb50: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x22cb50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x22cb54: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x22cb54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x22cb58: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x22cb58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x22cb5c: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x22cb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x22cb60: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x22cb60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x22cb64: 0xc049c86  jal         func_127218
    ctx->pc = 0x22CB64u;
    SET_GPR_U32(ctx, 31, 0x22CB6Cu);
    ctx->pc = 0x22CB68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CB64u;
            // 0x22cb68: 0xae000070  sw          $zero, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CB6Cu; }
        if (ctx->pc != 0x22CB6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CB6Cu; }
        if (ctx->pc != 0x22CB6Cu) { return; }
    }
    ctx->pc = 0x22CB6Cu;
label_22cb6c:
    // 0x22cb6c: 0x260402cc  addiu       $a0, $s0, 0x2CC
    ctx->pc = 0x22cb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 716));
    // 0x22cb70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22cb70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cb74: 0xc049c86  jal         func_127218
    ctx->pc = 0x22CB74u;
    SET_GPR_U32(ctx, 31, 0x22CB7Cu);
    ctx->pc = 0x22CB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CB74u;
            // 0x22cb78: 0x24060258  addiu       $a2, $zero, 0x258 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CB7Cu; }
        if (ctx->pc != 0x22CB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CB7Cu; }
        if (ctx->pc != 0x22CB7Cu) { return; }
    }
    ctx->pc = 0x22CB7Cu;
label_22cb7c:
    // 0x22cb7c: 0x26040524  addiu       $a0, $s0, 0x524
    ctx->pc = 0x22cb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1316));
    // 0x22cb80: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x22cb80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22cb84: 0xc049c86  jal         func_127218
    ctx->pc = 0x22CB84u;
    SET_GPR_U32(ctx, 31, 0x22CB8Cu);
    ctx->pc = 0x22CB88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CB84u;
            // 0x22cb88: 0x24060096  addiu       $a2, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CB8Cu; }
        if (ctx->pc != 0x22CB8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CB8Cu; }
        if (ctx->pc != 0x22CB8Cu) { return; }
    }
    ctx->pc = 0x22CB8Cu;
label_22cb8c:
    // 0x22cb8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22cb8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22cb90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22cb90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22cb94: 0x3e00008  jr          $ra
    ctx->pc = 0x22CB94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22CB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CB94u;
            // 0x22cb98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22CB9Cu;
}
