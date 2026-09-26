#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ROOM_SIZE__FP9SPI_STACKi
// Address: 0x1d5780 - 0x1d5834
void ps2__ROOM_SIZE__FP9SPI_STACKi_0x1d5780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ROOM_SIZE__FP9SPI_STACKi_0x1d5780");
#endif

    switch (ctx->pc) {
        case 0x1d57a8u: goto label_1d57a8;
        case 0x1d57b4u: goto label_1d57b4;
        case 0x1d57f0u: goto label_1d57f0;
        case 0x1d57fcu: goto label_1d57fc;
        default: break;
    }

    ctx->pc = 0x1d5780u;

    // 0x1d5780: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d5780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d5784: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d5784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d5788: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d5788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d578c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d578cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d5790: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5790u;
    {
        const bool branch_taken_0x1d5790 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5790u;
            // 0x1d5794: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5790) {
            ctx->pc = 0x1D57A0u;
            goto label_1d57a0;
        }
    }
    ctx->pc = 0x1D5798u;
    // 0x1d5798: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1D5798u;
    {
        const bool branch_taken_0x1d5798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D579Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5798u;
            // 0x1d579c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5798) {
            ctx->pc = 0x1D5820u;
            goto label_1d5820;
        }
    }
    ctx->pc = 0x1D57A0u;
label_1d57a0:
    // 0x1d57a0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1D57A0u;
    SET_GPR_U32(ctx, 31, 0x1D57A8u);
    ctx->pc = 0x1D57A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D57A0u;
            // 0x1d57a4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D57A8u; }
        if (ctx->pc != 0x1D57A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D57A8u; }
        if (ctx->pc != 0x1D57A8u) { return; }
    }
    ctx->pc = 0x1D57A8u;
label_1d57a8:
    // 0x1d57a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d57a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d57ac: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1D57ACu;
    SET_GPR_U32(ctx, 31, 0x1D57B4u);
    ctx->pc = 0x1D57B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D57ACu;
            // 0x1d57b0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D57B4u; }
        if (ctx->pc != 0x1D57B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D57B4u; }
        if (ctx->pc != 0x1D57B4u) { return; }
    }
    ctx->pc = 0x1D57B4u;
label_1d57b4:
    // 0x1d57b4: 0x8f848e50  lw          $a0, -0x71B0($gp)
    ctx->pc = 0x1d57b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938192)));
    // 0x1d57b8: 0x2221818  mult        $v1, $s1, $v0
    ctx->pc = 0x1d57b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d57bc: 0x38080  sll         $s0, $v1, 2
    ctx->pc = 0x1d57bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d57c0: 0x3203000f  andi        $v1, $s0, 0xF
    ctx->pc = 0x1d57c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x1d57c4: 0xac910004  sw          $s1, 0x4($a0)
    ctx->pc = 0x1d57c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 17));
    // 0x1d57c8: 0x8f848e50  lw          $a0, -0x71B0($gp)
    ctx->pc = 0x1d57c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938192)));
    // 0x1d57cc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D57CCu;
    {
        const bool branch_taken_0x1d57cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D57D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D57CCu;
            // 0x1d57d0: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d57cc) {
            ctx->pc = 0x1D57E0u;
            goto label_1d57e0;
        }
    }
    ctx->pc = 0x1D57D4u;
    // 0x1d57d4: 0x101102  srl         $v0, $s0, 4
    ctx->pc = 0x1d57d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 4));
    // 0x1d57d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D57D8u;
    {
        const bool branch_taken_0x1d57d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D57DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D57D8u;
            // 0x1d57dc: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d57d8) {
            ctx->pc = 0x1D57E4u;
            goto label_1d57e4;
        }
    }
    ctx->pc = 0x1D57E0u;
label_1d57e0:
    // 0x1d57e0: 0x101102  srl         $v0, $s0, 4
    ctx->pc = 0x1d57e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 4));
label_1d57e4:
    // 0x1d57e4: 0x8f848e4c  lw          $a0, -0x71B4($gp)
    ctx->pc = 0x1d57e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938188)));
    // 0x1d57e8: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1D57E8u;
    SET_GPR_U32(ctx, 31, 0x1D57F0u);
    ctx->pc = 0x1D57ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D57E8u;
            // 0x1d57ec: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D57F0u; }
        if (ctx->pc != 0x1D57F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D57F0u; }
        if (ctx->pc != 0x1D57F0u) { return; }
    }
    ctx->pc = 0x1D57F0u;
label_1d57f0:
    // 0x1d57f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d57f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d57f4: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x1D57F4u;
    SET_GPR_U32(ctx, 31, 0x1D57FCu);
    ctx->pc = 0x1D57F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D57F4u;
            // 0x1d57f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D57FCu; }
        if (ctx->pc != 0x1D57FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D57FCu; }
        if (ctx->pc != 0x1D57FCu) { return; }
    }
    ctx->pc = 0x1D57FCu;
label_1d57fc:
    // 0x1d57fc: 0x8f838e50  lw          $v1, -0x71B0($gp)
    ctx->pc = 0x1d57fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938192)));
    // 0x1d5800: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x1d5800u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x1d5804: 0x8f848e50  lw          $a0, -0x71B0($gp)
    ctx->pc = 0x1d5804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938192)));
    // 0x1d5808: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d5808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d580c: 0x8f838e54  lw          $v1, -0x71AC($gp)
    ctx->pc = 0x1d580cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938196)));
    // 0x1d5810: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x1d5810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1d5814: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d5814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d5818: 0xaf848e58  sw          $a0, -0x71A8($gp)
    ctx->pc = 0x1d5818u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938200), GPR_U32(ctx, 4));
    // 0x1d581c: 0xaf838e54  sw          $v1, -0x71AC($gp)
    ctx->pc = 0x1d581cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938196), GPR_U32(ctx, 3));
label_1d5820:
    // 0x1d5820: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d5820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5824: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d5824u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5828: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d5828u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d582c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D582Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D582Cu;
            // 0x1d5830: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D5834u;
}
