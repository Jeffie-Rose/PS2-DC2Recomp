#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ClearPos__14CPosDataManageFv
// Address: 0x22b490 - 0x22b4dc
void ClearPos__14CPosDataManageFv_0x22b490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearPos__14CPosDataManageFv_0x22b490");
#endif

    switch (ctx->pc) {
        case 0x22b4acu: goto label_22b4ac;
        case 0x22b4bcu: goto label_22b4bc;
        case 0x22b4ccu: goto label_22b4cc;
        default: break;
    }

    ctx->pc = 0x22b490u;

    // 0x22b490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22b490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22b494: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22b494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b498: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22b498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22b49c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22b49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22b4a0: 0x94860004  lhu         $a2, 0x4($a0)
    ctx->pc = 0x22b4a0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x22b4a4: 0xc08aab0  jal         func_22AAC0
    ctx->pc = 0x22B4A4u;
    SET_GPR_U32(ctx, 31, 0x22B4ACu);
    ctx->pc = 0x22B4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B4A4u;
            // 0x22b4a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AAC0u;
    if (runtime->hasFunction(0x22AAC0u)) {
        auto targetFn = runtime->lookupFunction(0x22AAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B4ACu; }
        if (ctx->pc != 0x22B4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EtcTblClear__14CPosDataManageFii_0x22aac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B4ACu; }
        if (ctx->pc != 0x22B4ACu) { return; }
    }
    ctx->pc = 0x22B4ACu;
label_22b4ac:
    // 0x22b4ac: 0x96060014  lhu         $a2, 0x14($s0)
    ctx->pc = 0x22b4acu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x22b4b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22b4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b4b4: 0xc08aa38  jal         func_22A8E0
    ctx->pc = 0x22B4B4u;
    SET_GPR_U32(ctx, 31, 0x22B4BCu);
    ctx->pc = 0x22B4B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B4B4u;
            // 0x22b4b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A8E0u;
    if (runtime->hasFunction(0x22A8E0u)) {
        auto targetFn = runtime->lookupFunction(0x22A8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B4BCu; }
        if (ctx->pc != 0x22B4BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TexGetInfoClear__14CPosDataManageFii_0x22a8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B4BCu; }
        if (ctx->pc != 0x22B4BCu) { return; }
    }
    ctx->pc = 0x22B4BCu;
label_22b4bc:
    // 0x22b4bc: 0x9606001c  lhu         $a2, 0x1C($s0)
    ctx->pc = 0x22b4bcu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x22b4c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22b4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b4c4: 0xc08abcc  jal         func_22AF30
    ctx->pc = 0x22B4C4u;
    SET_GPR_U32(ctx, 31, 0x22B4CCu);
    ctx->pc = 0x22B4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B4C4u;
            // 0x22b4c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AF30u;
    if (runtime->hasFunction(0x22AF30u)) {
        auto targetFn = runtime->lookupFunction(0x22AF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B4CCu; }
        if (ctx->pc != 0x22B4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FormInfoClear__14CPosDataManageFii_0x22af30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B4CCu; }
        if (ctx->pc != 0x22B4CCu) { return; }
    }
    ctx->pc = 0x22B4CCu;
label_22b4cc:
    // 0x22b4cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22b4ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b4d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22b4d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b4d4: 0x3e00008  jr          $ra
    ctx->pc = 0x22B4D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B4D4u;
            // 0x22b4d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22B4DCu;
}
