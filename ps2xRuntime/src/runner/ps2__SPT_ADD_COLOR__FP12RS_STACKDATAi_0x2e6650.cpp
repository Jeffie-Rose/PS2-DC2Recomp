#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPT_ADD_COLOR__FP12RS_STACKDATAi
// Address: 0x2e6650 - 0x2e6854
void ps2__SPT_ADD_COLOR__FP12RS_STACKDATAi_0x2e6650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPT_ADD_COLOR__FP12RS_STACKDATAi_0x2e6650");
#endif

    switch (ctx->pc) {
        case 0x2e6678u: goto label_2e6678;
        case 0x2e6688u: goto label_2e6688;
        case 0x2e6698u: goto label_2e6698;
        case 0x2e66a8u: goto label_2e66a8;
        case 0x2e66b8u: goto label_2e66b8;
        case 0x2e66ccu: goto label_2e66cc;
        case 0x2e66d8u: goto label_2e66d8;
        case 0x2e66e4u: goto label_2e66e4;
        case 0x2e6704u: goto label_2e6704;
        default: break;
    }

    ctx->pc = 0x2e6650u;

    // 0x2e6650: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e6650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e6654: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e6654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e6658: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e6658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e665c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e665cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e6660: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x2e6660u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2e6664: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e6664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e6668: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e6668u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e666c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e666cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e6670: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E6670u;
    SET_GPR_U32(ctx, 31, 0x2E6678u);
    ctx->pc = 0x2E6674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6670u;
            // 0x2e6674: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6678u; }
        if (ctx->pc != 0x2E6678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6678u; }
        if (ctx->pc != 0x2E6678u) { return; }
    }
    ctx->pc = 0x2E6678u;
label_2e6678:
    // 0x2e6678: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e6678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e667c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e667cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6680: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E6680u;
    SET_GPR_U32(ctx, 31, 0x2E6688u);
    ctx->pc = 0x2E6684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6680u;
            // 0x2e6684: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6688u; }
        if (ctx->pc != 0x2E6688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6688u; }
        if (ctx->pc != 0x2E6688u) { return; }
    }
    ctx->pc = 0x2E6688u;
label_2e6688:
    // 0x2e6688: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e6688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e668c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2e668cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2e6690: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E6690u;
    SET_GPR_U32(ctx, 31, 0x2E6698u);
    ctx->pc = 0x2E6694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6690u;
            // 0x2e6694: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6698u; }
        if (ctx->pc != 0x2E6698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6698u; }
        if (ctx->pc != 0x2E6698u) { return; }
    }
    ctx->pc = 0x2E6698u;
label_2e6698:
    // 0x2e6698: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e6698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e669c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2e669cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2e66a0: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E66A0u;
    SET_GPR_U32(ctx, 31, 0x2E66A8u);
    ctx->pc = 0x2E66A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E66A0u;
            // 0x2e66a4: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E66A8u; }
        if (ctx->pc != 0x2E66A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E66A8u; }
        if (ctx->pc != 0x2E66A8u) { return; }
    }
    ctx->pc = 0x2E66A8u;
label_2e66a8:
    // 0x2e66a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e66a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e66ac: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2e66acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2e66b0: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E66B0u;
    SET_GPR_U32(ctx, 31, 0x2E66B8u);
    ctx->pc = 0x2E66B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E66B0u;
            // 0x2e66b4: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E66B8u; }
        if (ctx->pc != 0x2E66B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E66B8u; }
        if (ctx->pc != 0x2E66B8u) { return; }
    }
    ctx->pc = 0x2E66B8u;
label_2e66b8:
    // 0x2e66b8: 0x2a420006  slti        $v0, $s2, 0x6
    ctx->pc = 0x2e66b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2e66bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E66BCu;
    {
        const bool branch_taken_0x2e66bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E66C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E66BCu;
            // 0x2e66c0: 0xe7a0005c  swc1        $f0, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e66bc) {
            ctx->pc = 0x2E66D0u;
            goto label_2e66d0;
        }
    }
    ctx->pc = 0x2E66C4u;
    // 0x2e66c4: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E66C4u;
    SET_GPR_U32(ctx, 31, 0x2E66CCu);
    ctx->pc = 0x2E66C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E66C4u;
            // 0x2e66c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E66CCu; }
        if (ctx->pc != 0x2E66CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E66CCu; }
        if (ctx->pc != 0x2E66CCu) { return; }
    }
    ctx->pc = 0x2E66CCu;
label_2e66cc:
    // 0x2e66cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e66ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e66d0:
    // 0x2e66d0: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x2E66D0u;
    {
        const bool branch_taken_0x2e66d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E66D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E66D0u;
            // 0x2e66d4: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e66d0) {
            ctx->pc = 0x2E6824u;
            goto label_2e6824;
        }
    }
    ctx->pc = 0x2E66D8u;
label_2e66d8:
    // 0x2e66d8: 0x8f849ed0  lw          $a0, -0x6130($gp)
    ctx->pc = 0x2e66d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e66dc: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2E66DCu;
    SET_GPR_U32(ctx, 31, 0x2E66E4u);
    ctx->pc = 0x2E66E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E66DCu;
            // 0x2e66e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (runtime->hasFunction(0x2E3240u)) {
        auto targetFn = runtime->lookupFunction(0x2E3240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E66E4u; }
        if (ctx->pc != 0x2E66E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSpritePtr__FP11_EFF_SCRIPTi_0x2e3240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E66E4u; }
        if (ctx->pc != 0x2E66E4u) { return; }
    }
    ctx->pc = 0x2E66E4u;
label_2e66e4:
    // 0x2e66e4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2e66e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e66e8: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E66E8u;
    {
        const bool branch_taken_0x2e66e8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E66ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E66E8u;
            // 0x2e66ec: 0x26640030  addiu       $a0, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e66e8) {
            ctx->pc = 0x2E66F8u;
            goto label_2e66f8;
        }
    }
    ctx->pc = 0x2E66F0u;
    // 0x2e66f0: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x2E66F0u;
    {
        const bool branch_taken_0x2e66f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E66F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E66F0u;
            // 0x2e66f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e66f0) {
            ctx->pc = 0x2E6838u;
            goto label_2e6838;
        }
    }
    ctx->pc = 0x2E66F8u;
label_2e66f8:
    // 0x2e66f8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2e66f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e66fc: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x2E66FCu;
    SET_GPR_U32(ctx, 31, 0x2E6704u);
    ctx->pc = 0x2E6700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E66FCu;
            // 0x2e6700: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6704u; }
        if (ctx->pc != 0x2E6704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6704u; }
        if (ctx->pc != 0x2E6704u) { return; }
    }
    ctx->pc = 0x2E6704u;
label_2e6704:
    // 0x2e6704: 0xc6610030  lwc1        $f1, 0x30($s3)
    ctx->pc = 0x2e6704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6708: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e6708u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e670c: 0x0  nop
    ctx->pc = 0x2e670cu;
    // NOP
    // 0x2e6710: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e6710u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e6714: 0x0  nop
    ctx->pc = 0x2e6714u;
    // NOP
    // 0x2e6718: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6718u;
    {
        const bool branch_taken_0x2e6718 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e6718) {
            ctx->pc = 0x2E6728u;
            goto label_2e6728;
        }
    }
    ctx->pc = 0x2E6720u;
    // 0x2e6720: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E6720u;
    {
        const bool branch_taken_0x2e6720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6720u;
            // 0x2e6724: 0xe6600030  swc1        $f0, 0x30($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6720) {
            ctx->pc = 0x2E6748u;
            goto label_2e6748;
        }
    }
    ctx->pc = 0x2E6728u;
label_2e6728:
    // 0x2e6728: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2e6728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2e672c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e672cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6730: 0x0  nop
    ctx->pc = 0x2e6730u;
    // NOP
    // 0x2e6734: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e6734u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e6738: 0x0  nop
    ctx->pc = 0x2e6738u;
    // NOP
    // 0x2e673c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2E673Cu;
    {
        const bool branch_taken_0x2e673c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e673c) {
            ctx->pc = 0x2E6748u;
            goto label_2e6748;
        }
    }
    ctx->pc = 0x2E6744u;
    // 0x2e6744: 0xe6600030  swc1        $f0, 0x30($s3)
    ctx->pc = 0x2e6744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
label_2e6748:
    // 0x2e6748: 0xc6610034  lwc1        $f1, 0x34($s3)
    ctx->pc = 0x2e6748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e674c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e674cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6750: 0x0  nop
    ctx->pc = 0x2e6750u;
    // NOP
    // 0x2e6754: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e6754u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e6758: 0x0  nop
    ctx->pc = 0x2e6758u;
    // NOP
    // 0x2e675c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2E675Cu;
    {
        const bool branch_taken_0x2e675c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e675c) {
            ctx->pc = 0x2E676Cu;
            goto label_2e676c;
        }
    }
    ctx->pc = 0x2E6764u;
    // 0x2e6764: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E6764u;
    {
        const bool branch_taken_0x2e6764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6764u;
            // 0x2e6768: 0xe6600034  swc1        $f0, 0x34($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6764) {
            ctx->pc = 0x2E6790u;
            goto label_2e6790;
        }
    }
    ctx->pc = 0x2E676Cu;
label_2e676c:
    // 0x2e676c: 0x0  nop
    ctx->pc = 0x2e676cu;
    // NOP
    // 0x2e6770: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2e6770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2e6774: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e6774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6778: 0x0  nop
    ctx->pc = 0x2e6778u;
    // NOP
    // 0x2e677c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e677cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e6780: 0x0  nop
    ctx->pc = 0x2e6780u;
    // NOP
    // 0x2e6784: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2E6784u;
    {
        const bool branch_taken_0x2e6784 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e6784) {
            ctx->pc = 0x2E6790u;
            goto label_2e6790;
        }
    }
    ctx->pc = 0x2E678Cu;
    // 0x2e678c: 0xe6600034  swc1        $f0, 0x34($s3)
    ctx->pc = 0x2e678cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
label_2e6790:
    // 0x2e6790: 0xc6610038  lwc1        $f1, 0x38($s3)
    ctx->pc = 0x2e6790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6794: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e6794u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6798: 0x0  nop
    ctx->pc = 0x2e6798u;
    // NOP
    // 0x2e679c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e679cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e67a0: 0x0  nop
    ctx->pc = 0x2e67a0u;
    // NOP
    // 0x2e67a4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2E67A4u;
    {
        const bool branch_taken_0x2e67a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e67a4) {
            ctx->pc = 0x2E67B4u;
            goto label_2e67b4;
        }
    }
    ctx->pc = 0x2E67ACu;
    // 0x2e67ac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E67ACu;
    {
        const bool branch_taken_0x2e67ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E67B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E67ACu;
            // 0x2e67b0: 0xe6600038  swc1        $f0, 0x38($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e67ac) {
            ctx->pc = 0x2E67D8u;
            goto label_2e67d8;
        }
    }
    ctx->pc = 0x2E67B4u;
label_2e67b4:
    // 0x2e67b4: 0x0  nop
    ctx->pc = 0x2e67b4u;
    // NOP
    // 0x2e67b8: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2e67b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2e67bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e67bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e67c0: 0x0  nop
    ctx->pc = 0x2e67c0u;
    // NOP
    // 0x2e67c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e67c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e67c8: 0x0  nop
    ctx->pc = 0x2e67c8u;
    // NOP
    // 0x2e67cc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2E67CCu;
    {
        const bool branch_taken_0x2e67cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e67cc) {
            ctx->pc = 0x2E67D8u;
            goto label_2e67d8;
        }
    }
    ctx->pc = 0x2E67D4u;
    // 0x2e67d4: 0xe6600038  swc1        $f0, 0x38($s3)
    ctx->pc = 0x2e67d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
label_2e67d8:
    // 0x2e67d8: 0xc661003c  lwc1        $f1, 0x3C($s3)
    ctx->pc = 0x2e67d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e67dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e67dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e67e0: 0x0  nop
    ctx->pc = 0x2e67e0u;
    // NOP
    // 0x2e67e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e67e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e67e8: 0x0  nop
    ctx->pc = 0x2e67e8u;
    // NOP
    // 0x2e67ec: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2E67ECu;
    {
        const bool branch_taken_0x2e67ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e67ec) {
            ctx->pc = 0x2E67FCu;
            goto label_2e67fc;
        }
    }
    ctx->pc = 0x2E67F4u;
    // 0x2e67f4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E67F4u;
    {
        const bool branch_taken_0x2e67f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E67F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E67F4u;
            // 0x2e67f8: 0xe660003c  swc1        $f0, 0x3C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e67f4) {
            ctx->pc = 0x2E6820u;
            goto label_2e6820;
        }
    }
    ctx->pc = 0x2E67FCu;
label_2e67fc:
    // 0x2e67fc: 0x0  nop
    ctx->pc = 0x2e67fcu;
    // NOP
    // 0x2e6800: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2e6800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2e6804: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e6804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6808: 0x0  nop
    ctx->pc = 0x2e6808u;
    // NOP
    // 0x2e680c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e680cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e6810: 0x0  nop
    ctx->pc = 0x2e6810u;
    // NOP
    // 0x2e6814: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2E6814u;
    {
        const bool branch_taken_0x2e6814 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e6814) {
            ctx->pc = 0x2E6820u;
            goto label_2e6820;
        }
    }
    ctx->pc = 0x2E681Cu;
    // 0x2e681c: 0xe660003c  swc1        $f0, 0x3C($s3)
    ctx->pc = 0x2e681cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 60), bits); }
label_2e6820:
    // 0x2e6820: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2e6820u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2e6824:
    // 0x2e6824: 0x0  nop
    ctx->pc = 0x2e6824u;
    // NOP
    // 0x2e6828: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x2e6828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2e682c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2e682cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e6830: 0x1440ffa9  bnez        $v0, . + 4 + (-0x57 << 2)
    ctx->pc = 0x2E6830u;
    {
        const bool branch_taken_0x2e6830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6830u;
            // 0x2e6834: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6830) {
            ctx->pc = 0x2E66D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e66d8;
        }
    }
    ctx->pc = 0x2E6838u;
label_2e6838:
    // 0x2e6838: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e6838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e683c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e683cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e6840: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e6840u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e6844: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e6844u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e6848: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e6848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e684c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E684Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E684Cu;
            // 0x2e6850: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E6854u;
}
