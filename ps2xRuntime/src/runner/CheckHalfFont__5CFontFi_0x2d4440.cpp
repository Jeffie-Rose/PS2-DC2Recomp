#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckHalfFont__5CFontFi
// Address: 0x2d4440 - 0x2d4498
void CheckHalfFont__5CFontFi_0x2d4440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckHalfFont__5CFontFi_0x2d4440");
#endif

    switch (ctx->pc) {
        case 0x2d447cu: goto label_2d447c;
        default: break;
    }

    ctx->pc = 0x2d4440u;

    // 0x2d4440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d4440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d4444: 0x3402ff02  ori         $v0, $zero, 0xFF02
    ctx->pc = 0x2d4444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65282);
    // 0x2d4448: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d4448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d444c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d444cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d4450: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d4450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4454: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D4454u;
    {
        const bool branch_taken_0x2d4454 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D4458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4454u;
            // 0x2d4458: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4454) {
            ctx->pc = 0x2D4464u;
            goto label_2d4464;
        }
    }
    ctx->pc = 0x2D445Cu;
    // 0x2d445c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2D445Cu;
    {
        const bool branch_taken_0x2d445c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D445Cu;
            // 0x2d4460: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d445c) {
            ctx->pc = 0x2D448Cu;
            goto label_2d448c;
        }
    }
    ctx->pc = 0x2D4464u;
label_2d4464:
    // 0x2d4464: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D4464u;
    {
        const bool branch_taken_0x2d4464 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2D4468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4464u;
            // 0x2d4468: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4464) {
            ctx->pc = 0x2D4474u;
            goto label_2d4474;
        }
    }
    ctx->pc = 0x2D446Cu;
    // 0x2d446c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D446Cu;
    {
        const bool branch_taken_0x2d446c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d446c) {
            ctx->pc = 0x2D4488u;
            goto label_2d4488;
        }
    }
    ctx->pc = 0x2D4474u;
label_2d4474:
    // 0x2d4474: 0xc0b50f8  jal         func_2D43E0
    ctx->pc = 0x2D4474u;
    SET_GPR_U32(ctx, 31, 0x2D447Cu);
    ctx->pc = 0x2D43E0u;
    if (runtime->hasFunction(0x2D43E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D43E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D447Cu; }
        if (ctx->pc != 0x2D447Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHalfFontNum__Fv_0x2d43e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D447Cu; }
        if (ctx->pc != 0x2D447Cu) { return; }
    }
    ctx->pc = 0x2D447Cu;
label_2d447c:
    // 0x2d447c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2d447cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d4480: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2d4480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2d4484: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2d4484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2d4488:
    // 0x2d4488: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d4488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d448c:
    // 0x2d448c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d448cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d4490: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4490u;
            // 0x2d4494: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D4498u;
}
