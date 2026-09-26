#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapPIECE_MATERIAL_START__FP9SPI_STACKi
// Address: 0x162690 - 0x16274c
void mapPIECE_MATERIAL_START__FP9SPI_STACKi_0x162690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapPIECE_MATERIAL_START__FP9SPI_STACKi_0x162690");
#endif

    switch (ctx->pc) {
        case 0x1626bcu: goto label_1626bc;
        case 0x1626d8u: goto label_1626d8;
        case 0x1626e4u: goto label_1626e4;
        case 0x1626f4u: goto label_1626f4;
        case 0x162710u: goto label_162710;
        case 0x162724u: goto label_162724;
        case 0x162734u: goto label_162734;
        default: break;
    }

    ctx->pc = 0x162690u;

    // 0x162690: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x162690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x162694: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x162694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x162698: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x162698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16269c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16269cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1626a0: 0x8f82891c  lw          $v0, -0x76E4($gp)
    ctx->pc = 0x1626a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936860)));
    // 0x1626a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1626A4u;
    {
        const bool branch_taken_0x1626a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1626A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1626A4u;
            // 0x1626a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1626a4) {
            ctx->pc = 0x1626B4u;
            goto label_1626b4;
        }
    }
    ctx->pc = 0x1626ACu;
    // 0x1626ac: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1626ACu;
    {
        const bool branch_taken_0x1626ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1626B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1626ACu;
            // 0x1626b0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1626ac) {
            ctx->pc = 0x16273Cu;
            goto label_16273c;
        }
    }
    ctx->pc = 0x1626B4u;
label_1626b4:
    // 0x1626b4: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1626B4u;
    SET_GPR_U32(ctx, 31, 0x1626BCu);
    ctx->pc = 0x1626B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1626B4u;
            // 0x1626b8: 0xaf808944  sw          $zero, -0x76BC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936900), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1626BCu; }
        if (ctx->pc != 0x1626BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1626BCu; }
        if (ctx->pc != 0x1626BCu) { return; }
    }
    ctx->pc = 0x1626BCu;
label_1626bc:
    // 0x1626bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1626bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1626c0: 0x1e200003  bgtz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1626C0u;
    {
        const bool branch_taken_0x1626c0 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x1626C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1626C0u;
            // 0x1626c4: 0x112140  sll         $a0, $s1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1626c0) {
            ctx->pc = 0x1626D0u;
            goto label_1626d0;
        }
    }
    ctx->pc = 0x1626C8u;
    // 0x1626c8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1626C8u;
    {
        const bool branch_taken_0x1626c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1626CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1626C8u;
            // 0x1626cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1626c8) {
            ctx->pc = 0x162738u;
            goto label_162738;
        }
    }
    ctx->pc = 0x1626D0u;
label_1626d0:
    // 0x1626d0: 0xc05878c  jal         func_161E30
    ctx->pc = 0x1626D0u;
    SET_GPR_U32(ctx, 31, 0x1626D8u);
    ctx->pc = 0x161E30u;
    if (runtime->hasFunction(0x161E30u)) {
        auto targetFn = runtime->lookupFunction(0x161E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1626D8u; }
        if (ctx->pc != 0x1626D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        algn16_size__FUi_0x161e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1626D8u; }
        if (ctx->pc != 0x1626D8u) { return; }
    }
    ctx->pc = 0x1626D8u;
label_1626d8:
    // 0x1626d8: 0x8f848920  lw          $a0, -0x76E0($gp)
    ctx->pc = 0x1626d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936864)));
    // 0x1626dc: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1626DCu;
    SET_GPR_U32(ctx, 31, 0x1626E4u);
    ctx->pc = 0x1626E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1626DCu;
            // 0x1626e0: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1626E4u; }
        if (ctx->pc != 0x1626E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1626E4u; }
        if (ctx->pc != 0x1626E4u) { return; }
    }
    ctx->pc = 0x1626E4u;
label_1626e4:
    // 0x1626e4: 0x111940  sll         $v1, $s1, 5
    ctx->pc = 0x1626e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x1626e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1626e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1626ec: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x1626ECu;
    SET_GPR_U32(ctx, 31, 0x1626F4u);
    ctx->pc = 0x1626F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1626ECu;
            // 0x1626f0: 0x24640010  addiu       $a0, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1626F4u; }
        if (ctx->pc != 0x1626F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1626F4u; }
        if (ctx->pc != 0x1626F4u) { return; }
    }
    ctx->pc = 0x1626F4u;
label_1626f4:
    // 0x1626f4: 0x3c050016  lui         $a1, 0x16
    ctx->pc = 0x1626f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22 << 16));
    // 0x1626f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1626f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1626fc: 0x24a52760  addiu       $a1, $a1, 0x2760
    ctx->pc = 0x1626fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10080));
    // 0x162700: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x162700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162704: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x162704u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x162708: 0xc0400bc  jal         func_1002F0
    ctx->pc = 0x162708u;
    SET_GPR_U32(ctx, 31, 0x162710u);
    ctx->pc = 0x16270Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162708u;
            // 0x16270c: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002F0u;
    if (runtime->hasFunction(0x1002F0u)) {
        auto targetFn = runtime->lookupFunction(0x1002F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162710u; }
        if (ctx->pc != 0x162710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1002f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162710u; }
        if (ctx->pc != 0x162710u) { return; }
    }
    ctx->pc = 0x162710u;
label_162710:
    // 0x162710: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x162710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162714: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x162714u;
    {
        const bool branch_taken_0x162714 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x162718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162714u;
            // 0x162718: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162714) {
            ctx->pc = 0x162738u;
            goto label_162738;
        }
    }
    ctx->pc = 0x16271Cu;
    // 0x16271c: 0xc0588d8  jal         func_162360
    ctx->pc = 0x16271Cu;
    SET_GPR_U32(ctx, 31, 0x162724u);
    ctx->pc = 0x162720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16271Cu;
            // 0x162720: 0x8f84891c  lw          $a0, -0x76E4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936860)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x162360u;
    if (runtime->hasFunction(0x162360u)) {
        auto targetFn = runtime->lookupFunction(0x162360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162724u; }
        if (ctx->pc != 0x162724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pGetData__17CList_9CMapPiece_Fv_0x162360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162724u; }
        if (ctx->pc != 0x162724u) { return; }
    }
    ctx->pc = 0x162724u;
label_162724:
    // 0x162724: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x162724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162728: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x162728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16272c: 0xc0589d4  jal         func_162750
    ctx->pc = 0x16272Cu;
    SET_GPR_U32(ctx, 31, 0x162734u);
    ctx->pc = 0x162730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16272Cu;
            // 0x162730: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x162750u;
    if (runtime->hasFunction(0x162750u)) {
        auto targetFn = runtime->lookupFunction(0x162750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162734u; }
        if (ctx->pc != 0x162734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMaterial__9CMapPieceFP13PieceMateriali_0x162750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162734u; }
        if (ctx->pc != 0x162734u) { return; }
    }
    ctx->pc = 0x162734u;
label_162734:
    // 0x162734: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_162738:
    // 0x162738: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x162738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16273c:
    // 0x16273c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16273cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162740: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x162740u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162744: 0x3e00008  jr          $ra
    ctx->pc = 0x162744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162744u;
            // 0x162748: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16274Cu;
}
