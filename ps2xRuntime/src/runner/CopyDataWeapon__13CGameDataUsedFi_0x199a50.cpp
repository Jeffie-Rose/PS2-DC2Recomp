#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CopyDataWeapon__13CGameDataUsedFi
// Address: 0x199a50 - 0x199b78
void CopyDataWeapon__13CGameDataUsedFi_0x199a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CopyDataWeapon__13CGameDataUsedFi_0x199a50");
#endif

    switch (ctx->pc) {
        case 0x199a78u: goto label_199a78;
        case 0x199a9cu: goto label_199a9c;
        case 0x199b48u: goto label_199b48;
        case 0x199b58u: goto label_199b58;
        default: break;
    }

    ctx->pc = 0x199a50u;

    // 0x199a50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x199a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x199a54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x199a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x199a58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x199a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x199a5c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x199a5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199a60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x199a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x199a64: 0x3c0401e7  lui         $a0, 0x1E7
    ctx->pc = 0x199a64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
    // 0x199a68: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x199a68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199a6c: 0x24849570  addiu       $a0, $a0, -0x6A90
    ctx->pc = 0x199a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
    // 0x199a70: 0xc0655f8  jal         func_1957E0
    ctx->pc = 0x199A70u;
    SET_GPR_U32(ctx, 31, 0x199A78u);
    ctx->pc = 0x199A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199A70u;
            // 0x199a74: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1957E0u;
    if (runtime->hasFunction(0x1957E0u)) {
        auto targetFn = runtime->lookupFunction(0x1957E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199A78u; }
        if (ctx->pc != 0x199A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWeaponData__9CGameDataFi_0x1957e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199A78u; }
        if (ctx->pc != 0x199A78u) { return; }
    }
    ctx->pc = 0x199A78u;
label_199a78:
    // 0x199a78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x199a78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199a7c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x199A7Cu;
    {
        const bool branch_taken_0x199a7c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x199A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199A7Cu;
            // 0x199a80: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199a7c) {
            ctx->pc = 0x199A8Cu;
            goto label_199a8c;
        }
    }
    ctx->pc = 0x199A84u;
    // 0x199a84: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x199A84u;
    {
        const bool branch_taken_0x199a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199A84u;
            // 0x199a88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199a84) {
            ctx->pc = 0x199B60u;
            goto label_199b60;
        }
    }
    ctx->pc = 0x199A8Cu;
label_199a8c:
    // 0x199a8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x199a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199a90: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x199a90u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x199a94: 0xc0657b0  jal         func_195EC0
    ctx->pc = 0x199A94u;
    SET_GPR_U32(ctx, 31, 0x199A9Cu);
    ctx->pc = 0x199A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199A94u;
            // 0x199a98: 0xa6510002  sh          $s1, 0x2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195EC0u;
    if (runtime->hasFunction(0x195EC0u)) {
        auto targetFn = runtime->lookupFunction(0x195EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199A9Cu; }
        if (ctx->pc != 0x199A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemDataType__Fi_0x195ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199A9Cu; }
        if (ctx->pc != 0x199A9Cu) { return; }
    }
    ctx->pc = 0x199A9Cu;
label_199a9c:
    // 0x199a9c: 0xa2420004  sb          $v0, 0x4($s2)
    ctx->pc = 0x199a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x199aa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x199aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199aa4: 0xa6400020  sh          $zero, 0x20($s2)
    ctx->pc = 0x199aa4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x199aa8: 0x26510010  addiu       $s1, $s2, 0x10
    ctx->pc = 0x199aa8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x199aac: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x199aacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x199ab0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199ab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199ab4: 0x0  nop
    ctx->pc = 0x199ab4u;
    // NOP
    // 0x199ab8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x199ab8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x199abc: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x199abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x199ac0: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x199ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x199ac4: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x199ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
    // 0x199ac8: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x199ac8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x199acc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199accu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199ad0: 0x0  nop
    ctx->pc = 0x199ad0u;
    // NOP
    // 0x199ad4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x199ad4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x199ad8: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x199ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x199adc: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x199adcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x199ae0: 0xa6420022  sh          $v0, 0x22($s2)
    ctx->pc = 0x199ae0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x199ae4: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x199ae4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x199ae8: 0xa6420024  sh          $v0, 0x24($s2)
    ctx->pc = 0x199ae8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x199aec: 0x8602000c  lh          $v0, 0xC($s0)
    ctx->pc = 0x199aecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x199af0: 0xa6420026  sh          $v0, 0x26($s2)
    ctx->pc = 0x199af0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 38), (uint16_t)GPR_U32(ctx, 2));
    // 0x199af4: 0x8602000e  lh          $v0, 0xE($s0)
    ctx->pc = 0x199af4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x199af8: 0xa6420028  sh          $v0, 0x28($s2)
    ctx->pc = 0x199af8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x199afc: 0x86020010  lh          $v0, 0x10($s0)
    ctx->pc = 0x199afcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x199b00: 0xa642002a  sh          $v0, 0x2A($s2)
    ctx->pc = 0x199b00u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x199b04: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x199b04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x199b08: 0xa642002c  sh          $v0, 0x2C($s2)
    ctx->pc = 0x199b08u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x199b0c: 0x86020014  lh          $v0, 0x14($s0)
    ctx->pc = 0x199b0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x199b10: 0xa642002e  sh          $v0, 0x2E($s2)
    ctx->pc = 0x199b10u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 46), (uint16_t)GPR_U32(ctx, 2));
    // 0x199b14: 0x86020016  lh          $v0, 0x16($s0)
    ctx->pc = 0x199b14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x199b18: 0xa6420030  sh          $v0, 0x30($s2)
    ctx->pc = 0x199b18u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x199b1c: 0x86020018  lh          $v0, 0x18($s0)
    ctx->pc = 0x199b1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x199b20: 0xa6420032  sh          $v0, 0x32($s2)
    ctx->pc = 0x199b20u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 50), (uint16_t)GPR_U32(ctx, 2));
    // 0x199b24: 0x8602001a  lh          $v0, 0x1A($s0)
    ctx->pc = 0x199b24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x199b28: 0xa6420034  sh          $v0, 0x34($s2)
    ctx->pc = 0x199b28u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 52), (uint16_t)GPR_U32(ctx, 2));
    // 0x199b2c: 0x92020038  lbu         $v0, 0x38($s0)
    ctx->pc = 0x199b2cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x199b30: 0xa642003c  sh          $v0, 0x3C($s2)
    ctx->pc = 0x199b30u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 60), (uint16_t)GPR_U32(ctx, 2));
    // 0x199b34: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x199b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x199b38: 0xae420038  sw          $v0, 0x38($s2)
    ctx->pc = 0x199b38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 2));
    // 0x199b3c: 0xa640003e  sh          $zero, 0x3E($s2)
    ctx->pc = 0x199b3cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 62), (uint16_t)GPR_U32(ctx, 0));
    // 0x199b40: 0xc065810  jal         func_196040
    ctx->pc = 0x199B40u;
    SET_GPR_U32(ctx, 31, 0x199B48u);
    ctx->pc = 0x199B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199B40u;
            // 0x199b44: 0xa6400040  sh          $zero, 0x40($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 64), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196040u;
    if (runtime->hasFunction(0x196040u)) {
        auto targetFn = runtime->lookupFunction(0x196040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199B48u; }
        if (ctx->pc != 0x199B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemMessage__Fi_0x196040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199B48u; }
        if (ctx->pc != 0x199B48u) { return; }
    }
    ctx->pc = 0x199B48u;
label_199b48:
    // 0x199b48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x199B48u;
    {
        const bool branch_taken_0x199b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199B48u;
            // 0x199b4c: 0x26240033  addiu       $a0, $s1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199b48) {
            ctx->pc = 0x199B58u;
            goto label_199b58;
        }
    }
    ctx->pc = 0x199B50u;
    // 0x199b50: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x199B50u;
    SET_GPR_U32(ctx, 31, 0x199B58u);
    ctx->pc = 0x199B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199B50u;
            // 0x199b54: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199B58u; }
        if (ctx->pc != 0x199B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199B58u; }
        if (ctx->pc != 0x199B58u) { return; }
    }
    ctx->pc = 0x199B58u;
label_199b58:
    // 0x199b58: 0xa2400005  sb          $zero, 0x5($s2)
    ctx->pc = 0x199b58u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x199b5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x199b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_199b60:
    // 0x199b60: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x199b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x199b64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x199b64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x199b68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x199b68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199b6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x199b6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199b70: 0x3e00008  jr          $ra
    ctx->pc = 0x199B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199B70u;
            // 0x199b74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x199B78u;
}
