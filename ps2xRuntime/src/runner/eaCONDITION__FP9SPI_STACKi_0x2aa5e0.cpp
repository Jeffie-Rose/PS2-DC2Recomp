#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: eaCONDITION__FP9SPI_STACKi
// Address: 0x2aa5e0 - 0x2aa694
void eaCONDITION__FP9SPI_STACKi_0x2aa5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eaCONDITION__FP9SPI_STACKi_0x2aa5e0");
#endif

    switch (ctx->pc) {
        case 0x2aa610u: goto label_2aa610;
        case 0x2aa63cu: goto label_2aa63c;
        case 0x2aa648u: goto label_2aa648;
        case 0x2aa668u: goto label_2aa668;
        default: break;
    }

    ctx->pc = 0x2aa5e0u;

    // 0x2aa5e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2aa5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2aa5e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2aa5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2aa5e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2aa5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2aa5ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2aa5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2aa5f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2aa5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2aa5f4: 0x8f829a84  lw          $v0, -0x657C($gp)
    ctx->pc = 0x2aa5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941316)));
    // 0x2aa5f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA5F8u;
    {
        const bool branch_taken_0x2aa5f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA5F8u;
            // 0x2aa5fc: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa5f8) {
            ctx->pc = 0x2AA608u;
            goto label_2aa608;
        }
    }
    ctx->pc = 0x2AA600u;
    // 0x2aa600: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2AA600u;
    {
        const bool branch_taken_0x2aa600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA600u;
            // 0x2aa604: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa600) {
            ctx->pc = 0x2AA67Cu;
            goto label_2aa67c;
        }
    }
    ctx->pc = 0x2AA608u;
label_2aa608:
    // 0x2aa608: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2AA608u;
    SET_GPR_U32(ctx, 31, 0x2AA610u);
    ctx->pc = 0x2AA60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA608u;
            // 0x2aa60c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA610u; }
        if (ctx->pc != 0x2AA610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA610u; }
        if (ctx->pc != 0x2AA610u) { return; }
    }
    ctx->pc = 0x2AA610u;
label_2aa610:
    // 0x2aa610: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2aa610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa614: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AA614u;
    {
        const bool branch_taken_0x2aa614 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2AA618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA614u;
            // 0x2aa618: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa614) {
            ctx->pc = 0x2AA62Cu;
            goto label_2aa62c;
        }
    }
    ctx->pc = 0x2AA61Cu;
    // 0x2aa61c: 0x2a020040  slti        $v0, $s0, 0x40
    ctx->pc = 0x2aa61cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2aa620: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AA620u;
    {
        const bool branch_taken_0x2aa620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA620u;
            // 0x2aa624: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa620) {
            ctx->pc = 0x2AA634u;
            goto label_2aa634;
        }
    }
    ctx->pc = 0x2AA628u;
    // 0x2aa628: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2aa628u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aa62c:
    // 0x2aa62c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2AA62Cu;
    {
        const bool branch_taken_0x2aa62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA62Cu;
            // 0x2aa630: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa62c) {
            ctx->pc = 0x2AA680u;
            goto label_2aa680;
        }
    }
    ctx->pc = 0x2AA634u;
label_2aa634:
    // 0x2aa634: 0xc05191c  jal         func_146470
    ctx->pc = 0x2AA634u;
    SET_GPR_U32(ctx, 31, 0x2AA63Cu);
    ctx->pc = 0x2AA638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA634u;
            // 0x2aa638: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA63Cu; }
        if (ctx->pc != 0x2AA63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA63Cu; }
        if (ctx->pc != 0x2AA63Cu) { return; }
    }
    ctx->pc = 0x2AA63Cu;
label_2aa63c:
    // 0x2aa63c: 0x8f859a8c  lw          $a1, -0x6574($gp)
    ctx->pc = 0x2aa63cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941324)));
    // 0x2aa640: 0xc04e7a0  jal         func_139E80
    ctx->pc = 0x2AA640u;
    SET_GPR_U32(ctx, 31, 0x2AA648u);
    ctx->pc = 0x2AA644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA640u;
            // 0x2aa644: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E80u;
    if (runtime->hasFunction(0x139E80u)) {
        auto targetFn = runtime->lookupFunction(0x139E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA648u; }
        if (ctx->pc != 0x2AA648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCopyString__FPcP9mgCMemory_0x139e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA648u; }
        if (ctx->pc != 0x2AA648u) { return; }
    }
    ctx->pc = 0x2AA648u;
label_2aa648:
    // 0x2aa648: 0x8f849a84  lw          $a0, -0x657C($gp)
    ctx->pc = 0x2aa648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941316)));
    // 0x2aa64c: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x2aa64cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2aa650: 0x2a430003  slti        $v1, $s2, 0x3
    ctx->pc = 0x2aa650u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2aa654: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2aa654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2aa658: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AA658u;
    {
        const bool branch_taken_0x2aa658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA658u;
            // 0x2aa65c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa658) {
            ctx->pc = 0x2AA678u;
            goto label_2aa678;
        }
    }
    ctx->pc = 0x2AA660u;
    // 0x2aa660: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2AA660u;
    SET_GPR_U32(ctx, 31, 0x2AA668u);
    ctx->pc = 0x2AA664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA660u;
            // 0x2aa664: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA668u; }
        if (ctx->pc != 0x2AA668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA668u; }
        if (ctx->pc != 0x2AA668u) { return; }
    }
    ctx->pc = 0x2AA668u;
label_2aa668:
    // 0x2aa668: 0x8f849a84  lw          $a0, -0x657C($gp)
    ctx->pc = 0x2aa668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941316)));
    // 0x2aa66c: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2aa66cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2aa670: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2aa670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2aa674: 0xa4620100  sh          $v0, 0x100($v1)
    ctx->pc = 0x2aa674u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 256), (uint16_t)GPR_U32(ctx, 2));
label_2aa678:
    // 0x2aa678: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aa678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2aa67c:
    // 0x2aa67c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2aa67cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2aa680:
    // 0x2aa680: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2aa680u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aa684: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2aa684u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa688: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2aa688u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aa68c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA68Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA68Cu;
            // 0x2aa690: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AA694u;
}
