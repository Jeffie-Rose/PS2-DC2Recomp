#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: giPROG_INFO__FP9SPI_STACKi
// Address: 0x31a470 - 0x31a53c
void giPROG_INFO__FP9SPI_STACKi_0x31a470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("giPROG_INFO__FP9SPI_STACKi_0x31a470");
#endif

    switch (ctx->pc) {
        case 0x31a488u: goto label_31a488;
        case 0x31a4b4u: goto label_31a4b4;
        case 0x31a4d8u: goto label_31a4d8;
        case 0x31a4f0u: goto label_31a4f0;
        case 0x31a504u: goto label_31a504;
        case 0x31a518u: goto label_31a518;
        default: break;
    }

    ctx->pc = 0x31a470u;

    // 0x31a470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31a470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31a474: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x31a474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x31a478: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31a478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31a47c: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x31a47cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x31a480: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x31A480u;
    SET_GPR_U32(ctx, 31, 0x31A488u);
    ctx->pc = 0x31A484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31A480u;
            // 0x31a484: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A488u; }
        if (ctx->pc != 0x31A488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A488u; }
        if (ctx->pc != 0x31A488u) { return; }
    }
    ctx->pc = 0x31A488u;
label_31a488:
    // 0x31a488: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31a488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a48c: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31A48Cu;
    {
        const bool branch_taken_0x31a48c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x31A490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A48Cu;
            // 0x31a490: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a48c) {
            ctx->pc = 0x31A4A4u;
            goto label_31a4a4;
        }
    }
    ctx->pc = 0x31A494u;
    // 0x31a494: 0x2a020100  slti        $v0, $s0, 0x100
    ctx->pc = 0x31a494u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x31a498: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31A498u;
    {
        const bool branch_taken_0x31a498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A498u;
            // 0x31a49c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a498) {
            ctx->pc = 0x31A4ACu;
            goto label_31a4ac;
        }
    }
    ctx->pc = 0x31A4A0u;
    // 0x31a4a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31a4a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31a4a4:
    // 0x31a4a4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x31A4A4u;
    {
        const bool branch_taken_0x31a4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A4A4u;
            // 0x31a4a8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a4a4) {
            ctx->pc = 0x31A52Cu;
            goto label_31a52c;
        }
    }
    ctx->pc = 0x31A4ACu;
label_31a4ac:
    // 0x31a4ac: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x31A4ACu;
    SET_GPR_U32(ctx, 31, 0x31A4B4u);
    ctx->pc = 0x31A4B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31A4ACu;
            // 0x31a4b0: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A4B4u; }
        if (ctx->pc != 0x31A4B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A4B4u; }
        if (ctx->pc != 0x31A4B4u) { return; }
    }
    ctx->pc = 0x31A4B4u;
label_31a4b4:
    // 0x31a4b4: 0x8f83a378  lw          $v1, -0x5C88($gp)
    ctx->pc = 0x31a4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943608)));
    // 0x31a4b8: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x31a4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x31a4bc: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x31a4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x31a4c0: 0x58080  sll         $s0, $a1, 2
    ctx->pc = 0x31a4c0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x31a4c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31a4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a4c8: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x31a4c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x31a4cc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x31a4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x31a4d0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x31A4D0u;
    SET_GPR_U32(ctx, 31, 0x31A4D8u);
    ctx->pc = 0x31A4D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31A4D0u;
            // 0x31a4d4: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A4D8u; }
        if (ctx->pc != 0x31A4D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A4D8u; }
        if (ctx->pc != 0x31A4D8u) { return; }
    }
    ctx->pc = 0x31A4D8u;
label_31a4d8:
    // 0x31a4d8: 0x8f83a378  lw          $v1, -0x5C88($gp)
    ctx->pc = 0x31a4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943608)));
    // 0x31a4dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31a4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a4e0: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x31a4e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x31a4e4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x31a4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x31a4e8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x31A4E8u;
    SET_GPR_U32(ctx, 31, 0x31A4F0u);
    ctx->pc = 0x31A4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31A4E8u;
            // 0x31a4ec: 0xa4620002  sh          $v0, 0x2($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A4F0u; }
        if (ctx->pc != 0x31A4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A4F0u; }
        if (ctx->pc != 0x31A4F0u) { return; }
    }
    ctx->pc = 0x31A4F0u;
label_31a4f0:
    // 0x31a4f0: 0x8f83a378  lw          $v1, -0x5C88($gp)
    ctx->pc = 0x31a4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943608)));
    // 0x31a4f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31a4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a4f8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x31a4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x31a4fc: 0xc05191c  jal         func_146470
    ctx->pc = 0x31A4FCu;
    SET_GPR_U32(ctx, 31, 0x31A504u);
    ctx->pc = 0x31A500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31A4FCu;
            // 0x31a500: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A504u; }
        if (ctx->pc != 0x31A504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A504u; }
        if (ctx->pc != 0x31A504u) { return; }
    }
    ctx->pc = 0x31A504u;
label_31a504:
    // 0x31a504: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31A504u;
    {
        const bool branch_taken_0x31a504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a504) {
            ctx->pc = 0x31A524u;
            goto label_31a524;
        }
    }
    ctx->pc = 0x31A50Cu;
    // 0x31a50c: 0x8f85a37c  lw          $a1, -0x5C84($gp)
    ctx->pc = 0x31a50cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943612)));
    // 0x31a510: 0xc04e7a0  jal         func_139E80
    ctx->pc = 0x31A510u;
    SET_GPR_U32(ctx, 31, 0x31A518u);
    ctx->pc = 0x31A514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31A510u;
            // 0x31a514: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E80u;
    if (runtime->hasFunction(0x139E80u)) {
        auto targetFn = runtime->lookupFunction(0x139E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A518u; }
        if (ctx->pc != 0x31A518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCopyString__FPcP9mgCMemory_0x139e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A518u; }
        if (ctx->pc != 0x31A518u) { return; }
    }
    ctx->pc = 0x31A518u;
label_31a518:
    // 0x31a518: 0x8f83a378  lw          $v1, -0x5C88($gp)
    ctx->pc = 0x31a518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943608)));
    // 0x31a51c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x31a51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x31a520: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x31a520u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_31a524:
    // 0x31a524: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31a524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31a528: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31a528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_31a52c:
    // 0x31a52c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31a52cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31a530: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31a530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a534: 0x3e00008  jr          $ra
    ctx->pc = 0x31A534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A534u;
            // 0x31a538: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31A53Cu;
}
