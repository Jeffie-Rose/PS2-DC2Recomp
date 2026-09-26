#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: emapPARTS_NAME__FP9SPI_STACKi
// Address: 0x2a5160 - 0x2a51f4
void emapPARTS_NAME__FP9SPI_STACKi_0x2a5160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("emapPARTS_NAME__FP9SPI_STACKi_0x2a5160");
#endif

    switch (ctx->pc) {
        case 0x2a518cu: goto label_2a518c;
        case 0x2a5198u: goto label_2a5198;
        case 0x2a51b8u: goto label_2a51b8;
        case 0x2a51d4u: goto label_2a51d4;
        default: break;
    }

    ctx->pc = 0x2a5160u;

    // 0x2a5160: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a5160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a5164: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a5164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a5168: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a5168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a516c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a516cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a5170: 0x8f829a64  lw          $v0, -0x659C($gp)
    ctx->pc = 0x2a5170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941284)));
    // 0x2a5174: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A5174u;
    {
        const bool branch_taken_0x2a5174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5174u;
            // 0x2a5178: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5174) {
            ctx->pc = 0x2A5184u;
            goto label_2a5184;
        }
    }
    ctx->pc = 0x2A517Cu;
    // 0x2a517c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2A517Cu;
    {
        const bool branch_taken_0x2a517c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A517Cu;
            // 0x2a5180: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a517c) {
            ctx->pc = 0x2A51E4u;
            goto label_2a51e4;
        }
    }
    ctx->pc = 0x2A5184u;
label_2a5184:
    // 0x2a5184: 0xc05191c  jal         func_146470
    ctx->pc = 0x2A5184u;
    SET_GPR_U32(ctx, 31, 0x2A518Cu);
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A518Cu; }
        if (ctx->pc != 0x2A518Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A518Cu; }
        if (ctx->pc != 0x2A518Cu) { return; }
    }
    ctx->pc = 0x2A518Cu;
label_2a518c:
    // 0x2a518c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a518cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5190: 0xc04a422  jal         func_129088
    ctx->pc = 0x2A5190u;
    SET_GPR_U32(ctx, 31, 0x2A5198u);
    ctx->pc = 0x2A5194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5190u;
            // 0x2a5194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5198u; }
        if (ctx->pc != 0x2A5198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5198u; }
        if (ctx->pc != 0x2A5198u) { return; }
    }
    ctx->pc = 0x2A5198u;
label_2a5198:
    // 0x2a5198: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x2a5198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a519c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x2a519cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2a51a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A51A0u;
    {
        const bool branch_taken_0x2a51a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A51A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A51A0u;
            // 0x2a51a4: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a51a0) {
            ctx->pc = 0x2A51B0u;
            goto label_2a51b0;
        }
    }
    ctx->pc = 0x2A51A8u;
    // 0x2a51a8: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2a51a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2a51ac: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2a51acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a51b0:
    // 0x2a51b0: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2A51B0u;
    SET_GPR_U32(ctx, 31, 0x2A51B8u);
    ctx->pc = 0x2A51B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A51B0u;
            // 0x2a51b4: 0x8f849a58  lw          $a0, -0x65A8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941272)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A51B8u; }
        if (ctx->pc != 0x2A51B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A51B8u; }
        if (ctx->pc != 0x2A51B8u) { return; }
    }
    ctx->pc = 0x2A51B8u;
label_2a51b8:
    // 0x2a51b8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A51B8u;
    {
        const bool branch_taken_0x2a51b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A51BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A51B8u;
            // 0x2a51bc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a51b8) {
            ctx->pc = 0x2A51DCu;
            goto label_2a51dc;
        }
    }
    ctx->pc = 0x2A51C0u;
    // 0x2a51c0: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A51C0u;
    {
        const bool branch_taken_0x2a51c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A51C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A51C0u;
            // 0x2a51c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a51c0) {
            ctx->pc = 0x2A51E0u;
            goto label_2a51e0;
        }
    }
    ctx->pc = 0x2A51C8u;
    // 0x2a51c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a51c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a51cc: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2A51CCu;
    SET_GPR_U32(ctx, 31, 0x2A51D4u);
    ctx->pc = 0x2A51D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A51CCu;
            // 0x2a51d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A51D4u; }
        if (ctx->pc != 0x2A51D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A51D4u; }
        if (ctx->pc != 0x2A51D4u) { return; }
    }
    ctx->pc = 0x2A51D4u;
label_2a51d4:
    // 0x2a51d4: 0x8f829a64  lw          $v0, -0x659C($gp)
    ctx->pc = 0x2a51d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941284)));
    // 0x2a51d8: 0xac510040  sw          $s1, 0x40($v0)
    ctx->pc = 0x2a51d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 17));
label_2a51dc:
    // 0x2a51dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a51dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a51e0:
    // 0x2a51e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a51e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a51e4:
    // 0x2a51e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a51e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a51e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a51e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a51ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2A51ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A51F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A51ECu;
            // 0x2a51f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A51F4u;
}
