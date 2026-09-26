#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Generate__7CBubbleFi
// Address: 0x20cb60 - 0x20cc64
void Generate__7CBubbleFi_0x20cb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Generate__7CBubbleFi_0x20cb60");
#endif

    switch (ctx->pc) {
        case 0x20cb94u: goto label_20cb94;
        case 0x20cbb0u: goto label_20cbb0;
        case 0x20cbdcu: goto label_20cbdc;
        case 0x20cc14u: goto label_20cc14;
        case 0x20cc20u: goto label_20cc20;
        default: break;
    }

    ctx->pc = 0x20cb60u;

    // 0x20cb60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20cb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20cb64: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x20cb64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x20cb68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20cb68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20cb6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20cb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20cb70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20cb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20cb74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20cb74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cb78: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x20cb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x20cb7c: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x20cb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x20cb80: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x20cb80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x20cb84: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x20cb84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x20cb88: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20cb88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20cb8c: 0xc0941c0  jal         func_250700
    ctx->pc = 0x20CB8Cu;
    SET_GPR_U32(ctx, 31, 0x20CB94u);
    ctx->pc = 0x20CB90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CB8Cu;
            // 0x20cb90: 0x648021  addu        $s0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CB94u; }
        if (ctx->pc != 0x20CB94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CB94u; }
        if (ctx->pc != 0x20CB94u) { return; }
    }
    ctx->pc = 0x20CB94u;
label_20cb94:
    // 0x20cb94: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x20cb94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x20cb98: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x20cb98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x20cb9c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x20cb9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20cba0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20cba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20cba4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x20cba4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x20cba8: 0xc0941c0  jal         func_250700
    ctx->pc = 0x20CBA8u;
    SET_GPR_U32(ctx, 31, 0x20CBB0u);
    ctx->pc = 0x20CBACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CBA8u;
            // 0x20cbac: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CBB0u; }
        if (ctx->pc != 0x20CBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CBB0u; }
        if (ctx->pc != 0x20CBB0u) { return; }
    }
    ctx->pc = 0x20CBB0u;
label_20cbb0:
    // 0x20cbb0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x20cbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x20cbb4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x20cbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x20cbb8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x20cbb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20cbbc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20cbbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20cbc0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x20cbc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x20cbc4: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x20cbc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x20cbc8: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x20cbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20cbcc: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x20cbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20cbd0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20cbd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20cbd4: 0xc0941c0  jal         func_250700
    ctx->pc = 0x20CBD4u;
    SET_GPR_U32(ctx, 31, 0x20CBDCu);
    ctx->pc = 0x20CBD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CBD4u;
            // 0x20cbd8: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CBDCu; }
        if (ctx->pc != 0x20CBDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CBDCu; }
        if (ctx->pc != 0x20CBDCu) { return; }
    }
    ctx->pc = 0x20CBDCu;
label_20cbdc:
    // 0x20cbdc: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x20cbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20cbe0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x20cbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x20cbe4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x20cbe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x20cbe8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x20cbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x20cbec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20cbecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20cbf0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20cbf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20cbf4: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x20cbf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x20cbf8: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x20cbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20cbfc: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x20cbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20cc00: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20cc00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20cc04: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x20cc04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x20cc08: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x20cc08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x20cc0c: 0xc0941c0  jal         func_250700
    ctx->pc = 0x20CC0Cu;
    SET_GPR_U32(ctx, 31, 0x20CC14u);
    ctx->pc = 0x20CC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CC0Cu;
            // 0x20cc10: 0xa2000001  sb          $zero, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CC14u; }
        if (ctx->pc != 0x20CC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CC14u; }
        if (ctx->pc != 0x20CC14u) { return; }
    }
    ctx->pc = 0x20CC14u;
label_20cc14:
    // 0x20cc14: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x20cc14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x20cc18: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x20CC18u;
    SET_GPR_U32(ctx, 31, 0x20CC20u);
    ctx->pc = 0x20CC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CC18u;
            // 0x20cc1c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CC20u; }
        if (ctx->pc != 0x20CC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CC20u; }
        if (ctx->pc != 0x20CC20u) { return; }
    }
    ctx->pc = 0x20CC20u;
label_20cc20:
    // 0x20cc20: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x20cc20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x20cc24: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x20cc24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x20cc28: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x20cc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20cc2c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x20cc2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x20cc30: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x20cc30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20cc34: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x20cc34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x20cc38: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20cc38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20cc3c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x20cc3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x20cc40: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x20cc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20cc44: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20cc44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20cc48: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x20cc48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x20cc4c: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x20cc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x20cc50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20cc50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20cc54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20cc54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20cc58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20cc58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20cc5c: 0x3e00008  jr          $ra
    ctx->pc = 0x20CC5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CC5Cu;
            // 0x20cc60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20CC64u;
}
