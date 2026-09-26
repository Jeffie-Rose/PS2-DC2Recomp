#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetCodeNo__FPc
// Address: 0x2d45f0 - 0x2d4668
void GetCodeNo__FPc_0x2d45f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetCodeNo__FPc_0x2d45f0");
#endif

    switch (ctx->pc) {
        case 0x2d4610u: goto label_2d4610;
        case 0x2d462cu: goto label_2d462c;
        default: break;
    }

    ctx->pc = 0x2d45f0u;

    // 0x2d45f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d45f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d45f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d45f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d45f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d45f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d45fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d45fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d4600: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d4600u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4604: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d4604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d4608: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d4608u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d460c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d460cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d4610:
    // 0x2d4610: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2d4610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2d4614: 0x24426b60  addiu       $v0, $v0, 0x6B60
    ctx->pc = 0x2d4614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27488));
    // 0x2d4618: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2d4618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d461c: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x2d461cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d4620: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2d4620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d4624: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x2D4624u;
    SET_GPR_U32(ctx, 31, 0x2D462Cu);
    ctx->pc = 0x2D4628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4624u;
            // 0x2d4628: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D462Cu; }
        if (ctx->pc != 0x2D462Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D462Cu; }
        if (ctx->pc != 0x2D462Cu) { return; }
    }
    ctx->pc = 0x2D462Cu;
label_2d462c:
    // 0x2d462c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D462Cu;
    {
        const bool branch_taken_0x2d462c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D462Cu;
            // 0x2d4630: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d462c) {
            ctx->pc = 0x2D463Cu;
            goto label_2d463c;
        }
    }
    ctx->pc = 0x2D4634u;
    // 0x2d4634: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D4634u;
    {
        const bool branch_taken_0x2d4634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4634u;
            // 0x2d4638: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4634) {
            ctx->pc = 0x2D4654u;
            goto label_2d4654;
        }
    }
    ctx->pc = 0x2D463Cu;
label_2d463c:
    // 0x2d463c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2d463cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d4640: 0x2a02002e  slti        $v0, $s0, 0x2E
    ctx->pc = 0x2d4640u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)46) ? 1 : 0);
    // 0x2d4644: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2D4644u;
    {
        const bool branch_taken_0x2d4644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4644u;
            // 0x2d4648: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4644) {
            ctx->pc = 0x2D4610u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d4610;
        }
    }
    ctx->pc = 0x2D464Cu;
    // 0x2d464c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d464cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d4650: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d4650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2d4654:
    // 0x2d4654: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d4654u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d4658: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d4658u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d465c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d465cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d4660: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4660u;
            // 0x2d4664: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D4668u;
}
