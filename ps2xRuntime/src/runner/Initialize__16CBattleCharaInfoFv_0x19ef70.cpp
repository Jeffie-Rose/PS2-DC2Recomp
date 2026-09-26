#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__16CBattleCharaInfoFv
// Address: 0x19ef70 - 0x19efc8
void Initialize__16CBattleCharaInfoFv_0x19ef70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__16CBattleCharaInfoFv_0x19ef70");
#endif

    switch (ctx->pc) {
        case 0x19ef8cu: goto label_19ef8c;
        default: break;
    }

    ctx->pc = 0x19ef70u;

    // 0x19ef70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19ef70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19ef74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19ef74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ef78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19ef78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19ef7c: 0x24060090  addiu       $a2, $zero, 0x90
    ctx->pc = 0x19ef7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x19ef80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19ef80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19ef84: 0xc049c86  jal         func_127218
    ctx->pc = 0x19EF84u;
    SET_GPR_U32(ctx, 31, 0x19EF8Cu);
    ctx->pc = 0x19EF88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EF84u;
            // 0x19ef88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EF8Cu; }
        if (ctx->pc != 0x19EF8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EF8Cu; }
        if (ctx->pc != 0x19EF8Cu) { return; }
    }
    ctx->pc = 0x19EF8Cu;
label_19ef8c:
    // 0x19ef8c: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x19ef8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x19ef90: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x19ef90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19ef94: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x19ef94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x19ef98: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x19ef98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x19ef9c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x19ef9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x19efa0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x19efa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x19efa4: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x19efa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x19efa8: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x19efa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x19efac: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x19efacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x19efb0: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x19efb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
    // 0x19efb4: 0xae030084  sw          $v1, 0x84($s0)
    ctx->pc = 0x19efb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
    // 0x19efb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19efb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19efbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19efbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19efc0: 0x3e00008  jr          $ra
    ctx->pc = 0x19EFC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EFC0u;
            // 0x19efc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19EFC8u;
}
