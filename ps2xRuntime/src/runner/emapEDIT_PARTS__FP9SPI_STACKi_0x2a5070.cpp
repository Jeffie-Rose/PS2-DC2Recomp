#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: emapEDIT_PARTS__FP9SPI_STACKi
// Address: 0x2a5070 - 0x2a5120
void emapEDIT_PARTS__FP9SPI_STACKi_0x2a5070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("emapEDIT_PARTS__FP9SPI_STACKi_0x2a5070");
#endif

    switch (ctx->pc) {
        case 0x2a5098u: goto label_2a5098;
        case 0x2a50b8u: goto label_2a50b8;
        case 0x2a50c4u: goto label_2a50c4;
        case 0x2a50e4u: goto label_2a50e4;
        case 0x2a50fcu: goto label_2a50fc;
        default: break;
    }

    ctx->pc = 0x2a5070u;

    // 0x2a5070: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a5070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a5074: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a5074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a5078: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a5078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a507c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a507cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a5080: 0x8f859a5c  lw          $a1, -0x65A4($gp)
    ctx->pc = 0x2a5080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941276)));
    // 0x2a5084: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a5084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5088: 0x8f849a54  lw          $a0, -0x65AC($gp)
    ctx->pc = 0x2a5088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941268)));
    // 0x2a508c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2a508cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2a5090: 0xc0a9380  jal         func_2A4E00
    ctx->pc = 0x2A5090u;
    SET_GPR_U32(ctx, 31, 0x2A5098u);
    ctx->pc = 0x2A5094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5090u;
            // 0x2a5094: 0xaf829a5c  sw          $v0, -0x65A4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A4E00u;
    if (runtime->hasFunction(0x2A4E00u)) {
        auto targetFn = runtime->lookupFunction(0x2A4E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5098u; }
        if (ctx->pc != 0x2A5098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePartsInfo__13CEditInfoMngrFi_0x2a4e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5098u; }
        if (ctx->pc != 0x2A5098u) { return; }
    }
    ctx->pc = 0x2A5098u;
label_2a5098:
    // 0x2a5098: 0xaf829a64  sw          $v0, -0x659C($gp)
    ctx->pc = 0x2a5098u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941284), GPR_U32(ctx, 2));
    // 0x2a509c: 0x8f829a64  lw          $v0, -0x659C($gp)
    ctx->pc = 0x2a509cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941284)));
    // 0x2a50a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A50A0u;
    {
        const bool branch_taken_0x2a50a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A50A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A50A0u;
            // 0x2a50a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a50a0) {
            ctx->pc = 0x2A50B0u;
            goto label_2a50b0;
        }
    }
    ctx->pc = 0x2A50A8u;
    // 0x2a50a8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2A50A8u;
    {
        const bool branch_taken_0x2a50a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A50ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A50A8u;
            // 0x2a50ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a50a8) {
            ctx->pc = 0x2A510Cu;
            goto label_2a510c;
        }
    }
    ctx->pc = 0x2A50B0u;
label_2a50b0:
    // 0x2a50b0: 0xc05191c  jal         func_146470
    ctx->pc = 0x2A50B0u;
    SET_GPR_U32(ctx, 31, 0x2A50B8u);
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A50B8u; }
        if (ctx->pc != 0x2A50B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A50B8u; }
        if (ctx->pc != 0x2A50B8u) { return; }
    }
    ctx->pc = 0x2A50B8u;
label_2a50b8:
    // 0x2a50b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a50b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a50bc: 0xc04a422  jal         func_129088
    ctx->pc = 0x2A50BCu;
    SET_GPR_U32(ctx, 31, 0x2A50C4u);
    ctx->pc = 0x2A50C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A50BCu;
            // 0x2a50c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A50C4u; }
        if (ctx->pc != 0x2A50C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A50C4u; }
        if (ctx->pc != 0x2A50C4u) { return; }
    }
    ctx->pc = 0x2A50C4u;
label_2a50c4:
    // 0x2a50c4: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x2a50c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a50c8: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x2a50c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2a50cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A50CCu;
    {
        const bool branch_taken_0x2a50cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A50D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A50CCu;
            // 0x2a50d0: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a50cc) {
            ctx->pc = 0x2A50DCu;
            goto label_2a50dc;
        }
    }
    ctx->pc = 0x2A50D4u;
    // 0x2a50d4: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2a50d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2a50d8: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2a50d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a50dc:
    // 0x2a50dc: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2A50DCu;
    SET_GPR_U32(ctx, 31, 0x2A50E4u);
    ctx->pc = 0x2A50E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A50DCu;
            // 0x2a50e0: 0x8f849a58  lw          $a0, -0x65A8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941272)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A50E4u; }
        if (ctx->pc != 0x2A50E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A50E4u; }
        if (ctx->pc != 0x2A50E4u) { return; }
    }
    ctx->pc = 0x2A50E4u;
label_2a50e4:
    // 0x2a50e4: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A50E4u;
    {
        const bool branch_taken_0x2a50e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A50E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A50E4u;
            // 0x2a50e8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a50e4) {
            ctx->pc = 0x2A5104u;
            goto label_2a5104;
        }
    }
    ctx->pc = 0x2A50ECu;
    // 0x2a50ec: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A50ECu;
    {
        const bool branch_taken_0x2a50ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A50F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A50ECu;
            // 0x2a50f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a50ec) {
            ctx->pc = 0x2A5104u;
            goto label_2a5104;
        }
    }
    ctx->pc = 0x2A50F4u;
    // 0x2a50f4: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2A50F4u;
    SET_GPR_U32(ctx, 31, 0x2A50FCu);
    ctx->pc = 0x2A50F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A50F4u;
            // 0x2a50f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A50FCu; }
        if (ctx->pc != 0x2A50FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A50FCu; }
        if (ctx->pc != 0x2A50FCu) { return; }
    }
    ctx->pc = 0x2A50FCu;
label_2a50fc:
    // 0x2a50fc: 0x8f829a64  lw          $v0, -0x659C($gp)
    ctx->pc = 0x2a50fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941284)));
    // 0x2a5100: 0xac51003c  sw          $s1, 0x3C($v0)
    ctx->pc = 0x2a5100u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 17));
label_2a5104:
    // 0x2a5104: 0xaf809a60  sw          $zero, -0x65A0($gp)
    ctx->pc = 0x2a5104u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941280), GPR_U32(ctx, 0));
    // 0x2a5108: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a5108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a510c:
    // 0x2a510c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a510cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a5110: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a5110u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a5114: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a5114u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a5118: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5118u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A511Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5118u;
            // 0x2a511c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A5120u;
}
