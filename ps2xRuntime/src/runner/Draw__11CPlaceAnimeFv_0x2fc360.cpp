#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__11CPlaceAnimeFv
// Address: 0x2fc360 - 0x2fc3c4
void Draw__11CPlaceAnimeFv_0x2fc360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__11CPlaceAnimeFv_0x2fc360");
#endif

    switch (ctx->pc) {
        case 0x2fc360u: goto label_2fc360;
        case 0x2fc364u: goto label_2fc364;
        case 0x2fc368u: goto label_2fc368;
        case 0x2fc36cu: goto label_2fc36c;
        case 0x2fc370u: goto label_2fc370;
        case 0x2fc374u: goto label_2fc374;
        case 0x2fc378u: goto label_2fc378;
        case 0x2fc37cu: goto label_2fc37c;
        case 0x2fc380u: goto label_2fc380;
        case 0x2fc384u: goto label_2fc384;
        case 0x2fc388u: goto label_2fc388;
        case 0x2fc38cu: goto label_2fc38c;
        case 0x2fc390u: goto label_2fc390;
        case 0x2fc394u: goto label_2fc394;
        case 0x2fc398u: goto label_2fc398;
        case 0x2fc39cu: goto label_2fc39c;
        case 0x2fc3a0u: goto label_2fc3a0;
        case 0x2fc3a4u: goto label_2fc3a4;
        case 0x2fc3a8u: goto label_2fc3a8;
        case 0x2fc3acu: goto label_2fc3ac;
        case 0x2fc3b0u: goto label_2fc3b0;
        case 0x2fc3b4u: goto label_2fc3b4;
        case 0x2fc3b8u: goto label_2fc3b8;
        case 0x2fc3bcu: goto label_2fc3bc;
        case 0x2fc3c0u: goto label_2fc3c0;
        default: break;
    }

    ctx->pc = 0x2fc360u;

label_2fc360:
    // 0x2fc360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fc360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2fc364:
    // 0x2fc364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fc364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2fc368:
    // 0x2fc368: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2fc368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fc36c:
    // 0x2fc36c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_2fc370:
    if (ctx->pc == 0x2FC370u) {
        ctx->pc = 0x2FC374u;
        goto label_2fc374;
    }
    ctx->pc = 0x2FC36Cu;
    {
        const bool branch_taken_0x2fc36c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc36c) {
            ctx->pc = 0x2FC3B8u;
            goto label_2fc3b8;
        }
    }
    ctx->pc = 0x2FC374u;
label_2fc374:
    // 0x2fc374: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2fc374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2fc378:
    // 0x2fc378: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
label_2fc37c:
    if (ctx->pc == 0x2FC37Cu) {
        ctx->pc = 0x2FC380u;
        goto label_2fc380;
    }
    ctx->pc = 0x2FC378u;
    {
        const bool branch_taken_0x2fc378 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x2fc378) {
            ctx->pc = 0x2FC388u;
            goto label_2fc388;
        }
    }
    ctx->pc = 0x2FC380u;
label_2fc380:
    // 0x2fc380: 0x1000000e  b           . + 4 + (0xE << 2)
label_2fc384:
    if (ctx->pc == 0x2FC384u) {
        ctx->pc = 0x2FC384u;
            // 0x2fc384: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x2FC388u;
        goto label_2fc388;
    }
    ctx->pc = 0x2FC380u;
    {
        const bool branch_taken_0x2fc380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC380u;
            // 0x2fc384: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc380) {
            ctx->pc = 0x2FC3BCu;
            goto label_2fc3bc;
        }
    }
    ctx->pc = 0x2FC388u;
label_2fc388:
    // 0x2fc388: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x2fc388u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2fc38c:
    // 0x2fc38c: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
label_2fc390:
    if (ctx->pc == 0x2FC390u) {
        ctx->pc = 0x2FC394u;
        goto label_2fc394;
    }
    ctx->pc = 0x2FC38Cu;
    {
        const bool branch_taken_0x2fc38c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc38c) {
            ctx->pc = 0x2FC3B8u;
            goto label_2fc3b8;
        }
    }
    ctx->pc = 0x2FC394u;
label_2fc394:
    // 0x2fc394: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2fc394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2fc398:
    // 0x2fc398: 0x10650003  beq         $v1, $a1, . + 4 + (0x3 << 2)
label_2fc39c:
    if (ctx->pc == 0x2FC39Cu) {
        ctx->pc = 0x2FC3A0u;
        goto label_2fc3a0;
    }
    ctx->pc = 0x2FC398u;
    {
        const bool branch_taken_0x2fc398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x2fc398) {
            ctx->pc = 0x2FC3A8u;
            goto label_2fc3a8;
        }
    }
    ctx->pc = 0x2FC3A0u;
label_2fc3a0:
    // 0x2fc3a0: 0x10000005  b           . + 4 + (0x5 << 2)
label_2fc3a4:
    if (ctx->pc == 0x2FC3A4u) {
        ctx->pc = 0x2FC3A8u;
        goto label_2fc3a8;
    }
    ctx->pc = 0x2FC3A0u;
    {
        const bool branch_taken_0x2fc3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc3a0) {
            ctx->pc = 0x2FC3B8u;
            goto label_2fc3b8;
        }
    }
    ctx->pc = 0x2FC3A8u;
label_2fc3a8:
    // 0x2fc3a8: 0x8cd90000  lw          $t9, 0x0($a2)
    ctx->pc = 0x2fc3a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2fc3ac:
    // 0x2fc3ac: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x2fc3acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_2fc3b0:
    // 0x2fc3b0: 0x320f809  jalr        $t9
label_2fc3b4:
    if (ctx->pc == 0x2FC3B4u) {
        ctx->pc = 0x2FC3B4u;
            // 0x2fc3b4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FC3B8u;
        goto label_2fc3b8;
    }
    ctx->pc = 0x2FC3B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FC3B8u);
        ctx->pc = 0x2FC3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC3B0u;
            // 0x2fc3b4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FC3B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FC3B8u; }
            if (ctx->pc != 0x2FC3B8u) { return; }
        }
        }
    }
    ctx->pc = 0x2FC3B8u;
label_2fc3b8:
    // 0x2fc3b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fc3b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fc3bc:
    // 0x2fc3bc: 0x3e00008  jr          $ra
label_2fc3c0:
    if (ctx->pc == 0x2FC3C0u) {
        ctx->pc = 0x2FC3C0u;
            // 0x2fc3c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2FC3C4u;
        goto label_fallthrough_0x2fc3bc;
    }
    ctx->pc = 0x2FC3BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC3BCu;
            // 0x2fc3c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2fc3bc:
    ctx->pc = 0x2FC3C4u;
}
