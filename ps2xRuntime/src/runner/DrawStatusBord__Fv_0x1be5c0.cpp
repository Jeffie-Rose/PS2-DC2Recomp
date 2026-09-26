#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawStatusBord__Fv
// Address: 0x1be5c0 - 0x1be660
void DrawStatusBord__Fv_0x1be5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawStatusBord__Fv_0x1be5c0");
#endif

    switch (ctx->pc) {
        case 0x1be634u: goto label_1be634;
        case 0x1be644u: goto label_1be644;
        case 0x1be654u: goto label_1be654;
        default: break;
    }

    ctx->pc = 0x1be5c0u;

    // 0x1be5c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1be5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1be5c4: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x1be5c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x1be5c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1be5cc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1be5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1be5d0: 0x8f858da0  lw          $a1, -0x7260($gp)
    ctx->pc = 0x1be5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938016)));
    // 0x1be5d4: 0x8f848db0  lw          $a0, -0x7250($gp)
    ctx->pc = 0x1be5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
    // 0x1be5d8: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x1be5d8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x1be5dc: 0x84254d96  lh          $a1, 0x4D96($at)
    ctx->pc = 0x1be5dcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19862)));
    // 0x1be5e0: 0xc48c004c  lwc1        $f12, 0x4C($a0)
    ctx->pc = 0x1be5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1be5e4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1be5e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1be5e8: 0xac200460  sw          $zero, 0x460($at)
    ctx->pc = 0x1be5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1120), GPR_U32(ctx, 0));
    // 0x1be5ec: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1be5ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1be5f0: 0xac200464  sw          $zero, 0x464($at)
    ctx->pc = 0x1be5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1124), GPR_U32(ctx, 0));
    // 0x1be5f4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1be5f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1be5f8: 0xac200468  sw          $zero, 0x468($at)
    ctx->pc = 0x1be5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1128), GPR_U32(ctx, 0));
    // 0x1be5fc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1be5fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1be600: 0x10a30012  beq         $a1, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1BE600u;
    {
        const bool branch_taken_0x1be600 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BE604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE600u;
            // 0x1be604: 0xac20045c  sw          $zero, 0x45C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 1116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be600) {
            ctx->pc = 0x1BE64Cu;
            goto label_1be64c;
        }
    }
    ctx->pc = 0x1BE608u;
    // 0x1be608: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1be608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1be60c: 0x10a3000b  beq         $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1BE60Cu;
    {
        const bool branch_taken_0x1be60c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BE610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE60Cu;
            // 0x1be610: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be60c) {
            ctx->pc = 0x1BE63Cu;
            goto label_1be63c;
        }
    }
    ctx->pc = 0x1BE614u;
    // 0x1be614: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BE614u;
    {
        const bool branch_taken_0x1be614 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1be614) {
            ctx->pc = 0x1BE62Cu;
            goto label_1be62c;
        }
    }
    ctx->pc = 0x1BE61Cu;
    // 0x1be61c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE61Cu;
    {
        const bool branch_taken_0x1be61c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be61c) {
            ctx->pc = 0x1BE62Cu;
            goto label_1be62c;
        }
    }
    ctx->pc = 0x1BE624u;
    // 0x1be624: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1BE624u;
    {
        const bool branch_taken_0x1be624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE624u;
            // 0x1be628: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be624) {
            ctx->pc = 0x1BE658u;
            goto label_1be658;
        }
    }
    ctx->pc = 0x1BE62Cu;
label_1be62c:
    // 0x1be62c: 0xc06f108  jal         func_1BC420
    ctx->pc = 0x1BE62Cu;
    SET_GPR_U32(ctx, 31, 0x1BE634u);
    ctx->pc = 0x1BC420u;
    if (runtime->hasFunction(0x1BC420u)) {
        auto targetFn = runtime->lookupFunction(0x1BC420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE634u; }
        if (ctx->pc != 0x1BE634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMainUnitStatusBord__Ff_0x1bc420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE634u; }
        if (ctx->pc != 0x1BE634u) { return; }
    }
    ctx->pc = 0x1BE634u;
label_1be634:
    // 0x1be634: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BE634u;
    {
        const bool branch_taken_0x1be634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be634) {
            ctx->pc = 0x1BE654u;
            goto label_1be654;
        }
    }
    ctx->pc = 0x1BE63Cu;
label_1be63c:
    // 0x1be63c: 0xc06f5b0  jal         func_1BD6C0
    ctx->pc = 0x1BE63Cu;
    SET_GPR_U32(ctx, 31, 0x1BE644u);
    ctx->pc = 0x1BD6C0u;
    if (runtime->hasFunction(0x1BD6C0u)) {
        auto targetFn = runtime->lookupFunction(0x1BD6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE644u; }
        if (ctx->pc != 0x1BE644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawRoboUnitStatusBord__Ff_0x1bd6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE644u; }
        if (ctx->pc != 0x1BE644u) { return; }
    }
    ctx->pc = 0x1BE644u;
label_1be644:
    // 0x1be644: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE644u;
    {
        const bool branch_taken_0x1be644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be644) {
            ctx->pc = 0x1BE654u;
            goto label_1be654;
        }
    }
    ctx->pc = 0x1BE64Cu;
label_1be64c:
    // 0x1be64c: 0xc06f7d4  jal         func_1BDF50
    ctx->pc = 0x1BE64Cu;
    SET_GPR_U32(ctx, 31, 0x1BE654u);
    ctx->pc = 0x1BDF50u;
    if (runtime->hasFunction(0x1BDF50u)) {
        auto targetFn = runtime->lookupFunction(0x1BDF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE654u; }
        if (ctx->pc != 0x1BE654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMonsterUnitStatusBord__Ff_0x1bdf50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE654u; }
        if (ctx->pc != 0x1BE654u) { return; }
    }
    ctx->pc = 0x1BE654u;
label_1be654:
    // 0x1be654: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1be658:
    // 0x1be658: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE658u;
            // 0x1be65c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE660u;
}
