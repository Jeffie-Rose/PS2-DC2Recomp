#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SE_START__FP9SPI_STACKi
// Address: 0x177160 - 0x177240
void ps2__SE_START__FP9SPI_STACKi_0x177160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SE_START__FP9SPI_STACKi_0x177160");
#endif

    switch (ctx->pc) {
        case 0x177198u: goto label_177198;
        case 0x1771e4u: goto label_1771e4;
        case 0x177204u: goto label_177204;
        default: break;
    }

    ctx->pc = 0x177160u;

    // 0x177160: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x177160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x177164: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x177164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177168: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x177168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17716c: 0x8f8389b4  lw          $v1, -0x764C($gp)
    ctx->pc = 0x17716cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937012)));
    // 0x177170: 0x8f8689a8  lw          $a2, -0x7658($gp)
    ctx->pc = 0x177170u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x177174: 0xaf8089fc  sw          $zero, -0x7604($gp)
    ctx->pc = 0x177174u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937084), GPR_U32(ctx, 0));
    // 0x177178: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x177178u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17717c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x17717cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x177180: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x177180u;
    {
        const bool branch_taken_0x177180 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x177184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177180u;
            // 0x177184: 0xac6005c4  sw          $zero, 0x5C4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1476), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177180) {
            ctx->pc = 0x177190u;
            goto label_177190;
        }
    }
    ctx->pc = 0x177188u;
    // 0x177188: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x177188u;
    {
        const bool branch_taken_0x177188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17718Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177188u;
            // 0x17718c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177188) {
            ctx->pc = 0x177234u;
            goto label_177234;
        }
    }
    ctx->pc = 0x177190u;
label_177190:
    // 0x177190: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x177190u;
    SET_GPR_U32(ctx, 31, 0x177198u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177198u; }
        if (ctx->pc != 0x177198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177198u; }
        if (ctx->pc != 0x177198u) { return; }
    }
    ctx->pc = 0x177198u;
label_177198:
    // 0x177198: 0x8f8389b4  lw          $v1, -0x764C($gp)
    ctx->pc = 0x177198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937012)));
    // 0x17719c: 0x8f8489a8  lw          $a0, -0x7658($gp)
    ctx->pc = 0x17719cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x1771a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1771a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1771a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1771a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1771a8: 0xac6205c4  sw          $v0, 0x5C4($v1)
    ctx->pc = 0x1771a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1476), GPR_U32(ctx, 2));
    // 0x1771ac: 0x8f8289b4  lw          $v0, -0x764C($gp)
    ctx->pc = 0x1771acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937012)));
    // 0x1771b0: 0x8f8389a8  lw          $v1, -0x7658($gp)
    ctx->pc = 0x1771b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x1771b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1771b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1771b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1771b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1771bc: 0x8c4205c4  lw          $v0, 0x5C4($v0)
    ctx->pc = 0x1771bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1476)));
    // 0x1771c0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1771c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1771c4: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x1771c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1771c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1771C8u;
    {
        const bool branch_taken_0x1771c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1771CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1771C8u;
            // 0x1771cc: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1771c8) {
            ctx->pc = 0x1771D8u;
            goto label_1771d8;
        }
    }
    ctx->pc = 0x1771D0u;
    // 0x1771d0: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x1771d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1771d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1771d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1771d8:
    // 0x1771d8: 0x8f8489e8  lw          $a0, -0x7618($gp)
    ctx->pc = 0x1771d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937064)));
    // 0x1771dc: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1771DCu;
    SET_GPR_U32(ctx, 31, 0x1771E4u);
    ctx->pc = 0x1771E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1771DCu;
            // 0x1771e0: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1771E4u; }
        if (ctx->pc != 0x1771E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1771E4u; }
        if (ctx->pc != 0x1771E4u) { return; }
    }
    ctx->pc = 0x1771E4u;
label_1771e4:
    // 0x1771e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1771e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1771e8: 0x8f8389a8  lw          $v1, -0x7658($gp)
    ctx->pc = 0x1771e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x1771ec: 0x8f8289b4  lw          $v0, -0x764C($gp)
    ctx->pc = 0x1771ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937012)));
    // 0x1771f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1771f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1771f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1771f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1771f8: 0x8c4205c4  lw          $v0, 0x5C4($v0)
    ctx->pc = 0x1771f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1476)));
    // 0x1771fc: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x1771FCu;
    SET_GPR_U32(ctx, 31, 0x177204u);
    ctx->pc = 0x177200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1771FCu;
            // 0x177200: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177204u; }
        if (ctx->pc != 0x177204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177204u; }
        if (ctx->pc != 0x177204u) { return; }
    }
    ctx->pc = 0x177204u;
label_177204:
    // 0x177204: 0x8f8389b4  lw          $v1, -0x764C($gp)
    ctx->pc = 0x177204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937012)));
    // 0x177208: 0x8f8489a8  lw          $a0, -0x7658($gp)
    ctx->pc = 0x177208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x17720c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17720cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x177210: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x177210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x177214: 0xac6205a4  sw          $v0, 0x5A4($v1)
    ctx->pc = 0x177214u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1444), GPR_U32(ctx, 2));
    // 0x177218: 0x8f8389b4  lw          $v1, -0x764C($gp)
    ctx->pc = 0x177218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937012)));
    // 0x17721c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17721cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177220: 0x8f8489a8  lw          $a0, -0x7658($gp)
    ctx->pc = 0x177220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x177224: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x177224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x177228: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x177228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17722c: 0x8c6305a4  lw          $v1, 0x5A4($v1)
    ctx->pc = 0x17722cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1444)));
    // 0x177230: 0xaf8389fc  sw          $v1, -0x7604($gp)
    ctx->pc = 0x177230u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937084), GPR_U32(ctx, 3));
label_177234:
    // 0x177234: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x177234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177238: 0x3e00008  jr          $ra
    ctx->pc = 0x177238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17723Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177238u;
            // 0x17723c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x177240u;
}
