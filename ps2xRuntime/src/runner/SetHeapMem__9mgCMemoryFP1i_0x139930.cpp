#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetHeapMem__9mgCMemoryFP1i
// Address: 0x139930 - 0x1399c8
void SetHeapMem__9mgCMemoryFP1i_0x139930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetHeapMem__9mgCMemoryFP1i_0x139930");
#endif

    switch (ctx->pc) {
        case 0x13995cu: goto label_13995c;
        default: break;
    }

    ctx->pc = 0x139930u;

    // 0x139930: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x139930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x139934: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x139934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x139938: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x139938u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
    // 0x13993c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13993Cu;
    {
        const bool branch_taken_0x13993c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x139940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13993Cu;
            // 0x139940: 0xac860010  sw          $a2, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13993c) {
            ctx->pc = 0x139954u;
            goto label_139954;
        }
    }
    ctx->pc = 0x139944u;
    // 0x139944: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x139944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x139948: 0x2c610010  sltiu       $at, $v1, 0x10
    ctx->pc = 0x139948u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x13994c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x13994Cu;
    {
        const bool branch_taken_0x13994c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13994c) {
            ctx->pc = 0x139964u;
            goto label_139964;
        }
    }
    ctx->pc = 0x139954u;
label_139954:
    // 0x139954: 0xc04e640  jal         func_139900
    ctx->pc = 0x139954u;
    SET_GPR_U32(ctx, 31, 0x13995Cu);
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13995Cu; }
        if (ctx->pc != 0x13995Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13995Cu; }
        if (ctx->pc != 0x13995Cu) { return; }
    }
    ctx->pc = 0x13995Cu;
label_13995c:
    // 0x13995c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x13995Cu;
    {
        const bool branch_taken_0x13995c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13995Cu;
            // 0x139960: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13995c) {
            ctx->pc = 0x1399C0u;
            goto label_1399c0;
        }
    }
    ctx->pc = 0x139964u;
label_139964:
    // 0x139964: 0xac850018  sw          $a1, 0x18($a0)
    ctx->pc = 0x139964u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
    // 0x139968: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x139968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x13996c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13996cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139970: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x139970u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x139974: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x139974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x139978: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x139978u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x13997c: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x13997cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x139980: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x139980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x139984: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x139984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x139988: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x139988u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x13998c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x13998cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x139990: 0x24a5fff0  addiu       $a1, $a1, -0x10
    ctx->pc = 0x139990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x139994: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x139994u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
    // 0x139998: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x139998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x13999c: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x13999cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1399a0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1399a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1399a4: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x1399a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1399a8: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1399a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1399ac: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1399acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1399b0: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x1399b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1399b4: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1399b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1399b8: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1399b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1399bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1399bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1399c0:
    // 0x1399c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1399C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1399C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1399C0u;
            // 0x1399c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1399C8u;
}
