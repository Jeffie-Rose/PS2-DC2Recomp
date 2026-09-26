#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuMemoryAdjust__FP9mgCMemoryP9mgCMemoryP9mgCMemoryi
// Address: 0x2b00a0 - 0x2b0190
void MenuMemoryAdjust__FP9mgCMemoryP9mgCMemoryP9mgCMemoryi_0x2b00a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuMemoryAdjust__FP9mgCMemoryP9mgCMemoryP9mgCMemoryi_0x2b00a0");
#endif

    switch (ctx->pc) {
        case 0x2b0128u: goto label_2b0128;
        case 0x2b014cu: goto label_2b014c;
        case 0x2b0158u: goto label_2b0158;
        case 0x2b0170u: goto label_2b0170;
        default: break;
    }

    ctx->pc = 0x2b00a0u;

    // 0x2b00a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2b00a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2b00a4: 0x3c0201f1  lui         $v0, 0x1F1
    ctx->pc = 0x2b00a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)497 << 16));
    // 0x2b00a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b00a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b00ac: 0x2442cc30  addiu       $v0, $v0, -0x33D0
    ctx->pc = 0x2b00acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954032));
    // 0x2b00b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b00b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b00b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b00b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b00b8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2b00b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b00bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b00bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b00c0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2b00c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b00c4: 0x8c8e0028  lw          $t6, 0x28($a0)
    ctx->pc = 0x2b00c4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2b00c8: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x2b00c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b00cc: 0x8c8d0024  lw          $t5, 0x24($a0)
    ctx->pc = 0x2b00ccu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2b00d0: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2b00d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b00d4: 0x784c0000  lq          $t4, 0x0($v0)
    ctx->pc = 0x2b00d4u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b00d8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2b00d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2b00dc: 0xdc4b0010  ld          $t3, 0x10($v0)
    ctx->pc = 0x2b00dcu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2b00e0: 0x262a0030  addiu       $t2, $s1, 0x30
    ctx->pc = 0x2b00e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2b00e4: 0x26290060  addiu       $t1, $s1, 0x60
    ctx->pc = 0x2b00e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x2b00e8: 0x26280090  addiu       $t0, $s1, 0x90
    ctx->pc = 0x2b00e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x2b00ec: 0x262700c0  addiu       $a3, $s1, 0xC0
    ctx->pc = 0x2b00ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x2b00f0: 0x262300f0  addiu       $v1, $s1, 0xF0
    ctx->pc = 0x2b00f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x2b00f4: 0x1cd8023  subu        $s0, $t6, $t5
    ctx->pc = 0x2b00f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x2b00f8: 0x7cac0000  sq          $t4, 0x0($a1)
    ctx->pc = 0x2b00f8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 12));
    // 0x2b00fc: 0x26220120  addiu       $v0, $s1, 0x120
    ctx->pc = 0x2b00fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x2b0100: 0xfcab0010  sd          $t3, 0x10($a1)
    ctx->pc = 0x2b0100u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 11));
    // 0x2b0104: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x2b0104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x2b0108: 0xafaa0044  sw          $t2, 0x44($sp)
    ctx->pc = 0x2b0108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 10));
    // 0x2b010c: 0xafa90048  sw          $t1, 0x48($sp)
    ctx->pc = 0x2b010cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 9));
    // 0x2b0110: 0xafa8004c  sw          $t0, 0x4C($sp)
    ctx->pc = 0x2b0110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 8));
    // 0x2b0114: 0xafa70050  sw          $a3, 0x50($sp)
    ctx->pc = 0x2b0114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
    // 0x2b0118: 0xafa30054  sw          $v1, 0x54($sp)
    ctx->pc = 0x2b0118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
    // 0x2b011c: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x2b011cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x2b0120: 0xc0abfb4  jal         func_2AFED0
    ctx->pc = 0x2B0120u;
    SET_GPR_U32(ctx, 31, 0x2B0128u);
    ctx->pc = 0x2B0124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0120u;
            // 0x2b0124: 0xafb10040  sw          $s1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AFED0u;
    if (runtime->hasFunction(0x2AFED0u)) {
        auto targetFn = runtime->lookupFunction(0x2AFED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0128u; }
        if (ctx->pc != 0x2B0128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMemoryDivide__FP9mgCMemoryPP9mgCMemoryi_0x2afed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0128u; }
        if (ctx->pc != 0x2B0128u) { return; }
    }
    ctx->pc = 0x2B0128u;
label_2b0128:
    // 0x2b0128: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x2b0128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2b012c: 0x2023023  subu        $a2, $s0, $v0
    ctx->pc = 0x2b012cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2b0130: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x2b0130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2b0134: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2b0134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2b0138: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b0138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b013c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2b013cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2b0140: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2b0140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2b0144: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x2B0144u;
    SET_GPR_U32(ctx, 31, 0x2B014Cu);
    ctx->pc = 0x2B0148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0144u;
            // 0x2b0148: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B014Cu; }
        if (ctx->pc != 0x2B014Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B014Cu; }
        if (ctx->pc != 0x2B014Cu) { return; }
    }
    ctx->pc = 0x2B014Cu;
label_2b014c:
    // 0x2b014c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2b014cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2b0150: 0xc04a422  jal         func_129088
    ctx->pc = 0x2B0150u;
    SET_GPR_U32(ctx, 31, 0x2B0158u);
    ctx->pc = 0x2B0154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0150u;
            // 0x2b0154: 0x2484ea00  addiu       $a0, $a0, -0x1600 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0158u; }
        if (ctx->pc != 0x2B0158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0158u; }
        if (ctx->pc != 0x2B0158u) { return; }
    }
    ctx->pc = 0x2B0158u;
label_2b0158:
    // 0x2b0158: 0x2c410010  sltiu       $at, $v0, 0x10
    ctx->pc = 0x2b0158u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2b015c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B015Cu;
    {
        const bool branch_taken_0x2b015c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B015Cu;
            // 0x2b0160: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b015c) {
            ctx->pc = 0x2B0170u;
            goto label_2b0170;
        }
    }
    ctx->pc = 0x2B0164u;
    // 0x2b0164: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b0164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0168: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2B0168u;
    SET_GPR_U32(ctx, 31, 0x2B0170u);
    ctx->pc = 0x2B016Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0168u;
            // 0x2b016c: 0x24a5ea00  addiu       $a1, $a1, -0x1600 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0170u; }
        if (ctx->pc != 0x2B0170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0170u; }
        if (ctx->pc != 0x2B0170u) { return; }
    }
    ctx->pc = 0x2B0170u;
label_2b0170:
    // 0x2b0170: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x2b0170u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
    // 0x2b0174: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x2b0174u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
    // 0x2b0178: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b0178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b017c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b017cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b0180: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b0180u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0184: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b0184u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b0188: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B018Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0188u;
            // 0x2b018c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B0190u;
}
