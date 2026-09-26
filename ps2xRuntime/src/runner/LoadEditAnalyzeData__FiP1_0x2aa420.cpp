#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadEditAnalyzeData__FiP1
// Address: 0x2aa420 - 0x2aa4f8
void LoadEditAnalyzeData__FiP1_0x2aa420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadEditAnalyzeData__FiP1_0x2aa420");
#endif

    switch (ctx->pc) {
        case 0x2aa44cu: goto label_2aa44c;
        case 0x2aa46cu: goto label_2aa46c;
        case 0x2aa480u: goto label_2aa480;
        case 0x2aa494u: goto label_2aa494;
        case 0x2aa4b0u: goto label_2aa4b0;
        case 0x2aa4e4u: goto label_2aa4e4;
        default: break;
    }

    ctx->pc = 0x2aa420u;

    // 0x2aa420: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2aa420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2aa424: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2aa424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2aa428: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2aa428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2aa42c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2aa42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2aa430: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2aa430u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa434: 0x83829a80  lb          $v0, -0x6580($gp)
    ctx->pc = 0x2aa434u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941312)));
    // 0x2aa438: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AA438u;
    {
        const bool branch_taken_0x2aa438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA438u;
            // 0x2aa43c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa438) {
            ctx->pc = 0x2AA454u;
            goto label_2aa454;
        }
    }
    ctx->pc = 0x2AA440u;
    // 0x2aa440: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2aa440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2aa444: 0xc04e640  jal         func_139900
    ctx->pc = 0x2AA444u;
    SET_GPR_U32(ctx, 31, 0x2AA44Cu);
    ctx->pc = 0x2AA448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA444u;
            // 0x2aa448: 0x2484a340  addiu       $a0, $a0, -0x5CC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA44Cu; }
        if (ctx->pc != 0x2AA44Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA44Cu; }
        if (ctx->pc != 0x2AA44Cu) { return; }
    }
    ctx->pc = 0x2AA44Cu;
label_2aa44c:
    // 0x2aa44c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aa44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aa450: 0xa3829a80  sb          $v0, -0x6580($gp)
    ctx->pc = 0x2aa450u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941312), (uint8_t)GPR_U32(ctx, 2));
label_2aa454:
    // 0x2aa454: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2aa454u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2aa458: 0x3c0501f0  lui         $a1, 0x1F0
    ctx->pc = 0x2aa458u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)496 << 16));
    // 0x2aa45c: 0x2484a340  addiu       $a0, $a0, -0x5CC0
    ctx->pc = 0x2aa45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943552));
    // 0x2aa460: 0x24a57340  addiu       $a1, $a1, 0x7340
    ctx->pc = 0x2aa460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29504));
    // 0x2aa464: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x2AA464u;
    SET_GPR_U32(ctx, 31, 0x2AA46Cu);
    ctx->pc = 0x2AA468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA464u;
            // 0x2aa468: 0x24060300  addiu       $a2, $zero, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA46Cu; }
        if (ctx->pc != 0x2AA46Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA46Cu; }
        if (ctx->pc != 0x2AA46Cu) { return; }
    }
    ctx->pc = 0x2AA46Cu;
label_2aa46c:
    // 0x2aa46c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2aa46cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2aa470: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2aa470u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa474: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2aa474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2aa478: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2AA478u;
    SET_GPR_U32(ctx, 31, 0x2AA480u);
    ctx->pc = 0x2AA47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA478u;
            // 0x2aa47c: 0x24a5e678  addiu       $a1, $a1, -0x1988 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA480u; }
        if (ctx->pc != 0x2AA480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA480u; }
        if (ctx->pc != 0x2AA480u) { return; }
    }
    ctx->pc = 0x2AA480u;
label_2aa480:
    // 0x2aa480: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2aa480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2aa484: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2aa484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa488: 0x27a6007c  addiu       $a2, $sp, 0x7C
    ctx->pc = 0x2aa488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x2aa48c: 0xc0524dc  jal         func_149370
    ctx->pc = 0x2AA48Cu;
    SET_GPR_U32(ctx, 31, 0x2AA494u);
    ctx->pc = 0x2AA490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA48Cu;
            // 0x2aa490: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA494u; }
        if (ctx->pc != 0x2AA494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA494u; }
        if (ctx->pc != 0x2AA494u) { return; }
    }
    ctx->pc = 0x2AA494u;
label_2aa494:
    // 0x2aa494: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AA494u;
    {
        const bool branch_taken_0x2aa494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa494) {
            ctx->pc = 0x2AA4B0u;
            goto label_2aa4b0;
        }
    }
    ctx->pc = 0x2AA49Cu;
    // 0x2aa49c: 0x8fa5007c  lw          $a1, 0x7C($sp)
    ctx->pc = 0x2aa49cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x2aa4a0: 0x3c0601f1  lui         $a2, 0x1F1
    ctx->pc = 0x2aa4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)497 << 16));
    // 0x2aa4a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2aa4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa4a8: 0xc0aa940  jal         func_2AA500
    ctx->pc = 0x2AA4A8u;
    SET_GPR_U32(ctx, 31, 0x2AA4B0u);
    ctx->pc = 0x2AA4ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA4A8u;
            // 0x2aa4ac: 0x24c6a340  addiu       $a2, $a2, -0x5CC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AA500u;
    if (runtime->hasFunction(0x2AA500u)) {
        auto targetFn = runtime->lookupFunction(0x2AA500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA4B0u; }
        if (ctx->pc != 0x2AA4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadEditAnalyzeData__FPciP9mgCMemory_0x2aa500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA4B0u; }
        if (ctx->pc != 0x2AA4B0u) { return; }
    }
    ctx->pc = 0x2AA4B0u;
label_2aa4b0:
    // 0x2aa4b0: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2aa4b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2aa4b4: 0x8c23a368  lw          $v1, -0x5C98($at)
    ctx->pc = 0x2aa4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943592)));
    // 0x2aa4b8: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2aa4b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2aa4bc: 0x8c22a364  lw          $v0, -0x5C9C($at)
    ctx->pc = 0x2aa4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943588)));
    // 0x2aa4c0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2aa4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2aa4c4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2aa4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2aa4c8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA4C8u;
    {
        const bool branch_taken_0x2aa4c8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2AA4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA4C8u;
            // 0x2aa4cc: 0x22a83  sra         $a1, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa4c8) {
            ctx->pc = 0x2AA4D8u;
            goto label_2aa4d8;
        }
    }
    ctx->pc = 0x2AA4D0u;
    // 0x2aa4d0: 0x244203ff  addiu       $v0, $v0, 0x3FF
    ctx->pc = 0x2aa4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
    // 0x2aa4d4: 0x22a83  sra         $a1, $v0, 10
    ctx->pc = 0x2aa4d4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 10));
label_2aa4d8:
    // 0x2aa4d8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2aa4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2aa4dc: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x2AA4DCu;
    SET_GPR_U32(ctx, 31, 0x2AA4E4u);
    ctx->pc = 0x2AA4E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA4DCu;
            // 0x2aa4e0: 0x2484e690  addiu       $a0, $a0, -0x1970 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA4E4u; }
        if (ctx->pc != 0x2AA4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA4E4u; }
        if (ctx->pc != 0x2AA4E4u) { return; }
    }
    ctx->pc = 0x2AA4E4u;
label_2aa4e4:
    // 0x2aa4e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2aa4e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aa4e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2aa4e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa4ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2aa4ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aa4f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA4F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA4F0u;
            // 0x2aa4f4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AA4F8u;
}
