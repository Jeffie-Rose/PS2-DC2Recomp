#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapPLIGHT__FP9SPI_STACKi
// Address: 0x1655d0 - 0x1656a0
void mapPLIGHT__FP9SPI_STACKi_0x1655d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapPLIGHT__FP9SPI_STACKi_0x1655d0");
#endif

    switch (ctx->pc) {
        case 0x1655fcu: goto label_1655fc;
        case 0x165624u: goto label_165624;
        case 0x165650u: goto label_165650;
        case 0x165674u: goto label_165674;
        default: break;
    }

    ctx->pc = 0x1655d0u;

    // 0x1655d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1655d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1655d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1655d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1655d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1655d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1655dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1655dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1655e0: 0x8f82896c  lw          $v0, -0x7694($gp)
    ctx->pc = 0x1655e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x1655e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1655E4u;
    {
        const bool branch_taken_0x1655e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1655E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1655E4u;
            // 0x1655e8: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1655e4) {
            ctx->pc = 0x1655F4u;
            goto label_1655f4;
        }
    }
    ctx->pc = 0x1655ECu;
    // 0x1655ec: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1655ECu;
    {
        const bool branch_taken_0x1655ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1655F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1655ECu;
            // 0x1655f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1655ec) {
            ctx->pc = 0x16568Cu;
            goto label_16568c;
        }
    }
    ctx->pc = 0x1655F4u;
label_1655f4:
    // 0x1655f4: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1655F4u;
    SET_GPR_U32(ctx, 31, 0x1655FCu);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1655FCu; }
        if (ctx->pc != 0x1655FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1655FCu; }
        if (ctx->pc != 0x1655FCu) { return; }
    }
    ctx->pc = 0x1655FCu;
label_1655fc:
    // 0x1655fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1655fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165600: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x165600u;
    {
        const bool branch_taken_0x165600 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x165604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165600u;
            // 0x165604: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165600) {
            ctx->pc = 0x165614u;
            goto label_165614;
        }
    }
    ctx->pc = 0x165608u;
    // 0x165608: 0x2a010004  slti        $at, $s0, 0x4
    ctx->pc = 0x165608u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x16560c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x16560Cu;
    {
        const bool branch_taken_0x16560c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x165610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16560Cu;
            // 0x165610: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16560c) {
            ctx->pc = 0x16561Cu;
            goto label_16561c;
        }
    }
    ctx->pc = 0x165614u;
label_165614:
    // 0x165614: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x165614u;
    {
        const bool branch_taken_0x165614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165614u;
            // 0x165618: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165614) {
            ctx->pc = 0x165690u;
            goto label_165690;
        }
    }
    ctx->pc = 0x16561Cu;
label_16561c:
    // 0x16561c: 0xc05190c  jal         func_146430
    ctx->pc = 0x16561Cu;
    SET_GPR_U32(ctx, 31, 0x165624u);
    ctx->pc = 0x165620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16561Cu;
            // 0x165620: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165624u; }
        if (ctx->pc != 0x165624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165624u; }
        if (ctx->pc != 0x165624u) { return; }
    }
    ctx->pc = 0x165624u;
label_165624:
    // 0x165624: 0x8f83896c  lw          $v1, -0x7694($gp)
    ctx->pc = 0x165624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x165628: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x165628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x16562c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x16562cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x165630: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x165630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165634: 0x28100  sll         $s0, $v0, 4
    ctx->pc = 0x165634u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x165638: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x165638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x16563c: 0xe44000e0  swc1        $f0, 0xE0($v0)
    ctx->pc = 0x16563cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 224), bits); }
    // 0x165640: 0x8f82896c  lw          $v0, -0x7694($gp)
    ctx->pc = 0x165640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x165644: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x165644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x165648: 0xc051928  jal         func_1464A0
    ctx->pc = 0x165648u;
    SET_GPR_U32(ctx, 31, 0x165650u);
    ctx->pc = 0x16564Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165648u;
            // 0x16564c: 0x244400c0  addiu       $a0, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165650u; }
        if (ctx->pc != 0x165650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165650u; }
        if (ctx->pc != 0x165650u) { return; }
    }
    ctx->pc = 0x165650u;
label_165650:
    // 0x165650: 0x8f82896c  lw          $v0, -0x7694($gp)
    ctx->pc = 0x165650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x165654: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x165654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x165658: 0x26250018  addiu       $a1, $s1, 0x18
    ctx->pc = 0x165658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x16565c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x16565cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x165660: 0xac4300cc  sw          $v1, 0xCC($v0)
    ctx->pc = 0x165660u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 204), GPR_U32(ctx, 3));
    // 0x165664: 0x8f82896c  lw          $v0, -0x7694($gp)
    ctx->pc = 0x165664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x165668: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x165668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x16566c: 0xc051928  jal         func_1464A0
    ctx->pc = 0x16566Cu;
    SET_GPR_U32(ctx, 31, 0x165674u);
    ctx->pc = 0x165670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16566Cu;
            // 0x165670: 0x244400d0  addiu       $a0, $v0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165674u; }
        if (ctx->pc != 0x165674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165674u; }
        if (ctx->pc != 0x165674u) { return; }
    }
    ctx->pc = 0x165674u;
label_165674:
    // 0x165674: 0x8f83896c  lw          $v1, -0x7694($gp)
    ctx->pc = 0x165674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x165678: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x165678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16567c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x16567cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x165680: 0xac6000dc  sw          $zero, 0xDC($v1)
    ctx->pc = 0x165680u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 220), GPR_U32(ctx, 0));
    // 0x165684: 0x8f83896c  lw          $v1, -0x7694($gp)
    ctx->pc = 0x165684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x165688: 0xac6200b0  sw          $v0, 0xB0($v1)
    ctx->pc = 0x165688u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 2));
label_16568c:
    // 0x16568c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16568cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_165690:
    // 0x165690: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x165690u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165694: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x165694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165698: 0x3e00008  jr          $ra
    ctx->pc = 0x165698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16569Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165698u;
            // 0x16569c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1656A0u;
}
