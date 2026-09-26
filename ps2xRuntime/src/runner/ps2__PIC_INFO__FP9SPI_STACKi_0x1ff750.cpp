#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _PIC_INFO__FP9SPI_STACKi
// Address: 0x1ff750 - 0x1ff7b4
void ps2__PIC_INFO__FP9SPI_STACKi_0x1ff750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__PIC_INFO__FP9SPI_STACKi_0x1ff750");
#endif

    switch (ctx->pc) {
        case 0x1ff760u: goto label_1ff760;
        case 0x1ff78cu: goto label_1ff78c;
        case 0x1ff79cu: goto label_1ff79c;
        default: break;
    }

    ctx->pc = 0x1ff750u;

    // 0x1ff750: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ff750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ff754: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ff754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ff758: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1FF758u;
    SET_GPR_U32(ctx, 31, 0x1FF760u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF760u; }
        if (ctx->pc != 0x1FF760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF760u; }
        if (ctx->pc != 0x1FF760u) { return; }
    }
    ctx->pc = 0x1FF760u;
label_1ff760:
    // 0x1ff760: 0xa78290f4  sh          $v0, -0x6F0C($gp)
    ctx->pc = 0x1ff760u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938868), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ff764: 0x878290f4  lh          $v0, -0x6F0C($gp)
    ctx->pc = 0x1ff764u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938868)));
    // 0x1ff768: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1ff768u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1ff76c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x1ff76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1ff770: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF770u;
    {
        const bool branch_taken_0x1ff770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF770u;
            // 0x1ff774: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff770) {
            ctx->pc = 0x1FF780u;
            goto label_1ff780;
        }
    }
    ctx->pc = 0x1FF778u;
    // 0x1ff778: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x1ff778u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1ff77c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ff77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ff780:
    // 0x1ff780: 0x8f8490ec  lw          $a0, -0x6F14($gp)
    ctx->pc = 0x1ff780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938860)));
    // 0x1ff784: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1FF784u;
    SET_GPR_U32(ctx, 31, 0x1FF78Cu);
    ctx->pc = 0x1FF788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF784u;
            // 0x1ff788: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF78Cu; }
        if (ctx->pc != 0x1FF78Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF78Cu; }
        if (ctx->pc != 0x1FF78Cu) { return; }
    }
    ctx->pc = 0x1FF78Cu;
label_1ff78c:
    // 0x1ff78c: 0x878390f4  lh          $v1, -0x6F0C($gp)
    ctx->pc = 0x1ff78cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938868)));
    // 0x1ff790: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ff790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff794: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x1FF794u;
    SET_GPR_U32(ctx, 31, 0x1FF79Cu);
    ctx->pc = 0x1FF798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF794u;
            // 0x1ff798: 0x320c0  sll         $a0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF79Cu; }
        if (ctx->pc != 0x1FF79Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF79Cu; }
        if (ctx->pc != 0x1FF79Cu) { return; }
    }
    ctx->pc = 0x1FF79Cu;
label_1ff79c:
    // 0x1ff79c: 0xaf8290f0  sw          $v0, -0x6F10($gp)
    ctx->pc = 0x1ff79cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938864), GPR_U32(ctx, 2));
    // 0x1ff7a0: 0xa78090f8  sh          $zero, -0x6F08($gp)
    ctx->pc = 0x1ff7a0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938872), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ff7a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ff7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff7a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ff7a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff7ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF7ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF7ACu;
            // 0x1ff7b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FF7B4u;
}
