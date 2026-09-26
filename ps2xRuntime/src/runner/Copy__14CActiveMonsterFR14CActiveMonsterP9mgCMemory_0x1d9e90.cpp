#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Copy__14CActiveMonsterFR14CActiveMonsterP9mgCMemory
// Address: 0x1d9e90 - 0x1da2e0
void Copy__14CActiveMonsterFR14CActiveMonsterP9mgCMemory_0x1d9e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Copy__14CActiveMonsterFR14CActiveMonsterP9mgCMemory_0x1d9e90");
#endif

    switch (ctx->pc) {
        case 0x1d9ebcu: goto label_1d9ebc;
        case 0x1d9ee8u: goto label_1d9ee8;
        case 0x1d9f14u: goto label_1d9f14;
        case 0x1d9fb0u: goto label_1d9fb0;
        case 0x1da244u: goto label_1da244;
        case 0x1da2c8u: goto label_1da2c8;
        default: break;
    }

    ctx->pc = 0x1d9e90u;

    // 0x1d9e90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d9e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d9e94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d9e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d9e98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d9e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d9e9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d9e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d9ea0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d9ea0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9ea4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d9ea4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9ea8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d9ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d9eac: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1d9eacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9eb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d9eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9eb4: 0xc0768b8  jal         func_1DA2E0
    ctx->pc = 0x1D9EB4u;
    SET_GPR_U32(ctx, 31, 0x1D9EBCu);
    ctx->pc = 0x1D9EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9EB4u;
            // 0x1d9eb8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA2E0u;
    if (runtime->hasFunction(0x1DA2E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9EBCu; }
        if (ctx->pc != 0x1D9EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__12CActionCharaFRC12CActionChara_0x1da2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9EBCu; }
        if (ctx->pc != 0x1D9EBCu) { return; }
    }
    ctx->pc = 0x1D9EBCu;
label_1d9ebc:
    // 0x1d9ebc: 0xc6431030  lwc1        $f3, 0x1030($s2)
    ctx->pc = 0x1d9ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d9ec0: 0x26461040  addiu       $a2, $s2, 0x1040
    ctx->pc = 0x1d9ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4160));
    // 0x1d9ec4: 0xc6421034  lwc1        $f2, 0x1034($s2)
    ctx->pc = 0x1d9ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d9ec8: 0x26251040  addiu       $a1, $s1, 0x1040
    ctx->pc = 0x1d9ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4160));
    // 0x1d9ecc: 0xc6411038  lwc1        $f1, 0x1038($s2)
    ctx->pc = 0x1d9eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9ed0: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x1d9ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1d9ed4: 0xc640103c  lwc1        $f0, 0x103C($s2)
    ctx->pc = 0x1d9ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9ed8: 0xe6231030  swc1        $f3, 0x1030($s1)
    ctx->pc = 0x1d9ed8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4144), bits); }
    // 0x1d9edc: 0xe6221034  swc1        $f2, 0x1034($s1)
    ctx->pc = 0x1d9edcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4148), bits); }
    // 0x1d9ee0: 0xe6211038  swc1        $f1, 0x1038($s1)
    ctx->pc = 0x1d9ee0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4152), bits); }
    // 0x1d9ee4: 0xe620103c  swc1        $f0, 0x103C($s1)
    ctx->pc = 0x1d9ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4156), bits); }
label_1d9ee8:
    // 0x1d9ee8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1d9ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d9eec: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1d9eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1d9ef0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1d9ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1d9ef4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1d9ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1d9ef8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1d9ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1d9efc: 0x0  nop
    ctx->pc = 0x1d9efcu;
    // NOP
    // 0x1d9f00: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1D9F00u;
    {
        const bool branch_taken_0x1d9f00 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x1d9f00) {
            ctx->pc = 0x1D9EE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d9ee8;
        }
    }
    ctx->pc = 0x1D9F08u;
    // 0x1d9f08: 0x26471094  addiu       $a3, $s2, 0x1094
    ctx->pc = 0x1d9f08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 4244));
    // 0x1d9f0c: 0x26261094  addiu       $a2, $s1, 0x1094
    ctx->pc = 0x1d9f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4244));
    // 0x1d9f10: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x1d9f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_1d9f14:
    // 0x1d9f14: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1d9f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d9f18: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1d9f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1d9f1c: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x1d9f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1d9f20: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1d9f20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1d9f24: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x1d9f24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x1d9f28: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x1d9f28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x1d9f2c: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1D9F2Cu;
    {
        const bool branch_taken_0x1d9f2c = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x1D9F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9F2Cu;
            // 0x1d9f30: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9f2c) {
            ctx->pc = 0x1D9F14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d9f14;
        }
    }
    ctx->pc = 0x1D9F34u;
    // 0x1d9f34: 0x8e43114c  lw          $v1, 0x114C($s2)
    ctx->pc = 0x1d9f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4428)));
    // 0x1d9f38: 0x2647117c  addiu       $a3, $s2, 0x117C
    ctx->pc = 0x1d9f38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 4476));
    // 0x1d9f3c: 0x2626117c  addiu       $a2, $s1, 0x117C
    ctx->pc = 0x1d9f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4476));
    // 0x1d9f40: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1d9f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d9f44: 0xae23114c  sw          $v1, 0x114C($s1)
    ctx->pc = 0x1d9f44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4428), GPR_U32(ctx, 3));
    // 0x1d9f48: 0x8e431150  lw          $v1, 0x1150($s2)
    ctx->pc = 0x1d9f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4432)));
    // 0x1d9f4c: 0xae231150  sw          $v1, 0x1150($s1)
    ctx->pc = 0x1d9f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4432), GPR_U32(ctx, 3));
    // 0x1d9f50: 0x86431154  lh          $v1, 0x1154($s2)
    ctx->pc = 0x1d9f50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4436)));
    // 0x1d9f54: 0xa6231154  sh          $v1, 0x1154($s1)
    ctx->pc = 0x1d9f54u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4436), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d9f58: 0x86431156  lh          $v1, 0x1156($s2)
    ctx->pc = 0x1d9f58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4438)));
    // 0x1d9f5c: 0xa6231156  sh          $v1, 0x1156($s1)
    ctx->pc = 0x1d9f5cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4438), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d9f60: 0x86431158  lh          $v1, 0x1158($s2)
    ctx->pc = 0x1d9f60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4440)));
    // 0x1d9f64: 0xa6231158  sh          $v1, 0x1158($s1)
    ctx->pc = 0x1d9f64u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4440), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d9f68: 0x8643115a  lh          $v1, 0x115A($s2)
    ctx->pc = 0x1d9f68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4442)));
    // 0x1d9f6c: 0xa623115a  sh          $v1, 0x115A($s1)
    ctx->pc = 0x1d9f6cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4442), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d9f70: 0xc643115c  lwc1        $f3, 0x115C($s2)
    ctx->pc = 0x1d9f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d9f74: 0xc6421160  lwc1        $f2, 0x1160($s2)
    ctx->pc = 0x1d9f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d9f78: 0xc6411164  lwc1        $f1, 0x1164($s2)
    ctx->pc = 0x1d9f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9f7c: 0xc6401168  lwc1        $f0, 0x1168($s2)
    ctx->pc = 0x1d9f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9f80: 0xe623115c  swc1        $f3, 0x115C($s1)
    ctx->pc = 0x1d9f80u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4444), bits); }
    // 0x1d9f84: 0xe6221160  swc1        $f2, 0x1160($s1)
    ctx->pc = 0x1d9f84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4448), bits); }
    // 0x1d9f88: 0xe6211164  swc1        $f1, 0x1164($s1)
    ctx->pc = 0x1d9f88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4452), bits); }
    // 0x1d9f8c: 0xe6201168  swc1        $f0, 0x1168($s1)
    ctx->pc = 0x1d9f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4456), bits); }
    // 0x1d9f90: 0xc643116c  lwc1        $f3, 0x116C($s2)
    ctx->pc = 0x1d9f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d9f94: 0xc6421170  lwc1        $f2, 0x1170($s2)
    ctx->pc = 0x1d9f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d9f98: 0xc6411174  lwc1        $f1, 0x1174($s2)
    ctx->pc = 0x1d9f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9f9c: 0xc6401178  lwc1        $f0, 0x1178($s2)
    ctx->pc = 0x1d9f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9fa0: 0xe623116c  swc1        $f3, 0x116C($s1)
    ctx->pc = 0x1d9fa0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4460), bits); }
    // 0x1d9fa4: 0xe6221170  swc1        $f2, 0x1170($s1)
    ctx->pc = 0x1d9fa4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4464), bits); }
    // 0x1d9fa8: 0xe6211174  swc1        $f1, 0x1174($s1)
    ctx->pc = 0x1d9fa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4468), bits); }
    // 0x1d9fac: 0xe6201178  swc1        $f0, 0x1178($s1)
    ctx->pc = 0x1d9facu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4472), bits); }
label_1d9fb0:
    // 0x1d9fb0: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1d9fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d9fb4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1d9fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1d9fb8: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x1d9fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1d9fbc: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1d9fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1d9fc0: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x1d9fc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x1d9fc4: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x1d9fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x1d9fc8: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1D9FC8u;
    {
        const bool branch_taken_0x1d9fc8 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x1D9FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9FC8u;
            // 0x1d9fcc: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9fc8) {
            ctx->pc = 0x1D9FB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d9fb0;
        }
    }
    ctx->pc = 0x1D9FD0u;
    // 0x1d9fd0: 0x8e4311fc  lw          $v1, 0x11FC($s2)
    ctx->pc = 0x1d9fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4604)));
    // 0x1d9fd4: 0x26461360  addiu       $a2, $s2, 0x1360
    ctx->pc = 0x1d9fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4960));
    // 0x1d9fd8: 0x26251360  addiu       $a1, $s1, 0x1360
    ctx->pc = 0x1d9fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4960));
    // 0x1d9fdc: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1d9fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1d9fe0: 0xae2311fc  sw          $v1, 0x11FC($s1)
    ctx->pc = 0x1d9fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4604), GPR_U32(ctx, 3));
    // 0x1d9fe4: 0x8e431200  lw          $v1, 0x1200($s2)
    ctx->pc = 0x1d9fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4608)));
    // 0x1d9fe8: 0xae231200  sw          $v1, 0x1200($s1)
    ctx->pc = 0x1d9fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4608), GPR_U32(ctx, 3));
    // 0x1d9fec: 0x86431204  lh          $v1, 0x1204($s2)
    ctx->pc = 0x1d9fecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4612)));
    // 0x1d9ff0: 0xa6231204  sh          $v1, 0x1204($s1)
    ctx->pc = 0x1d9ff0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4612), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d9ff4: 0x8e431208  lw          $v1, 0x1208($s2)
    ctx->pc = 0x1d9ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4616)));
    // 0x1d9ff8: 0xae231208  sw          $v1, 0x1208($s1)
    ctx->pc = 0x1d9ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4616), GPR_U32(ctx, 3));
    // 0x1d9ffc: 0x8e43120c  lw          $v1, 0x120C($s2)
    ctx->pc = 0x1d9ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4620)));
    // 0x1da000: 0xae23120c  sw          $v1, 0x120C($s1)
    ctx->pc = 0x1da000u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4620), GPR_U32(ctx, 3));
    // 0x1da004: 0x8e431210  lw          $v1, 0x1210($s2)
    ctx->pc = 0x1da004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4624)));
    // 0x1da008: 0xae231210  sw          $v1, 0x1210($s1)
    ctx->pc = 0x1da008u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4624), GPR_U32(ctx, 3));
    // 0x1da00c: 0x8e431214  lw          $v1, 0x1214($s2)
    ctx->pc = 0x1da00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4628)));
    // 0x1da010: 0xae231214  sw          $v1, 0x1214($s1)
    ctx->pc = 0x1da010u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4628), GPR_U32(ctx, 3));
    // 0x1da014: 0x7a491220  lq          $t1, 0x1220($s2)
    ctx->pc = 0x1da014u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 18), 4640)));
    // 0x1da018: 0x7a481230  lq          $t0, 0x1230($s2)
    ctx->pc = 0x1da018u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 18), 4656)));
    // 0x1da01c: 0x7a471240  lq          $a3, 0x1240($s2)
    ctx->pc = 0x1da01cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 18), 4672)));
    // 0x1da020: 0x7a431250  lq          $v1, 0x1250($s2)
    ctx->pc = 0x1da020u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 4688)));
    // 0x1da024: 0x7e291220  sq          $t1, 0x1220($s1)
    ctx->pc = 0x1da024u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 4640), GPR_VEC(ctx, 9));
    // 0x1da028: 0x7e281230  sq          $t0, 0x1230($s1)
    ctx->pc = 0x1da028u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 4656), GPR_VEC(ctx, 8));
    // 0x1da02c: 0x7e271240  sq          $a3, 0x1240($s1)
    ctx->pc = 0x1da02cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 4672), GPR_VEC(ctx, 7));
    // 0x1da030: 0x7e231250  sq          $v1, 0x1250($s1)
    ctx->pc = 0x1da030u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 4688), GPR_VEC(ctx, 3));
    // 0x1da034: 0x7a431260  lq          $v1, 0x1260($s2)
    ctx->pc = 0x1da034u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 4704)));
    // 0x1da038: 0x7e231260  sq          $v1, 0x1260($s1)
    ctx->pc = 0x1da038u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 4704), GPR_VEC(ctx, 3));
    // 0x1da03c: 0xc6431270  lwc1        $f3, 0x1270($s2)
    ctx->pc = 0x1da03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1da040: 0xc6421274  lwc1        $f2, 0x1274($s2)
    ctx->pc = 0x1da040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1da044: 0xc6411278  lwc1        $f1, 0x1278($s2)
    ctx->pc = 0x1da044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da048: 0xc640127c  lwc1        $f0, 0x127C($s2)
    ctx->pc = 0x1da048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da04c: 0xe6231270  swc1        $f3, 0x1270($s1)
    ctx->pc = 0x1da04cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4720), bits); }
    // 0x1da050: 0xe6221274  swc1        $f2, 0x1274($s1)
    ctx->pc = 0x1da050u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4724), bits); }
    // 0x1da054: 0xe6211278  swc1        $f1, 0x1278($s1)
    ctx->pc = 0x1da054u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4728), bits); }
    // 0x1da058: 0xe620127c  swc1        $f0, 0x127C($s1)
    ctx->pc = 0x1da058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4732), bits); }
    // 0x1da05c: 0xc6431280  lwc1        $f3, 0x1280($s2)
    ctx->pc = 0x1da05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1da060: 0xc6421284  lwc1        $f2, 0x1284($s2)
    ctx->pc = 0x1da060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1da064: 0xc6411288  lwc1        $f1, 0x1288($s2)
    ctx->pc = 0x1da064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da068: 0xc640128c  lwc1        $f0, 0x128C($s2)
    ctx->pc = 0x1da068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da06c: 0xe6231280  swc1        $f3, 0x1280($s1)
    ctx->pc = 0x1da06cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4736), bits); }
    // 0x1da070: 0xe6221284  swc1        $f2, 0x1284($s1)
    ctx->pc = 0x1da070u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4740), bits); }
    // 0x1da074: 0xe6211288  swc1        $f1, 0x1288($s1)
    ctx->pc = 0x1da074u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4744), bits); }
    // 0x1da078: 0xe620128c  swc1        $f0, 0x128C($s1)
    ctx->pc = 0x1da078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4748), bits); }
    // 0x1da07c: 0xc6431290  lwc1        $f3, 0x1290($s2)
    ctx->pc = 0x1da07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1da080: 0xc6421294  lwc1        $f2, 0x1294($s2)
    ctx->pc = 0x1da080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1da084: 0xc6411298  lwc1        $f1, 0x1298($s2)
    ctx->pc = 0x1da084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da088: 0xc640129c  lwc1        $f0, 0x129C($s2)
    ctx->pc = 0x1da088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da08c: 0xe6231290  swc1        $f3, 0x1290($s1)
    ctx->pc = 0x1da08cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4752), bits); }
    // 0x1da090: 0xe6221294  swc1        $f2, 0x1294($s1)
    ctx->pc = 0x1da090u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4756), bits); }
    // 0x1da094: 0xe6211298  swc1        $f1, 0x1298($s1)
    ctx->pc = 0x1da094u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4760), bits); }
    // 0x1da098: 0xe620129c  swc1        $f0, 0x129C($s1)
    ctx->pc = 0x1da098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4764), bits); }
    // 0x1da09c: 0xc64012a0  lwc1        $f0, 0x12A0($s2)
    ctx->pc = 0x1da09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da0a0: 0xe62012a0  swc1        $f0, 0x12A0($s1)
    ctx->pc = 0x1da0a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4768), bits); }
    // 0x1da0a4: 0x864312a4  lh          $v1, 0x12A4($s2)
    ctx->pc = 0x1da0a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4772)));
    // 0x1da0a8: 0xa62312a4  sh          $v1, 0x12A4($s1)
    ctx->pc = 0x1da0a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4772), (uint16_t)GPR_U32(ctx, 3));
    // 0x1da0ac: 0xc64312a8  lwc1        $f3, 0x12A8($s2)
    ctx->pc = 0x1da0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1da0b0: 0xc64212ac  lwc1        $f2, 0x12AC($s2)
    ctx->pc = 0x1da0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1da0b4: 0xc64112b0  lwc1        $f1, 0x12B0($s2)
    ctx->pc = 0x1da0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da0b8: 0xc64012b4  lwc1        $f0, 0x12B4($s2)
    ctx->pc = 0x1da0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da0bc: 0xe62312a8  swc1        $f3, 0x12A8($s1)
    ctx->pc = 0x1da0bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4776), bits); }
    // 0x1da0c0: 0xe62212ac  swc1        $f2, 0x12AC($s1)
    ctx->pc = 0x1da0c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4780), bits); }
    // 0x1da0c4: 0xe62112b0  swc1        $f1, 0x12B0($s1)
    ctx->pc = 0x1da0c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4784), bits); }
    // 0x1da0c8: 0xe62012b4  swc1        $f0, 0x12B4($s1)
    ctx->pc = 0x1da0c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4788), bits); }
    // 0x1da0cc: 0xc64112b8  lwc1        $f1, 0x12B8($s2)
    ctx->pc = 0x1da0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da0d0: 0xc64012bc  lwc1        $f0, 0x12BC($s2)
    ctx->pc = 0x1da0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da0d4: 0xe62112b8  swc1        $f1, 0x12B8($s1)
    ctx->pc = 0x1da0d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4792), bits); }
    // 0x1da0d8: 0xe62012bc  swc1        $f0, 0x12BC($s1)
    ctx->pc = 0x1da0d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4796), bits); }
    // 0x1da0dc: 0xc64112c0  lwc1        $f1, 0x12C0($s2)
    ctx->pc = 0x1da0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da0e0: 0xc64012c4  lwc1        $f0, 0x12C4($s2)
    ctx->pc = 0x1da0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da0e4: 0xe62112c0  swc1        $f1, 0x12C0($s1)
    ctx->pc = 0x1da0e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4800), bits); }
    // 0x1da0e8: 0xe62012c4  swc1        $f0, 0x12C4($s1)
    ctx->pc = 0x1da0e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4804), bits); }
    // 0x1da0ec: 0xc64112c8  lwc1        $f1, 0x12C8($s2)
    ctx->pc = 0x1da0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da0f0: 0xc64012cc  lwc1        $f0, 0x12CC($s2)
    ctx->pc = 0x1da0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da0f4: 0xe62112c8  swc1        $f1, 0x12C8($s1)
    ctx->pc = 0x1da0f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4808), bits); }
    // 0x1da0f8: 0xe62012cc  swc1        $f0, 0x12CC($s1)
    ctx->pc = 0x1da0f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4812), bits); }
    // 0x1da0fc: 0xc64312d0  lwc1        $f3, 0x12D0($s2)
    ctx->pc = 0x1da0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1da100: 0xc64212d4  lwc1        $f2, 0x12D4($s2)
    ctx->pc = 0x1da100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1da104: 0xc64112d8  lwc1        $f1, 0x12D8($s2)
    ctx->pc = 0x1da104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da108: 0xc64012dc  lwc1        $f0, 0x12DC($s2)
    ctx->pc = 0x1da108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da10c: 0xe62312d0  swc1        $f3, 0x12D0($s1)
    ctx->pc = 0x1da10cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4816), bits); }
    // 0x1da110: 0xe62212d4  swc1        $f2, 0x12D4($s1)
    ctx->pc = 0x1da110u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4820), bits); }
    // 0x1da114: 0xe62112d8  swc1        $f1, 0x12D8($s1)
    ctx->pc = 0x1da114u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4824), bits); }
    // 0x1da118: 0xe62012dc  swc1        $f0, 0x12DC($s1)
    ctx->pc = 0x1da118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4828), bits); }
    // 0x1da11c: 0x864312e0  lh          $v1, 0x12E0($s2)
    ctx->pc = 0x1da11cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4832)));
    // 0x1da120: 0xa62312e0  sh          $v1, 0x12E0($s1)
    ctx->pc = 0x1da120u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4832), (uint16_t)GPR_U32(ctx, 3));
    // 0x1da124: 0x864312e2  lh          $v1, 0x12E2($s2)
    ctx->pc = 0x1da124u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4834)));
    // 0x1da128: 0xa62312e2  sh          $v1, 0x12E2($s1)
    ctx->pc = 0x1da128u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4834), (uint16_t)GPR_U32(ctx, 3));
    // 0x1da12c: 0x864312e4  lh          $v1, 0x12E4($s2)
    ctx->pc = 0x1da12cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4836)));
    // 0x1da130: 0xa62312e4  sh          $v1, 0x12E4($s1)
    ctx->pc = 0x1da130u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4836), (uint16_t)GPR_U32(ctx, 3));
    // 0x1da134: 0xc64012e8  lwc1        $f0, 0x12E8($s2)
    ctx->pc = 0x1da134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da138: 0xe62012e8  swc1        $f0, 0x12E8($s1)
    ctx->pc = 0x1da138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4840), bits); }
    // 0x1da13c: 0xc64012ec  lwc1        $f0, 0x12EC($s2)
    ctx->pc = 0x1da13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da140: 0xe62012ec  swc1        $f0, 0x12EC($s1)
    ctx->pc = 0x1da140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4844), bits); }
    // 0x1da144: 0x864312f0  lh          $v1, 0x12F0($s2)
    ctx->pc = 0x1da144u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4848)));
    // 0x1da148: 0xa62312f0  sh          $v1, 0x12F0($s1)
    ctx->pc = 0x1da148u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4848), (uint16_t)GPR_U32(ctx, 3));
    // 0x1da14c: 0xc64012f4  lwc1        $f0, 0x12F4($s2)
    ctx->pc = 0x1da14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da150: 0xe62012f4  swc1        $f0, 0x12F4($s1)
    ctx->pc = 0x1da150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4852), bits); }
    // 0x1da154: 0xc64012f8  lwc1        $f0, 0x12F8($s2)
    ctx->pc = 0x1da154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da158: 0xe62012f8  swc1        $f0, 0x12F8($s1)
    ctx->pc = 0x1da158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4856), bits); }
    // 0x1da15c: 0xc64012fc  lwc1        $f0, 0x12FC($s2)
    ctx->pc = 0x1da15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da160: 0xe62012fc  swc1        $f0, 0x12FC($s1)
    ctx->pc = 0x1da160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4860), bits); }
    // 0x1da164: 0xc6401300  lwc1        $f0, 0x1300($s2)
    ctx->pc = 0x1da164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da168: 0xe6201300  swc1        $f0, 0x1300($s1)
    ctx->pc = 0x1da168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4864), bits); }
    // 0x1da16c: 0xc6401304  lwc1        $f0, 0x1304($s2)
    ctx->pc = 0x1da16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da170: 0xe6201304  swc1        $f0, 0x1304($s1)
    ctx->pc = 0x1da170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4868), bits); }
    // 0x1da174: 0x86431308  lh          $v1, 0x1308($s2)
    ctx->pc = 0x1da174u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4872)));
    // 0x1da178: 0xa6231308  sh          $v1, 0x1308($s1)
    ctx->pc = 0x1da178u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4872), (uint16_t)GPR_U32(ctx, 3));
    // 0x1da17c: 0xc640130c  lwc1        $f0, 0x130C($s2)
    ctx->pc = 0x1da17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da180: 0xe620130c  swc1        $f0, 0x130C($s1)
    ctx->pc = 0x1da180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4876), bits); }
    // 0x1da184: 0x8e431310  lw          $v1, 0x1310($s2)
    ctx->pc = 0x1da184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4880)));
    // 0x1da188: 0xae231310  sw          $v1, 0x1310($s1)
    ctx->pc = 0x1da188u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4880), GPR_U32(ctx, 3));
    // 0x1da18c: 0x8e431314  lw          $v1, 0x1314($s2)
    ctx->pc = 0x1da18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4884)));
    // 0x1da190: 0xae231314  sw          $v1, 0x1314($s1)
    ctx->pc = 0x1da190u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4884), GPR_U32(ctx, 3));
    // 0x1da194: 0x96431318  lhu         $v1, 0x1318($s2)
    ctx->pc = 0x1da194u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4888)));
    // 0x1da198: 0xa6231318  sh          $v1, 0x1318($s1)
    ctx->pc = 0x1da198u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4888), (uint16_t)GPR_U32(ctx, 3));
    // 0x1da19c: 0x8643131a  lh          $v1, 0x131A($s2)
    ctx->pc = 0x1da19cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4890)));
    // 0x1da1a0: 0xa623131a  sh          $v1, 0x131A($s1)
    ctx->pc = 0x1da1a0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4890), (uint16_t)GPR_U32(ctx, 3));
    // 0x1da1a4: 0xc640131c  lwc1        $f0, 0x131C($s2)
    ctx->pc = 0x1da1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da1a8: 0xe620131c  swc1        $f0, 0x131C($s1)
    ctx->pc = 0x1da1a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4892), bits); }
    // 0x1da1ac: 0x86431320  lh          $v1, 0x1320($s2)
    ctx->pc = 0x1da1acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4896)));
    // 0x1da1b0: 0xa6231320  sh          $v1, 0x1320($s1)
    ctx->pc = 0x1da1b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4896), (uint16_t)GPR_U32(ctx, 3));
    // 0x1da1b4: 0x96431322  lhu         $v1, 0x1322($s2)
    ctx->pc = 0x1da1b4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4898)));
    // 0x1da1b8: 0xa6231322  sh          $v1, 0x1322($s1)
    ctx->pc = 0x1da1b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4898), (uint16_t)GPR_U32(ctx, 3));
    // 0x1da1bc: 0x96431324  lhu         $v1, 0x1324($s2)
    ctx->pc = 0x1da1bcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4900)));
    // 0x1da1c0: 0xa6231324  sh          $v1, 0x1324($s1)
    ctx->pc = 0x1da1c0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4900), (uint16_t)GPR_U32(ctx, 3));
    // 0x1da1c4: 0x96431326  lhu         $v1, 0x1326($s2)
    ctx->pc = 0x1da1c4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4902)));
    // 0x1da1c8: 0xa6231326  sh          $v1, 0x1326($s1)
    ctx->pc = 0x1da1c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4902), (uint16_t)GPR_U32(ctx, 3));
    // 0x1da1cc: 0x8e431328  lw          $v1, 0x1328($s2)
    ctx->pc = 0x1da1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4904)));
    // 0x1da1d0: 0xae231328  sw          $v1, 0x1328($s1)
    ctx->pc = 0x1da1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4904), GPR_U32(ctx, 3));
    // 0x1da1d4: 0x8e43132c  lw          $v1, 0x132C($s2)
    ctx->pc = 0x1da1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4908)));
    // 0x1da1d8: 0xae23132c  sw          $v1, 0x132C($s1)
    ctx->pc = 0x1da1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4908), GPR_U32(ctx, 3));
    // 0x1da1dc: 0x8e431330  lw          $v1, 0x1330($s2)
    ctx->pc = 0x1da1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4912)));
    // 0x1da1e0: 0xae231330  sw          $v1, 0x1330($s1)
    ctx->pc = 0x1da1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4912), GPR_U32(ctx, 3));
    // 0x1da1e4: 0x8e431334  lw          $v1, 0x1334($s2)
    ctx->pc = 0x1da1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4916)));
    // 0x1da1e8: 0xae231334  sw          $v1, 0x1334($s1)
    ctx->pc = 0x1da1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4916), GPR_U32(ctx, 3));
    // 0x1da1ec: 0x86431338  lh          $v1, 0x1338($s2)
    ctx->pc = 0x1da1ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4920)));
    // 0x1da1f0: 0xa6231338  sh          $v1, 0x1338($s1)
    ctx->pc = 0x1da1f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4920), (uint16_t)GPR_U32(ctx, 3));
    // 0x1da1f4: 0x8643133a  lh          $v1, 0x133A($s2)
    ctx->pc = 0x1da1f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4922)));
    // 0x1da1f8: 0xa623133a  sh          $v1, 0x133A($s1)
    ctx->pc = 0x1da1f8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4922), (uint16_t)GPR_U32(ctx, 3));
    // 0x1da1fc: 0xc642133c  lwc1        $f2, 0x133C($s2)
    ctx->pc = 0x1da1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1da200: 0xc6411340  lwc1        $f1, 0x1340($s2)
    ctx->pc = 0x1da200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da204: 0xc6401344  lwc1        $f0, 0x1344($s2)
    ctx->pc = 0x1da204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da208: 0xe622133c  swc1        $f2, 0x133C($s1)
    ctx->pc = 0x1da208u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4924), bits); }
    // 0x1da20c: 0xe6211340  swc1        $f1, 0x1340($s1)
    ctx->pc = 0x1da20cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4928), bits); }
    // 0x1da210: 0xe6201344  swc1        $f0, 0x1344($s1)
    ctx->pc = 0x1da210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4932), bits); }
    // 0x1da214: 0x8e431348  lw          $v1, 0x1348($s2)
    ctx->pc = 0x1da214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4936)));
    // 0x1da218: 0xae231348  sw          $v1, 0x1348($s1)
    ctx->pc = 0x1da218u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4936), GPR_U32(ctx, 3));
    // 0x1da21c: 0x8e43134c  lw          $v1, 0x134C($s2)
    ctx->pc = 0x1da21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4940)));
    // 0x1da220: 0xae23134c  sw          $v1, 0x134C($s1)
    ctx->pc = 0x1da220u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4940), GPR_U32(ctx, 3));
    // 0x1da224: 0x8e431350  lw          $v1, 0x1350($s2)
    ctx->pc = 0x1da224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4944)));
    // 0x1da228: 0xae231350  sw          $v1, 0x1350($s1)
    ctx->pc = 0x1da228u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4944), GPR_U32(ctx, 3));
    // 0x1da22c: 0x86431354  lh          $v1, 0x1354($s2)
    ctx->pc = 0x1da22cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4948)));
    // 0x1da230: 0xa6231354  sh          $v1, 0x1354($s1)
    ctx->pc = 0x1da230u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4948), (uint16_t)GPR_U32(ctx, 3));
    // 0x1da234: 0x86431356  lh          $v1, 0x1356($s2)
    ctx->pc = 0x1da234u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4950)));
    // 0x1da238: 0xa6231356  sh          $v1, 0x1356($s1)
    ctx->pc = 0x1da238u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4950), (uint16_t)GPR_U32(ctx, 3));
    // 0x1da23c: 0x82431358  lb          $v1, 0x1358($s2)
    ctx->pc = 0x1da23cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4952)));
    // 0x1da240: 0xa2231358  sb          $v1, 0x1358($s1)
    ctx->pc = 0x1da240u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4952), (uint8_t)GPR_U32(ctx, 3));
label_1da244:
    // 0x1da244: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x1da244u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1da248: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1da248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1da24c: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x1da24cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x1da250: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1da250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1da254: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x1da254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1da258: 0x0  nop
    ctx->pc = 0x1da258u;
    // NOP
    // 0x1da25c: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1DA25Cu;
    {
        const bool branch_taken_0x1da25c = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x1da25c) {
            ctx->pc = 0x1DA244u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1da244;
        }
    }
    ctx->pc = 0x1DA264u;
    // 0x1da264: 0xc6431470  lwc1        $f3, 0x1470($s2)
    ctx->pc = 0x1da264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1da268: 0xc6421474  lwc1        $f2, 0x1474($s2)
    ctx->pc = 0x1da268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1da26c: 0xc6411478  lwc1        $f1, 0x1478($s2)
    ctx->pc = 0x1da26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da270: 0xc640147c  lwc1        $f0, 0x147C($s2)
    ctx->pc = 0x1da270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da274: 0xe6231470  swc1        $f3, 0x1470($s1)
    ctx->pc = 0x1da274u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5232), bits); }
    // 0x1da278: 0xe6221474  swc1        $f2, 0x1474($s1)
    ctx->pc = 0x1da278u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5236), bits); }
    // 0x1da27c: 0xe6211478  swc1        $f1, 0x1478($s1)
    ctx->pc = 0x1da27cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5240), bits); }
    // 0x1da280: 0xe620147c  swc1        $f0, 0x147C($s1)
    ctx->pc = 0x1da280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5244), bits); }
    // 0x1da284: 0xc6401480  lwc1        $f0, 0x1480($s2)
    ctx->pc = 0x1da284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da288: 0xe6201480  swc1        $f0, 0x1480($s1)
    ctx->pc = 0x1da288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5248), bits); }
    // 0x1da28c: 0xc6401484  lwc1        $f0, 0x1484($s2)
    ctx->pc = 0x1da28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da290: 0xe6201484  swc1        $f0, 0x1484($s1)
    ctx->pc = 0x1da290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5252), bits); }
    // 0x1da294: 0x8e431488  lw          $v1, 0x1488($s2)
    ctx->pc = 0x1da294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5256)));
    // 0x1da298: 0xae231488  sw          $v1, 0x1488($s1)
    ctx->pc = 0x1da298u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5256), GPR_U32(ctx, 3));
    // 0x1da29c: 0x8e43148c  lw          $v1, 0x148C($s2)
    ctx->pc = 0x1da29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5260)));
    // 0x1da2a0: 0xae23148c  sw          $v1, 0x148C($s1)
    ctx->pc = 0x1da2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5260), GPR_U32(ctx, 3));
    // 0x1da2a4: 0xc6401490  lwc1        $f0, 0x1490($s2)
    ctx->pc = 0x1da2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da2a8: 0xe6201490  swc1        $f0, 0x1490($s1)
    ctx->pc = 0x1da2a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5264), bits); }
    // 0x1da2ac: 0xc6401494  lwc1        $f0, 0x1494($s2)
    ctx->pc = 0x1da2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da2b0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DA2B0u;
    {
        const bool branch_taken_0x1da2b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA2B0u;
            // 0x1da2b4: 0xe6201494  swc1        $f0, 0x1494($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5268), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da2b0) {
            ctx->pc = 0x1DA2C8u;
            goto label_1da2c8;
        }
    }
    ctx->pc = 0x1DA2B8u;
    // 0x1da2b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1da2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da2bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1da2bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da2c0: 0xc05c8e0  jal         func_172380
    ctx->pc = 0x1DA2C0u;
    SET_GPR_U32(ctx, 31, 0x1DA2C8u);
    ctx->pc = 0x1DA2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA2C0u;
            // 0x1da2c4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172380u;
    if (runtime->hasFunction(0x172380u)) {
        auto targetFn = runtime->lookupFunction(0x172380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA2C8u; }
        if (ctx->pc != 0x1DA2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Copy__12CActionCharaFR12CActionCharaP9mgCMemory_0x172380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA2C8u; }
        if (ctx->pc != 0x1DA2C8u) { return; }
    }
    ctx->pc = 0x1DA2C8u;
label_1da2c8:
    // 0x1da2c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1da2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1da2cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1da2ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1da2d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1da2d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da2d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1da2d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da2d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA2D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA2D8u;
            // 0x1da2dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DA2E0u;
}
