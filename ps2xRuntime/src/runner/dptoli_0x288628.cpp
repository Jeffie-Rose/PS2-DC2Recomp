#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: dptoli
// Address: 0x288628 - 0x2886bc
void dptoli_0x288628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dptoli_0x288628");
#endif

    switch (ctx->pc) {
        case 0x288640u: goto label_288640;
        case 0x288658u: goto label_288658;
        default: break;
    }

    ctx->pc = 0x288628u;

    // 0x288628: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x288628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28862c: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x28862cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x288630: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x288630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288634: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x288634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x288638: 0xc0a1f16  jal         func_287C58
    ctx->pc = 0x288638u;
    SET_GPR_U32(ctx, 31, 0x288640u);
    ctx->pc = 0x28863Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288638u;
            // 0x28863c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287C58u;
    if (runtime->hasFunction(0x287C58u)) {
        auto targetFn = runtime->lookupFunction(0x287C58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288640u; }
        if (ctx->pc != 0x288640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x287c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288640u; }
        if (ctx->pc != 0x288640u) { return; }
    }
    ctx->pc = 0x288640u;
label_288640:
    // 0x288640: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x288640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288644: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x288644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x288648: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x288648u;
    {
        const bool branch_taken_0x288648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28864Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288648u;
            // 0x28864c: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x288648) {
            ctx->pc = 0x288658u;
            goto label_288658;
        }
    }
    ctx->pc = 0x288650u;
    // 0x288650: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x288650u;
    {
        const bool branch_taken_0x288650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288650u;
            // 0x288654: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x288650) {
            ctx->pc = 0x288660u;
            goto label_288660;
        }
    }
    ctx->pc = 0x288658u;
label_288658:
    // 0x288658: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x288658u;
    {
        const bool branch_taken_0x288658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28865Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288658u;
            // 0x28865c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288658) {
            ctx->pc = 0x2886B0u;
            goto label_2886b0;
        }
    }
    ctx->pc = 0x288660u;
label_288660:
    // 0x288660: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x288660u;
    {
        const bool branch_taken_0x288660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288660u;
            // 0x288664: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288660) {
            ctx->pc = 0x288678u;
            goto label_288678;
        }
    }
    ctx->pc = 0x288668u;
    // 0x288668: 0x480fffb  bltz        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x288668u;
    {
        const bool branch_taken_0x288668 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x28866Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288668u;
            // 0x28866c: 0x2882001f  slti        $v0, $a0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x288668) {
            ctx->pc = 0x288658u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_288658;
        }
    }
    ctx->pc = 0x288670u;
    // 0x288670: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x288670u;
    {
        const bool branch_taken_0x288670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288670u;
            // 0x288674: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288670) {
            ctx->pc = 0x288690u;
            goto label_288690;
        }
    }
    ctx->pc = 0x288678u;
label_288678:
    // 0x288678: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x288678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x28867c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x28867cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x288680: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x288680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x288684: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x288684u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x288688: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x288688u;
    {
        const bool branch_taken_0x288688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28868Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288688u;
            // 0x28868c: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288688) {
            ctx->pc = 0x2886B0u;
            goto label_2886b0;
        }
    }
    ctx->pc = 0x288690u;
label_288690:
    // 0x288690: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x288690u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288694: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x288694u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x288698: 0x621016  dsrlv       $v0, $v0, $v1
    ctx->pc = 0x288698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x28869c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x28869cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2886a0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2886a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2886a4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2886a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2886a8: 0x21823  negu        $v1, $v0
    ctx->pc = 0x2886a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2886ac: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x2886acu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
label_2886b0:
    // 0x2886b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2886b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2886b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2886B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2886B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2886B4u;
            // 0x2886b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2886BCu;
}
