#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgDrawDirect2__FP8mgCFrame
// Address: 0x1430e0 - 0x14312c
void mgDrawDirect2__FP8mgCFrame_0x1430e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgDrawDirect2__FP8mgCFrame_0x1430e0");
#endif

    switch (ctx->pc) {
        case 0x1430e0u: goto label_1430e0;
        case 0x1430e4u: goto label_1430e4;
        case 0x1430e8u: goto label_1430e8;
        case 0x1430ecu: goto label_1430ec;
        case 0x1430f0u: goto label_1430f0;
        case 0x1430f4u: goto label_1430f4;
        case 0x1430f8u: goto label_1430f8;
        case 0x1430fcu: goto label_1430fc;
        case 0x143100u: goto label_143100;
        case 0x143104u: goto label_143104;
        case 0x143108u: goto label_143108;
        case 0x14310cu: goto label_14310c;
        case 0x143110u: goto label_143110;
        case 0x143114u: goto label_143114;
        case 0x143118u: goto label_143118;
        case 0x14311cu: goto label_14311c;
        case 0x143120u: goto label_143120;
        case 0x143124u: goto label_143124;
        case 0x143128u: goto label_143128;
        default: break;
    }

    ctx->pc = 0x1430e0u;

label_1430e0:
    // 0x1430e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1430e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1430e4:
    // 0x1430e4: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_1430e8:
    if (ctx->pc == 0x1430E8u) {
        ctx->pc = 0x1430E8u;
            // 0x1430e8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1430ECu;
        goto label_1430ec;
    }
    ctx->pc = 0x1430E4u;
    {
        const bool branch_taken_0x1430e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1430E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1430E4u;
            // 0x1430e8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1430e4) {
            ctx->pc = 0x1430F4u;
            goto label_1430f4;
        }
    }
    ctx->pc = 0x1430ECu;
label_1430ec:
    // 0x1430ec: 0x1000000c  b           . + 4 + (0xC << 2)
label_1430f0:
    if (ctx->pc == 0x1430F0u) {
        ctx->pc = 0x1430F0u;
            // 0x1430f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1430F4u;
        goto label_1430f4;
    }
    ctx->pc = 0x1430ECu;
    {
        const bool branch_taken_0x1430ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1430F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1430ECu;
            // 0x1430f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1430ec) {
            ctx->pc = 0x143120u;
            goto label_143120;
        }
    }
    ctx->pc = 0x1430F4u;
label_1430f4:
    // 0x1430f4: 0x8f828774  lw          $v0, -0x788C($gp)
    ctx->pc = 0x1430f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
label_1430f8:
    // 0x1430f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1430f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1430fc:
    // 0x1430fc: 0x8f838888  lw          $v1, -0x7778($gp)
    ctx->pc = 0x1430fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936712)));
label_143100:
    // 0x143100: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x143100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_143104:
    // 0x143104: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x143104u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_143108:
    // 0x143108: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x143108u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_14310c:
    // 0x14310c: 0x320f809  jalr        $t9
label_143110:
    if (ctx->pc == 0x143110u) {
        ctx->pc = 0x143110u;
            // 0x143110: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x143114u;
        goto label_143114;
    }
    ctx->pc = 0x14310Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x143114u);
        ctx->pc = 0x143110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14310Cu;
            // 0x143110: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x143114u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x143114u; }
            if (ctx->pc != 0x143114u) { return; }
        }
        }
    }
    ctx->pc = 0x143114u;
label_143114:
    // 0x143114: 0x8f838888  lw          $v1, -0x7778($gp)
    ctx->pc = 0x143114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936712)));
label_143118:
    // 0x143118: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x143118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_14311c:
    // 0x14311c: 0xaf838888  sw          $v1, -0x7778($gp)
    ctx->pc = 0x14311cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936712), GPR_U32(ctx, 3));
label_143120:
    // 0x143120: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x143120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_143124:
    // 0x143124: 0x3e00008  jr          $ra
label_143128:
    if (ctx->pc == 0x143128u) {
        ctx->pc = 0x143128u;
            // 0x143128: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x14312Cu;
        goto label_fallthrough_0x143124;
    }
    ctx->pc = 0x143124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143124u;
            // 0x143128: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x143124:
    ctx->pc = 0x14312Cu;
}
