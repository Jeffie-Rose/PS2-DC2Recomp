#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Copy__11CCharacter2FR11CCharacter2P9mgCMemory
// Address: 0x178c70 - 0x1796d4
void Copy__11CCharacter2FR11CCharacter2P9mgCMemory_0x178c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Copy__11CCharacter2FR11CCharacter2P9mgCMemory_0x178c70");
#endif

    switch (ctx->pc) {
        case 0x178cb8u: goto label_178cb8;
        case 0x178d14u: goto label_178d14;
        case 0x178d40u: goto label_178d40;
        case 0x178decu: goto label_178dec;
        case 0x178e68u: goto label_178e68;
        case 0x178f84u: goto label_178f84;
        case 0x178fb0u: goto label_178fb0;
        case 0x1791b4u: goto label_1791b4;
        case 0x1791f8u: goto label_1791f8;
        case 0x179238u: goto label_179238;
        case 0x179240u: goto label_179240;
        case 0x17924cu: goto label_17924c;
        case 0x179260u: goto label_179260;
        case 0x17927cu: goto label_17927c;
        case 0x17930cu: goto label_17930c;
        case 0x179360u: goto label_179360;
        case 0x179378u: goto label_179378;
        case 0x179394u: goto label_179394;
        case 0x1793a4u: goto label_1793a4;
        case 0x1793c0u: goto label_1793c0;
        case 0x1793e0u: goto label_1793e0;
        case 0x17940cu: goto label_17940c;
        case 0x179430u: goto label_179430;
        case 0x17945cu: goto label_17945c;
        case 0x17949cu: goto label_17949c;
        case 0x1794c4u: goto label_1794c4;
        case 0x17951cu: goto label_17951c;
        case 0x179534u: goto label_179534;
        case 0x179550u: goto label_179550;
        case 0x179574u: goto label_179574;
        case 0x1795ccu: goto label_1795cc;
        case 0x179604u: goto label_179604;
        case 0x17961cu: goto label_17961c;
        case 0x179638u: goto label_179638;
        case 0x179644u: goto label_179644;
        case 0x179688u: goto label_179688;
        default: break;
    }

    ctx->pc = 0x178c70u;

    // 0x178c70: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x178c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x178c74: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x178c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x178c78: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x178c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x178c7c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x178c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x178c80: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x178c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x178c84: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x178c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x178c88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x178c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x178c8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x178c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x178c90: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x178c90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x178c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x178c98: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x178c98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c9c: 0x8cc30028  lw          $v1, 0x28($a2)
    ctx->pc = 0x178c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x178ca0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x178ca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178ca4: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x178ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x178ca8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x178ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178cac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x178cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178cb0: 0xc05e5b8  jal         func_1796E0
    ctx->pc = 0x178CB0u;
    SET_GPR_U32(ctx, 31, 0x178CB8u);
    ctx->pc = 0x178CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178CB0u;
            // 0x178cb4: 0x629823  subu        $s3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1796E0u;
    if (runtime->hasFunction(0x1796E0u)) {
        auto targetFn = runtime->lookupFunction(0x1796E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178CB8u; }
        if (ctx->pc != 0x178CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__7CObjectFRC7CObject_0x1796e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178CB8u; }
        if (ctx->pc != 0x178CB8u) { return; }
    }
    ctx->pc = 0x178CB8u;
label_178cb8:
    // 0x178cb8: 0x8e430070  lw          $v1, 0x70($s2)
    ctx->pc = 0x178cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x178cbc: 0x264700b0  addiu       $a3, $s2, 0xB0
    ctx->pc = 0x178cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
    // 0x178cc0: 0x262600b0  addiu       $a2, $s1, 0xB0
    ctx->pc = 0x178cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x178cc4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x178cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x178cc8: 0xae230070  sw          $v1, 0x70($s1)
    ctx->pc = 0x178cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 3));
    // 0x178ccc: 0xc6430080  lwc1        $f3, 0x80($s2)
    ctx->pc = 0x178cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x178cd0: 0xc6420084  lwc1        $f2, 0x84($s2)
    ctx->pc = 0x178cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x178cd4: 0xc6410088  lwc1        $f1, 0x88($s2)
    ctx->pc = 0x178cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x178cd8: 0xc640008c  lwc1        $f0, 0x8C($s2)
    ctx->pc = 0x178cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178cdc: 0xe6230080  swc1        $f3, 0x80($s1)
    ctx->pc = 0x178cdcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
    // 0x178ce0: 0xe6220084  swc1        $f2, 0x84($s1)
    ctx->pc = 0x178ce0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
    // 0x178ce4: 0xe6210088  swc1        $f1, 0x88($s1)
    ctx->pc = 0x178ce4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
    // 0x178ce8: 0xe620008c  swc1        $f0, 0x8C($s1)
    ctx->pc = 0x178ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
    // 0x178cec: 0xc6430090  lwc1        $f3, 0x90($s2)
    ctx->pc = 0x178cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x178cf0: 0xc6420094  lwc1        $f2, 0x94($s2)
    ctx->pc = 0x178cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x178cf4: 0xc6410098  lwc1        $f1, 0x98($s2)
    ctx->pc = 0x178cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x178cf8: 0xc640009c  lwc1        $f0, 0x9C($s2)
    ctx->pc = 0x178cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178cfc: 0xe6230090  swc1        $f3, 0x90($s1)
    ctx->pc = 0x178cfcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
    // 0x178d00: 0xe6220094  swc1        $f2, 0x94($s1)
    ctx->pc = 0x178d00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
    // 0x178d04: 0xe6210098  swc1        $f1, 0x98($s1)
    ctx->pc = 0x178d04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
    // 0x178d08: 0xe620009c  swc1        $f0, 0x9C($s1)
    ctx->pc = 0x178d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 156), bits); }
    // 0x178d0c: 0xc64000a0  lwc1        $f0, 0xA0($s2)
    ctx->pc = 0x178d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178d10: 0xe62000a0  swc1        $f0, 0xA0($s1)
    ctx->pc = 0x178d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 160), bits); }
label_178d14:
    // 0x178d14: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x178d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x178d18: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x178d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x178d1c: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x178d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x178d20: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x178d20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x178d24: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x178d24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x178d28: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x178d28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x178d2c: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x178D2Cu;
    {
        const bool branch_taken_0x178d2c = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x178D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178D2Cu;
            // 0x178d30: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178d2c) {
            ctx->pc = 0x178D14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_178d14;
        }
    }
    ctx->pc = 0x178D34u;
    // 0x178d34: 0x264700f0  addiu       $a3, $s2, 0xF0
    ctx->pc = 0x178d34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
    // 0x178d38: 0x262600f0  addiu       $a2, $s1, 0xF0
    ctx->pc = 0x178d38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x178d3c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x178d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_178d40:
    // 0x178d40: 0x80e40000  lb          $a0, 0x0($a3)
    ctx->pc = 0x178d40u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x178d44: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x178d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x178d48: 0x80e30001  lb          $v1, 0x1($a3)
    ctx->pc = 0x178d48u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x178d4c: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x178d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x178d50: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x178d50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x178d54: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x178d54u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x178d58: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x178D58u;
    {
        const bool branch_taken_0x178d58 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x178D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178D58u;
            // 0x178d5c: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178d58) {
            ctx->pc = 0x178D40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_178d40;
        }
    }
    ctx->pc = 0x178D60u;
    // 0x178d60: 0xc6400100  lwc1        $f0, 0x100($s2)
    ctx->pc = 0x178d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178d64: 0x26470140  addiu       $a3, $s2, 0x140
    ctx->pc = 0x178d64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
    // 0x178d68: 0x26260140  addiu       $a2, $s1, 0x140
    ctx->pc = 0x178d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
    // 0x178d6c: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x178d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x178d70: 0xe6200100  swc1        $f0, 0x100($s1)
    ctx->pc = 0x178d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 256), bits); }
    // 0x178d74: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x178d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x178d78: 0xae230104  sw          $v1, 0x104($s1)
    ctx->pc = 0x178d78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 3));
    // 0x178d7c: 0x8e430108  lw          $v1, 0x108($s2)
    ctx->pc = 0x178d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
    // 0x178d80: 0xae230108  sw          $v1, 0x108($s1)
    ctx->pc = 0x178d80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 3));
    // 0x178d84: 0xc640010c  lwc1        $f0, 0x10C($s2)
    ctx->pc = 0x178d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178d88: 0xe620010c  swc1        $f0, 0x10C($s1)
    ctx->pc = 0x178d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 268), bits); }
    // 0x178d8c: 0xc6400110  lwc1        $f0, 0x110($s2)
    ctx->pc = 0x178d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178d90: 0xe6200110  swc1        $f0, 0x110($s1)
    ctx->pc = 0x178d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 272), bits); }
    // 0x178d94: 0xc6400114  lwc1        $f0, 0x114($s2)
    ctx->pc = 0x178d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178d98: 0xe6200114  swc1        $f0, 0x114($s1)
    ctx->pc = 0x178d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 276), bits); }
    // 0x178d9c: 0x8e430118  lw          $v1, 0x118($s2)
    ctx->pc = 0x178d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 280)));
    // 0x178da0: 0xae230118  sw          $v1, 0x118($s1)
    ctx->pc = 0x178da0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 3));
    // 0x178da4: 0x8e43011c  lw          $v1, 0x11C($s2)
    ctx->pc = 0x178da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 284)));
    // 0x178da8: 0xae23011c  sw          $v1, 0x11C($s1)
    ctx->pc = 0x178da8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 3));
    // 0x178dac: 0x86430120  lh          $v1, 0x120($s2)
    ctx->pc = 0x178dacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 288)));
    // 0x178db0: 0xa6230120  sh          $v1, 0x120($s1)
    ctx->pc = 0x178db0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 288), (uint16_t)GPR_U32(ctx, 3));
    // 0x178db4: 0x8e430124  lw          $v1, 0x124($s2)
    ctx->pc = 0x178db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 292)));
    // 0x178db8: 0xae230124  sw          $v1, 0x124($s1)
    ctx->pc = 0x178db8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 3));
    // 0x178dbc: 0x8e430128  lw          $v1, 0x128($s2)
    ctx->pc = 0x178dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 296)));
    // 0x178dc0: 0xae230128  sw          $v1, 0x128($s1)
    ctx->pc = 0x178dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 3));
    // 0x178dc4: 0x8e43012c  lw          $v1, 0x12C($s2)
    ctx->pc = 0x178dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 300)));
    // 0x178dc8: 0xae23012c  sw          $v1, 0x12C($s1)
    ctx->pc = 0x178dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 3));
    // 0x178dcc: 0x8e430130  lw          $v1, 0x130($s2)
    ctx->pc = 0x178dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x178dd0: 0xae230130  sw          $v1, 0x130($s1)
    ctx->pc = 0x178dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 3));
    // 0x178dd4: 0x8e430134  lw          $v1, 0x134($s2)
    ctx->pc = 0x178dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 308)));
    // 0x178dd8: 0xae230134  sw          $v1, 0x134($s1)
    ctx->pc = 0x178dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 3));
    // 0x178ddc: 0xc6410138  lwc1        $f1, 0x138($s2)
    ctx->pc = 0x178ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x178de0: 0xc640013c  lwc1        $f0, 0x13C($s2)
    ctx->pc = 0x178de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178de4: 0xe6210138  swc1        $f1, 0x138($s1)
    ctx->pc = 0x178de4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 312), bits); }
    // 0x178de8: 0xe620013c  swc1        $f0, 0x13C($s1)
    ctx->pc = 0x178de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 316), bits); }
label_178dec:
    // 0x178dec: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x178decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x178df0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x178df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x178df4: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x178df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x178df8: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x178df8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x178dfc: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x178dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x178e00: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x178e00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x178e04: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x178E04u;
    {
        const bool branch_taken_0x178e04 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x178E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178E04u;
            // 0x178e08: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178e04) {
            ctx->pc = 0x178DECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_178dec;
        }
    }
    ctx->pc = 0x178E0Cu;
    // 0x178e0c: 0x8e4302c0  lw          $v1, 0x2C0($s2)
    ctx->pc = 0x178e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 704)));
    // 0x178e10: 0x264702e8  addiu       $a3, $s2, 0x2E8
    ctx->pc = 0x178e10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 744));
    // 0x178e14: 0x262602e8  addiu       $a2, $s1, 0x2E8
    ctx->pc = 0x178e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 744));
    // 0x178e18: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x178e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x178e1c: 0xae2302c0  sw          $v1, 0x2C0($s1)
    ctx->pc = 0x178e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 704), GPR_U32(ctx, 3));
    // 0x178e20: 0xc64302c4  lwc1        $f3, 0x2C4($s2)
    ctx->pc = 0x178e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x178e24: 0xc64202c8  lwc1        $f2, 0x2C8($s2)
    ctx->pc = 0x178e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x178e28: 0xc64102cc  lwc1        $f1, 0x2CC($s2)
    ctx->pc = 0x178e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x178e2c: 0xc64002d0  lwc1        $f0, 0x2D0($s2)
    ctx->pc = 0x178e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178e30: 0xe62302c4  swc1        $f3, 0x2C4($s1)
    ctx->pc = 0x178e30u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 708), bits); }
    // 0x178e34: 0xe62202c8  swc1        $f2, 0x2C8($s1)
    ctx->pc = 0x178e34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 712), bits); }
    // 0x178e38: 0xe62102cc  swc1        $f1, 0x2CC($s1)
    ctx->pc = 0x178e38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 716), bits); }
    // 0x178e3c: 0xe62002d0  swc1        $f0, 0x2D0($s1)
    ctx->pc = 0x178e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 720), bits); }
    // 0x178e40: 0xc64102d4  lwc1        $f1, 0x2D4($s2)
    ctx->pc = 0x178e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x178e44: 0xc64002d8  lwc1        $f0, 0x2D8($s2)
    ctx->pc = 0x178e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178e48: 0xe62102d4  swc1        $f1, 0x2D4($s1)
    ctx->pc = 0x178e48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 724), bits); }
    // 0x178e4c: 0xe62002d8  swc1        $f0, 0x2D8($s1)
    ctx->pc = 0x178e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 728), bits); }
    // 0x178e50: 0x8e4302dc  lw          $v1, 0x2DC($s2)
    ctx->pc = 0x178e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 732)));
    // 0x178e54: 0xae2302dc  sw          $v1, 0x2DC($s1)
    ctx->pc = 0x178e54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 732), GPR_U32(ctx, 3));
    // 0x178e58: 0x8e4302e0  lw          $v1, 0x2E0($s2)
    ctx->pc = 0x178e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 736)));
    // 0x178e5c: 0xae2302e0  sw          $v1, 0x2E0($s1)
    ctx->pc = 0x178e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 736), GPR_U32(ctx, 3));
    // 0x178e60: 0x8e4302e4  lw          $v1, 0x2E4($s2)
    ctx->pc = 0x178e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 740)));
    // 0x178e64: 0xae2302e4  sw          $v1, 0x2E4($s1)
    ctx->pc = 0x178e64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 740), GPR_U32(ctx, 3));
label_178e68:
    // 0x178e68: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x178e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x178e6c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x178e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x178e70: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x178e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x178e74: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x178e74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x178e78: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x178e78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x178e7c: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x178e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x178e80: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x178E80u;
    {
        const bool branch_taken_0x178e80 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x178E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178E80u;
            // 0x178e84: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178e80) {
            ctx->pc = 0x178E68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_178e68;
        }
    }
    ctx->pc = 0x178E88u;
    // 0x178e88: 0x8e430348  lw          $v1, 0x348($s2)
    ctx->pc = 0x178e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 840)));
    // 0x178e8c: 0x264703c0  addiu       $a3, $s2, 0x3C0
    ctx->pc = 0x178e8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 960));
    // 0x178e90: 0x262603c0  addiu       $a2, $s1, 0x3C0
    ctx->pc = 0x178e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 960));
    // 0x178e94: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x178e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x178e98: 0xae230348  sw          $v1, 0x348($s1)
    ctx->pc = 0x178e98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 840), GPR_U32(ctx, 3));
    // 0x178e9c: 0x8e43034c  lw          $v1, 0x34C($s2)
    ctx->pc = 0x178e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 844)));
    // 0x178ea0: 0xae23034c  sw          $v1, 0x34C($s1)
    ctx->pc = 0x178ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 844), GPR_U32(ctx, 3));
    // 0x178ea4: 0x8e430350  lw          $v1, 0x350($s2)
    ctx->pc = 0x178ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 848)));
    // 0x178ea8: 0xae230350  sw          $v1, 0x350($s1)
    ctx->pc = 0x178ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 848), GPR_U32(ctx, 3));
    // 0x178eac: 0x8e430354  lw          $v1, 0x354($s2)
    ctx->pc = 0x178eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 852)));
    // 0x178eb0: 0xae230354  sw          $v1, 0x354($s1)
    ctx->pc = 0x178eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 852), GPR_U32(ctx, 3));
    // 0x178eb4: 0x8e430358  lw          $v1, 0x358($s2)
    ctx->pc = 0x178eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 856)));
    // 0x178eb8: 0xae230358  sw          $v1, 0x358($s1)
    ctx->pc = 0x178eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 856), GPR_U32(ctx, 3));
    // 0x178ebc: 0xc642035c  lwc1        $f2, 0x35C($s2)
    ctx->pc = 0x178ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x178ec0: 0xc6410360  lwc1        $f1, 0x360($s2)
    ctx->pc = 0x178ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x178ec4: 0xc6400364  lwc1        $f0, 0x364($s2)
    ctx->pc = 0x178ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178ec8: 0xe622035c  swc1        $f2, 0x35C($s1)
    ctx->pc = 0x178ec8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 860), bits); }
    // 0x178ecc: 0xe6210360  swc1        $f1, 0x360($s1)
    ctx->pc = 0x178eccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 864), bits); }
    // 0x178ed0: 0xe6200364  swc1        $f0, 0x364($s1)
    ctx->pc = 0x178ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 868), bits); }
    // 0x178ed4: 0x8e430368  lw          $v1, 0x368($s2)
    ctx->pc = 0x178ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 872)));
    // 0x178ed8: 0xae230368  sw          $v1, 0x368($s1)
    ctx->pc = 0x178ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 872), GPR_U32(ctx, 3));
    // 0x178edc: 0x8e43036c  lw          $v1, 0x36C($s2)
    ctx->pc = 0x178edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 876)));
    // 0x178ee0: 0xae23036c  sw          $v1, 0x36C($s1)
    ctx->pc = 0x178ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 876), GPR_U32(ctx, 3));
    // 0x178ee4: 0x8e430370  lw          $v1, 0x370($s2)
    ctx->pc = 0x178ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 880)));
    // 0x178ee8: 0xae230370  sw          $v1, 0x370($s1)
    ctx->pc = 0x178ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 880), GPR_U32(ctx, 3));
    // 0x178eec: 0x8e430374  lw          $v1, 0x374($s2)
    ctx->pc = 0x178eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 884)));
    // 0x178ef0: 0xae230374  sw          $v1, 0x374($s1)
    ctx->pc = 0x178ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 884), GPR_U32(ctx, 3));
    // 0x178ef4: 0x8e430378  lw          $v1, 0x378($s2)
    ctx->pc = 0x178ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 888)));
    // 0x178ef8: 0xae230378  sw          $v1, 0x378($s1)
    ctx->pc = 0x178ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 888), GPR_U32(ctx, 3));
    // 0x178efc: 0x8e43037c  lw          $v1, 0x37C($s2)
    ctx->pc = 0x178efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 892)));
    // 0x178f00: 0xae23037c  sw          $v1, 0x37C($s1)
    ctx->pc = 0x178f00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 892), GPR_U32(ctx, 3));
    // 0x178f04: 0x8e430380  lw          $v1, 0x380($s2)
    ctx->pc = 0x178f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
    // 0x178f08: 0xae230380  sw          $v1, 0x380($s1)
    ctx->pc = 0x178f08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 896), GPR_U32(ctx, 3));
    // 0x178f0c: 0x8e430384  lw          $v1, 0x384($s2)
    ctx->pc = 0x178f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 900)));
    // 0x178f10: 0xae230384  sw          $v1, 0x384($s1)
    ctx->pc = 0x178f10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 900), GPR_U32(ctx, 3));
    // 0x178f14: 0xc6400388  lwc1        $f0, 0x388($s2)
    ctx->pc = 0x178f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178f18: 0xe6200388  swc1        $f0, 0x388($s1)
    ctx->pc = 0x178f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 904), bits); }
    // 0x178f1c: 0xc640038c  lwc1        $f0, 0x38C($s2)
    ctx->pc = 0x178f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178f20: 0xe620038c  swc1        $f0, 0x38C($s1)
    ctx->pc = 0x178f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 908), bits); }
    // 0x178f24: 0xc6400390  lwc1        $f0, 0x390($s2)
    ctx->pc = 0x178f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178f28: 0xe6200390  swc1        $f0, 0x390($s1)
    ctx->pc = 0x178f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 912), bits); }
    // 0x178f2c: 0x8e430394  lw          $v1, 0x394($s2)
    ctx->pc = 0x178f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 916)));
    // 0x178f30: 0xae230394  sw          $v1, 0x394($s1)
    ctx->pc = 0x178f30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 916), GPR_U32(ctx, 3));
    // 0x178f34: 0x8e430398  lw          $v1, 0x398($s2)
    ctx->pc = 0x178f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 920)));
    // 0x178f38: 0xae230398  sw          $v1, 0x398($s1)
    ctx->pc = 0x178f38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 920), GPR_U32(ctx, 3));
    // 0x178f3c: 0x8e43039c  lw          $v1, 0x39C($s2)
    ctx->pc = 0x178f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 924)));
    // 0x178f40: 0xae23039c  sw          $v1, 0x39C($s1)
    ctx->pc = 0x178f40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 924), GPR_U32(ctx, 3));
    // 0x178f44: 0xc64003a0  lwc1        $f0, 0x3A0($s2)
    ctx->pc = 0x178f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178f48: 0xe62003a0  swc1        $f0, 0x3A0($s1)
    ctx->pc = 0x178f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 928), bits); }
    // 0x178f4c: 0x8e4303a4  lw          $v1, 0x3A4($s2)
    ctx->pc = 0x178f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 932)));
    // 0x178f50: 0xae2303a4  sw          $v1, 0x3A4($s1)
    ctx->pc = 0x178f50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 932), GPR_U32(ctx, 3));
    // 0x178f54: 0x8e4303a8  lw          $v1, 0x3A8($s2)
    ctx->pc = 0x178f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 936)));
    // 0x178f58: 0xae2303a8  sw          $v1, 0x3A8($s1)
    ctx->pc = 0x178f58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 936), GPR_U32(ctx, 3));
    // 0x178f5c: 0x8e4303ac  lw          $v1, 0x3AC($s2)
    ctx->pc = 0x178f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 940)));
    // 0x178f60: 0xae2303ac  sw          $v1, 0x3AC($s1)
    ctx->pc = 0x178f60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 940), GPR_U32(ctx, 3));
    // 0x178f64: 0x8e4303b0  lw          $v1, 0x3B0($s2)
    ctx->pc = 0x178f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 944)));
    // 0x178f68: 0xae2303b0  sw          $v1, 0x3B0($s1)
    ctx->pc = 0x178f68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 944), GPR_U32(ctx, 3));
    // 0x178f6c: 0x8e4303b4  lw          $v1, 0x3B4($s2)
    ctx->pc = 0x178f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 948)));
    // 0x178f70: 0xae2303b4  sw          $v1, 0x3B4($s1)
    ctx->pc = 0x178f70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 948), GPR_U32(ctx, 3));
    // 0x178f74: 0x8e4303b8  lw          $v1, 0x3B8($s2)
    ctx->pc = 0x178f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 952)));
    // 0x178f78: 0xae2303b8  sw          $v1, 0x3B8($s1)
    ctx->pc = 0x178f78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 952), GPR_U32(ctx, 3));
    // 0x178f7c: 0x8e4303bc  lw          $v1, 0x3BC($s2)
    ctx->pc = 0x178f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 956)));
    // 0x178f80: 0xae2303bc  sw          $v1, 0x3BC($s1)
    ctx->pc = 0x178f80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 956), GPR_U32(ctx, 3));
label_178f84:
    // 0x178f84: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x178f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x178f88: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x178f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x178f8c: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x178f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x178f90: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x178f90u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x178f94: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x178f94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x178f98: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x178f98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x178f9c: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x178F9Cu;
    {
        const bool branch_taken_0x178f9c = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x178FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178F9Cu;
            // 0x178fa0: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178f9c) {
            ctx->pc = 0x178F84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_178f84;
        }
    }
    ctx->pc = 0x178FA4u;
    // 0x178fa4: 0x26470460  addiu       $a3, $s2, 0x460
    ctx->pc = 0x178fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1120));
    // 0x178fa8: 0x26260460  addiu       $a2, $s1, 0x460
    ctx->pc = 0x178fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1120));
    // 0x178fac: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x178facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_178fb0:
    // 0x178fb0: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x178fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x178fb4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x178fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x178fb8: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x178fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x178fbc: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x178fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x178fc0: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x178fc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x178fc4: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x178fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x178fc8: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x178FC8u;
    {
        const bool branch_taken_0x178fc8 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x178FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178FC8u;
            // 0x178fcc: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178fc8) {
            ctx->pc = 0x178FB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_178fb0;
        }
    }
    ctx->pc = 0x178FD0u;
    // 0x178fd0: 0x8e430500  lw          $v1, 0x500($s2)
    ctx->pc = 0x178fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1280)));
    // 0x178fd4: 0x264705ec  addiu       $a3, $s2, 0x5EC
    ctx->pc = 0x178fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1516));
    // 0x178fd8: 0x262605ec  addiu       $a2, $s1, 0x5EC
    ctx->pc = 0x178fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1516));
    // 0x178fdc: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x178fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x178fe0: 0xae230500  sw          $v1, 0x500($s1)
    ctx->pc = 0x178fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1280), GPR_U32(ctx, 3));
    // 0x178fe4: 0x8e430504  lw          $v1, 0x504($s2)
    ctx->pc = 0x178fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1284)));
    // 0x178fe8: 0xae230504  sw          $v1, 0x504($s1)
    ctx->pc = 0x178fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1284), GPR_U32(ctx, 3));
    // 0x178fec: 0xc6400508  lwc1        $f0, 0x508($s2)
    ctx->pc = 0x178fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178ff0: 0xe6200508  swc1        $f0, 0x508($s1)
    ctx->pc = 0x178ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1288), bits); }
    // 0x178ff4: 0xc640050c  lwc1        $f0, 0x50C($s2)
    ctx->pc = 0x178ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178ff8: 0xe620050c  swc1        $f0, 0x50C($s1)
    ctx->pc = 0x178ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1292), bits); }
    // 0x178ffc: 0xc6430510  lwc1        $f3, 0x510($s2)
    ctx->pc = 0x178ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x179000: 0xc6420514  lwc1        $f2, 0x514($s2)
    ctx->pc = 0x179000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x179004: 0xc6410518  lwc1        $f1, 0x518($s2)
    ctx->pc = 0x179004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179008: 0xc640051c  lwc1        $f0, 0x51C($s2)
    ctx->pc = 0x179008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17900c: 0xe6230510  swc1        $f3, 0x510($s1)
    ctx->pc = 0x17900cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1296), bits); }
    // 0x179010: 0xe6220514  swc1        $f2, 0x514($s1)
    ctx->pc = 0x179010u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1300), bits); }
    // 0x179014: 0xe6210518  swc1        $f1, 0x518($s1)
    ctx->pc = 0x179014u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1304), bits); }
    // 0x179018: 0xe620051c  swc1        $f0, 0x51C($s1)
    ctx->pc = 0x179018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1308), bits); }
    // 0x17901c: 0xc6430520  lwc1        $f3, 0x520($s2)
    ctx->pc = 0x17901cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x179020: 0xc6420524  lwc1        $f2, 0x524($s2)
    ctx->pc = 0x179020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x179024: 0xc6410528  lwc1        $f1, 0x528($s2)
    ctx->pc = 0x179024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179028: 0xc640052c  lwc1        $f0, 0x52C($s2)
    ctx->pc = 0x179028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17902c: 0xe6230520  swc1        $f3, 0x520($s1)
    ctx->pc = 0x17902cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1312), bits); }
    // 0x179030: 0xe6220524  swc1        $f2, 0x524($s1)
    ctx->pc = 0x179030u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1316), bits); }
    // 0x179034: 0xe6210528  swc1        $f1, 0x528($s1)
    ctx->pc = 0x179034u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1320), bits); }
    // 0x179038: 0xe620052c  swc1        $f0, 0x52C($s1)
    ctx->pc = 0x179038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1324), bits); }
    // 0x17903c: 0xc6430530  lwc1        $f3, 0x530($s2)
    ctx->pc = 0x17903cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x179040: 0xc6420534  lwc1        $f2, 0x534($s2)
    ctx->pc = 0x179040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x179044: 0xc6410538  lwc1        $f1, 0x538($s2)
    ctx->pc = 0x179044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179048: 0xc640053c  lwc1        $f0, 0x53C($s2)
    ctx->pc = 0x179048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17904c: 0xe6230530  swc1        $f3, 0x530($s1)
    ctx->pc = 0x17904cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1328), bits); }
    // 0x179050: 0xe6220534  swc1        $f2, 0x534($s1)
    ctx->pc = 0x179050u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1332), bits); }
    // 0x179054: 0xe6210538  swc1        $f1, 0x538($s1)
    ctx->pc = 0x179054u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1336), bits); }
    // 0x179058: 0xe620053c  swc1        $f0, 0x53C($s1)
    ctx->pc = 0x179058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1340), bits); }
    // 0x17905c: 0xc6430540  lwc1        $f3, 0x540($s2)
    ctx->pc = 0x17905cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x179060: 0xc6420544  lwc1        $f2, 0x544($s2)
    ctx->pc = 0x179060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x179064: 0xc6410548  lwc1        $f1, 0x548($s2)
    ctx->pc = 0x179064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179068: 0xc640054c  lwc1        $f0, 0x54C($s2)
    ctx->pc = 0x179068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17906c: 0xe6230540  swc1        $f3, 0x540($s1)
    ctx->pc = 0x17906cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1344), bits); }
    // 0x179070: 0xe6220544  swc1        $f2, 0x544($s1)
    ctx->pc = 0x179070u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1348), bits); }
    // 0x179074: 0xe6210548  swc1        $f1, 0x548($s1)
    ctx->pc = 0x179074u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1352), bits); }
    // 0x179078: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x179078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x17907c: 0xc6430550  lwc1        $f3, 0x550($s2)
    ctx->pc = 0x17907cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x179080: 0xc6420554  lwc1        $f2, 0x554($s2)
    ctx->pc = 0x179080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x179084: 0xc6410558  lwc1        $f1, 0x558($s2)
    ctx->pc = 0x179084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179088: 0xc640055c  lwc1        $f0, 0x55C($s2)
    ctx->pc = 0x179088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17908c: 0xe6230550  swc1        $f3, 0x550($s1)
    ctx->pc = 0x17908cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1360), bits); }
    // 0x179090: 0xe6220554  swc1        $f2, 0x554($s1)
    ctx->pc = 0x179090u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1364), bits); }
    // 0x179094: 0xe6210558  swc1        $f1, 0x558($s1)
    ctx->pc = 0x179094u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1368), bits); }
    // 0x179098: 0xe620055c  swc1        $f0, 0x55C($s1)
    ctx->pc = 0x179098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1372), bits); }
    // 0x17909c: 0xc6430560  lwc1        $f3, 0x560($s2)
    ctx->pc = 0x17909cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1790a0: 0xc6420564  lwc1        $f2, 0x564($s2)
    ctx->pc = 0x1790a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1790a4: 0xc6410568  lwc1        $f1, 0x568($s2)
    ctx->pc = 0x1790a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1790a8: 0xc640056c  lwc1        $f0, 0x56C($s2)
    ctx->pc = 0x1790a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1790ac: 0xe6230560  swc1        $f3, 0x560($s1)
    ctx->pc = 0x1790acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1376), bits); }
    // 0x1790b0: 0xe6220564  swc1        $f2, 0x564($s1)
    ctx->pc = 0x1790b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1380), bits); }
    // 0x1790b4: 0xe6210568  swc1        $f1, 0x568($s1)
    ctx->pc = 0x1790b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1384), bits); }
    // 0x1790b8: 0xe620056c  swc1        $f0, 0x56C($s1)
    ctx->pc = 0x1790b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1388), bits); }
    // 0x1790bc: 0xc6420570  lwc1        $f2, 0x570($s2)
    ctx->pc = 0x1790bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1790c0: 0xc6410574  lwc1        $f1, 0x574($s2)
    ctx->pc = 0x1790c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1790c4: 0xc6400578  lwc1        $f0, 0x578($s2)
    ctx->pc = 0x1790c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1790c8: 0xe6220570  swc1        $f2, 0x570($s1)
    ctx->pc = 0x1790c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1392), bits); }
    // 0x1790cc: 0xe6210574  swc1        $f1, 0x574($s1)
    ctx->pc = 0x1790ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1396), bits); }
    // 0x1790d0: 0xe6200578  swc1        $f0, 0x578($s1)
    ctx->pc = 0x1790d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1400), bits); }
    // 0x1790d4: 0xc643057c  lwc1        $f3, 0x57C($s2)
    ctx->pc = 0x1790d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1790d8: 0xc6420580  lwc1        $f2, 0x580($s2)
    ctx->pc = 0x1790d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1790dc: 0xc6410584  lwc1        $f1, 0x584($s2)
    ctx->pc = 0x1790dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1790e0: 0xc6400588  lwc1        $f0, 0x588($s2)
    ctx->pc = 0x1790e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1790e4: 0xe623057c  swc1        $f3, 0x57C($s1)
    ctx->pc = 0x1790e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1404), bits); }
    // 0x1790e8: 0xe6220580  swc1        $f2, 0x580($s1)
    ctx->pc = 0x1790e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1408), bits); }
    // 0x1790ec: 0xe6210584  swc1        $f1, 0x584($s1)
    ctx->pc = 0x1790ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1412), bits); }
    // 0x1790f0: 0xe6200588  swc1        $f0, 0x588($s1)
    ctx->pc = 0x1790f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1416), bits); }
    // 0x1790f4: 0xc643058c  lwc1        $f3, 0x58C($s2)
    ctx->pc = 0x1790f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1790f8: 0xc6420590  lwc1        $f2, 0x590($s2)
    ctx->pc = 0x1790f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1790fc: 0xc6410594  lwc1        $f1, 0x594($s2)
    ctx->pc = 0x1790fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179100: 0xc6400598  lwc1        $f0, 0x598($s2)
    ctx->pc = 0x179100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179104: 0xe623058c  swc1        $f3, 0x58C($s1)
    ctx->pc = 0x179104u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1420), bits); }
    // 0x179108: 0xe6220590  swc1        $f2, 0x590($s1)
    ctx->pc = 0x179108u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1424), bits); }
    // 0x17910c: 0xe6210594  swc1        $f1, 0x594($s1)
    ctx->pc = 0x17910cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1428), bits); }
    // 0x179110: 0xe6200598  swc1        $f0, 0x598($s1)
    ctx->pc = 0x179110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1432), bits); }
    // 0x179114: 0xc641059c  lwc1        $f1, 0x59C($s2)
    ctx->pc = 0x179114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179118: 0xc64005a0  lwc1        $f0, 0x5A0($s2)
    ctx->pc = 0x179118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17911c: 0xe621059c  swc1        $f1, 0x59C($s1)
    ctx->pc = 0x17911cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1436), bits); }
    // 0x179120: 0xe62005a0  swc1        $f0, 0x5A0($s1)
    ctx->pc = 0x179120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1440), bits); }
    // 0x179124: 0xc64305a4  lwc1        $f3, 0x5A4($s2)
    ctx->pc = 0x179124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x179128: 0xc64205a8  lwc1        $f2, 0x5A8($s2)
    ctx->pc = 0x179128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17912c: 0xc64105ac  lwc1        $f1, 0x5AC($s2)
    ctx->pc = 0x17912cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179130: 0xc64005b0  lwc1        $f0, 0x5B0($s2)
    ctx->pc = 0x179130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179134: 0xe62305a4  swc1        $f3, 0x5A4($s1)
    ctx->pc = 0x179134u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1444), bits); }
    // 0x179138: 0xe62205a8  swc1        $f2, 0x5A8($s1)
    ctx->pc = 0x179138u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
    // 0x17913c: 0xe62105ac  swc1        $f1, 0x5AC($s1)
    ctx->pc = 0x17913cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1452), bits); }
    // 0x179140: 0xe62005b0  swc1        $f0, 0x5B0($s1)
    ctx->pc = 0x179140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1456), bits); }
    // 0x179144: 0xc64305b4  lwc1        $f3, 0x5B4($s2)
    ctx->pc = 0x179144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x179148: 0xc64205b8  lwc1        $f2, 0x5B8($s2)
    ctx->pc = 0x179148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17914c: 0xc64105bc  lwc1        $f1, 0x5BC($s2)
    ctx->pc = 0x17914cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179150: 0xc64005c0  lwc1        $f0, 0x5C0($s2)
    ctx->pc = 0x179150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179154: 0xe62305b4  swc1        $f3, 0x5B4($s1)
    ctx->pc = 0x179154u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1460), bits); }
    // 0x179158: 0xe62205b8  swc1        $f2, 0x5B8($s1)
    ctx->pc = 0x179158u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1464), bits); }
    // 0x17915c: 0xe62105bc  swc1        $f1, 0x5BC($s1)
    ctx->pc = 0x17915cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1468), bits); }
    // 0x179160: 0xe62005c0  swc1        $f0, 0x5C0($s1)
    ctx->pc = 0x179160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1472), bits); }
    // 0x179164: 0xc64305c4  lwc1        $f3, 0x5C4($s2)
    ctx->pc = 0x179164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x179168: 0xc64205c8  lwc1        $f2, 0x5C8($s2)
    ctx->pc = 0x179168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17916c: 0xc64105cc  lwc1        $f1, 0x5CC($s2)
    ctx->pc = 0x17916cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179170: 0xc64005d0  lwc1        $f0, 0x5D0($s2)
    ctx->pc = 0x179170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179174: 0xe62305c4  swc1        $f3, 0x5C4($s1)
    ctx->pc = 0x179174u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1476), bits); }
    // 0x179178: 0xe62205c8  swc1        $f2, 0x5C8($s1)
    ctx->pc = 0x179178u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1480), bits); }
    // 0x17917c: 0xe62105cc  swc1        $f1, 0x5CC($s1)
    ctx->pc = 0x17917cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1484), bits); }
    // 0x179180: 0xe62005d0  swc1        $f0, 0x5D0($s1)
    ctx->pc = 0x179180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1488), bits); }
    // 0x179184: 0xc64305d4  lwc1        $f3, 0x5D4($s2)
    ctx->pc = 0x179184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x179188: 0xc64205d8  lwc1        $f2, 0x5D8($s2)
    ctx->pc = 0x179188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17918c: 0xc64105dc  lwc1        $f1, 0x5DC($s2)
    ctx->pc = 0x17918cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179190: 0xc64005e0  lwc1        $f0, 0x5E0($s2)
    ctx->pc = 0x179190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179194: 0xe62305d4  swc1        $f3, 0x5D4($s1)
    ctx->pc = 0x179194u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1492), bits); }
    // 0x179198: 0xe62205d8  swc1        $f2, 0x5D8($s1)
    ctx->pc = 0x179198u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1496), bits); }
    // 0x17919c: 0xe62105dc  swc1        $f1, 0x5DC($s1)
    ctx->pc = 0x17919cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1500), bits); }
    // 0x1791a0: 0xe62005e0  swc1        $f0, 0x5E0($s1)
    ctx->pc = 0x1791a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1504), bits); }
    // 0x1791a4: 0x8e4305e4  lw          $v1, 0x5E4($s2)
    ctx->pc = 0x1791a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1508)));
    // 0x1791a8: 0xae2305e4  sw          $v1, 0x5E4($s1)
    ctx->pc = 0x1791a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1508), GPR_U32(ctx, 3));
    // 0x1791ac: 0x8e4305e8  lw          $v1, 0x5E8($s2)
    ctx->pc = 0x1791acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1512)));
    // 0x1791b0: 0xae2305e8  sw          $v1, 0x5E8($s1)
    ctx->pc = 0x1791b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1512), GPR_U32(ctx, 3));
label_1791b4:
    // 0x1791b4: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1791b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1791b8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1791b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1791bc: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x1791bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1791c0: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1791c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1791c4: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x1791c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x1791c8: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x1791c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x1791cc: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1791CCu;
    {
        const bool branch_taken_0x1791cc = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x1791D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1791CCu;
            // 0x1791d0: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1791cc) {
            ctx->pc = 0x1791B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1791b4;
        }
    }
    ctx->pc = 0x1791D4u;
    // 0x1791d4: 0x8e43064c  lw          $v1, 0x64C($s2)
    ctx->pc = 0x1791d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1612)));
    // 0x1791d8: 0xae23064c  sw          $v1, 0x64C($s1)
    ctx->pc = 0x1791d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1612), GPR_U32(ctx, 3));
    // 0x1791dc: 0x8e430650  lw          $v1, 0x650($s2)
    ctx->pc = 0x1791dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1616)));
    // 0x1791e0: 0x12000132  beqz        $s0, . + 4 + (0x132 << 2)
    ctx->pc = 0x1791E0u;
    {
        const bool branch_taken_0x1791e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1791E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1791E0u;
            // 0x1791e4: 0xae230650  sw          $v1, 0x650($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1616), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1791e0) {
            ctx->pc = 0x1796ACu;
            goto label_1796ac;
        }
    }
    ctx->pc = 0x1791E8u;
    // 0x1791e8: 0x8e440070  lw          $a0, 0x70($s2)
    ctx->pc = 0x1791e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x1791ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1791ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1791f0: 0xc04ce1c  jal         func_133870
    ctx->pc = 0x1791F0u;
    SET_GPR_U32(ctx, 31, 0x1791F8u);
    ctx->pc = 0x1791F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1791F0u;
            // 0x1791f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133870u;
    if (runtime->hasFunction(0x133870u)) {
        auto targetFn = runtime->lookupFunction(0x133870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1791F8u; }
        if (ctx->pc != 0x1791F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCopyFrame__FP8mgCFrameP9mgCMemoryi_0x133870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1791F8u; }
        if (ctx->pc != 0x1791F8u) { return; }
    }
    ctx->pc = 0x1791F8u;
label_1791f8:
    // 0x1791f8: 0xae220070  sw          $v0, 0x70($s1)
    ctx->pc = 0x1791f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
    // 0x1791fc: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x1791fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x179200: 0x1060012a  beqz        $v1, . + 4 + (0x12A << 2)
    ctx->pc = 0x179200u;
    {
        const bool branch_taken_0x179200 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x179200) {
            ctx->pc = 0x1796ACu;
            goto label_1796ac;
        }
    }
    ctx->pc = 0x179208u;
    // 0x179208: 0x8e4202c0  lw          $v0, 0x2C0($s2)
    ctx->pc = 0x179208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 704)));
    // 0x17920c: 0xae2202c0  sw          $v0, 0x2C0($s1)
    ctx->pc = 0x17920cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 704), GPR_U32(ctx, 2));
    // 0x179210: 0x8e420128  lw          $v0, 0x128($s2)
    ctx->pc = 0x179210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 296)));
    // 0x179214: 0x18400041  blez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x179214u;
    {
        const bool branch_taken_0x179214 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x179214) {
            ctx->pc = 0x17931Cu;
            goto label_17931c;
        }
    }
    ctx->pc = 0x17921Cu;
    // 0x17921c: 0x8e550124  lw          $s5, 0x124($s2)
    ctx->pc = 0x17921cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 292)));
    // 0x179220: 0x12a0003e  beqz        $s5, . + 4 + (0x3E << 2)
    ctx->pc = 0x179220u;
    {
        const bool branch_taken_0x179220 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x179220) {
            ctx->pc = 0x17931Cu;
            goto label_17931c;
        }
    }
    ctx->pc = 0x179228u;
    // 0x179228: 0xae200124  sw          $zero, 0x124($s1)
    ctx->pc = 0x179228u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 0));
    // 0x17922c: 0x12a0003b  beqz        $s5, . + 4 + (0x3B << 2)
    ctx->pc = 0x17922Cu;
    {
        const bool branch_taken_0x17922c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x179230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17922Cu;
            // 0x179230: 0xae200128  sw          $zero, 0x128($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17922c) {
            ctx->pc = 0x17931Cu;
            goto label_17931c;
        }
    }
    ctx->pc = 0x179234u;
    // 0x179234: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x179234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_179238:
    // 0x179238: 0xc04e748  jal         func_139D20
    ctx->pc = 0x179238u;
    SET_GPR_U32(ctx, 31, 0x179240u);
    ctx->pc = 0x17923Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179238u;
            // 0x17923c: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179240u; }
        if (ctx->pc != 0x179240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179240u; }
        if (ctx->pc != 0x179240u) { return; }
    }
    ctx->pc = 0x179240u;
label_179240:
    // 0x179240: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x179240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x179244: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x179244u;
    SET_GPR_U32(ctx, 31, 0x17924Cu);
    ctx->pc = 0x179248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179244u;
            // 0x179248: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17924Cu; }
        if (ctx->pc != 0x17924Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17924Cu; }
        if (ctx->pc != 0x17924Cu) { return; }
    }
    ctx->pc = 0x17924Cu;
label_17924c:
    // 0x17924c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17924Cu;
    {
        const bool branch_taken_0x17924c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17924Cu;
            // 0x179250: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17924c) {
            ctx->pc = 0x179260u;
            goto label_179260;
        }
    }
    ctx->pc = 0x179254u;
    // 0x179254: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x179254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179258: 0xc05f090  jal         func_17C240
    ctx->pc = 0x179258u;
    SET_GPR_U32(ctx, 31, 0x179260u);
    ctx->pc = 0x17925Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179258u;
            // 0x17925c: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C240u;
    if (runtime->hasFunction(0x17C240u)) {
        auto targetFn = runtime->lookupFunction(0x17C240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179260u; }
        if (ctx->pc != 0x179260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__12COutLineDrawFv_0x17c240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179260u; }
        if (ctx->pc != 0x179260u) { return; }
    }
    ctx->pc = 0x179260u;
label_179260:
    // 0x179260: 0x1280002e  beqz        $s4, . + 4 + (0x2E << 2)
    ctx->pc = 0x179260u;
    {
        const bool branch_taken_0x179260 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x179260) {
            ctx->pc = 0x17931Cu;
            goto label_17931c;
        }
    }
    ctx->pc = 0x179268u;
    // 0x179268: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x179268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x17926c: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x17926cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x179270: 0x26a50010  addiu       $a1, $s5, 0x10
    ctx->pc = 0x179270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x179274: 0xc04e624  jal         func_139890
    ctx->pc = 0x179274u;
    SET_GPR_U32(ctx, 31, 0x17927Cu);
    ctx->pc = 0x179278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179274u;
            // 0x179278: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139890u;
    if (runtime->hasFunction(0x139890u)) {
        auto targetFn = runtime->lookupFunction(0x139890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17927Cu; }
        if (ctx->pc != 0x17927Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__9mgVu0FBOXFR9mgVu0FBOX_0x139890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17927Cu; }
        if (ctx->pc != 0x17927Cu) { return; }
    }
    ctx->pc = 0x17927Cu;
label_17927c:
    // 0x17927c: 0x8ea20030  lw          $v0, 0x30($s5)
    ctx->pc = 0x17927cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x179280: 0xae820030  sw          $v0, 0x30($s4)
    ctx->pc = 0x179280u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 2));
    // 0x179284: 0x8ea20034  lw          $v0, 0x34($s5)
    ctx->pc = 0x179284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x179288: 0xae820034  sw          $v0, 0x34($s4)
    ctx->pc = 0x179288u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 2));
    // 0x17928c: 0xc6a00038  lwc1        $f0, 0x38($s5)
    ctx->pc = 0x17928cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179290: 0xe6800038  swc1        $f0, 0x38($s4)
    ctx->pc = 0x179290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 56), bits); }
    // 0x179294: 0x8ea2003c  lw          $v0, 0x3C($s5)
    ctx->pc = 0x179294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
    // 0x179298: 0xae82003c  sw          $v0, 0x3C($s4)
    ctx->pc = 0x179298u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 2));
    // 0x17929c: 0xc6a30040  lwc1        $f3, 0x40($s5)
    ctx->pc = 0x17929cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1792a0: 0xc6a20044  lwc1        $f2, 0x44($s5)
    ctx->pc = 0x1792a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1792a4: 0xc6a10048  lwc1        $f1, 0x48($s5)
    ctx->pc = 0x1792a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1792a8: 0xc6a0004c  lwc1        $f0, 0x4C($s5)
    ctx->pc = 0x1792a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1792ac: 0xe6830040  swc1        $f3, 0x40($s4)
    ctx->pc = 0x1792acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 64), bits); }
    // 0x1792b0: 0xe6820044  swc1        $f2, 0x44($s4)
    ctx->pc = 0x1792b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 68), bits); }
    // 0x1792b4: 0xe6810048  swc1        $f1, 0x48($s4)
    ctx->pc = 0x1792b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 72), bits); }
    // 0x1792b8: 0xe680004c  swc1        $f0, 0x4C($s4)
    ctx->pc = 0x1792b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 76), bits); }
    // 0x1792bc: 0xc6a30050  lwc1        $f3, 0x50($s5)
    ctx->pc = 0x1792bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1792c0: 0xc6a20054  lwc1        $f2, 0x54($s5)
    ctx->pc = 0x1792c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1792c4: 0xc6a10058  lwc1        $f1, 0x58($s5)
    ctx->pc = 0x1792c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1792c8: 0xc6a0005c  lwc1        $f0, 0x5C($s5)
    ctx->pc = 0x1792c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1792cc: 0xe6830050  swc1        $f3, 0x50($s4)
    ctx->pc = 0x1792ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 80), bits); }
    // 0x1792d0: 0xe6820054  swc1        $f2, 0x54($s4)
    ctx->pc = 0x1792d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 84), bits); }
    // 0x1792d4: 0xe6810058  swc1        $f1, 0x58($s4)
    ctx->pc = 0x1792d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 88), bits); }
    // 0x1792d8: 0xe680005c  swc1        $f0, 0x5C($s4)
    ctx->pc = 0x1792d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 92), bits); }
    // 0x1792dc: 0x8ea20060  lw          $v0, 0x60($s5)
    ctx->pc = 0x1792dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1792e0: 0xae820060  sw          $v0, 0x60($s4)
    ctx->pc = 0x1792e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 96), GPR_U32(ctx, 2));
    // 0x1792e4: 0x8ea20064  lw          $v0, 0x64($s5)
    ctx->pc = 0x1792e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
    // 0x1792e8: 0xae820064  sw          $v0, 0x64($s4)
    ctx->pc = 0x1792e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 2));
    // 0x1792ec: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x1792ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x1792f0: 0x8ea20034  lw          $v0, 0x34($s5)
    ctx->pc = 0x1792f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x1792f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1792F4u;
    {
        const bool branch_taken_0x1792f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1792f4) {
            ctx->pc = 0x17930Cu;
            goto label_17930c;
        }
    }
    ctx->pc = 0x1792FCu;
    // 0x1792fc: 0x8c450050  lw          $a1, 0x50($v0)
    ctx->pc = 0x1792fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x179300: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x179300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179304: 0xc05cb7c  jal         func_172DF0
    ctx->pc = 0x179304u;
    SET_GPR_U32(ctx, 31, 0x17930Cu);
    ctx->pc = 0x179308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179304u;
            // 0x179308: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172DF0u;
    if (runtime->hasFunction(0x172DF0u)) {
        auto targetFn = runtime->lookupFunction(0x172DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17930Cu; }
        if (ctx->pc != 0x17930Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddOutLine__11CCharacter2FPcP12COutLineDraw_0x172df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17930Cu; }
        if (ctx->pc != 0x17930Cu) { return; }
    }
    ctx->pc = 0x17930Cu;
label_17930c:
    // 0x17930c: 0x0  nop
    ctx->pc = 0x17930cu;
    // NOP
    // 0x179310: 0x8eb50000  lw          $s5, 0x0($s5)
    ctx->pc = 0x179310u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x179314: 0x16a0ffc8  bnez        $s5, . + 4 + (-0x38 << 2)
    ctx->pc = 0x179314u;
    {
        const bool branch_taken_0x179314 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x179318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179314u;
            // 0x179318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179314) {
            ctx->pc = 0x179238u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_179238;
        }
    }
    ctx->pc = 0x17931Cu;
label_17931c:
    // 0x17931c: 0x0  nop
    ctx->pc = 0x17931cu;
    // NOP
    // 0x179320: 0x8e54012c  lw          $s4, 0x12C($s2)
    ctx->pc = 0x179320u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 300)));
    // 0x179324: 0x1a80002c  blez        $s4, . + 4 + (0x2C << 2)
    ctx->pc = 0x179324u;
    {
        const bool branch_taken_0x179324 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x179324) {
            ctx->pc = 0x1793D8u;
            goto label_1793d8;
        }
    }
    ctx->pc = 0x17932Cu;
    // 0x17932c: 0x8e420130  lw          $v0, 0x130($s2)
    ctx->pc = 0x17932cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x179330: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x179330u;
    {
        const bool branch_taken_0x179330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179330u;
            // 0x179334: 0x1410c0  sll         $v0, $s4, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179330) {
            ctx->pc = 0x1793D8u;
            goto label_1793d8;
        }
    }
    ctx->pc = 0x179338u;
    // 0x179338: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x179338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x17933c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x17933cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x179340: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x179340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x179344: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x179344u;
    {
        const bool branch_taken_0x179344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179344u;
            // 0x179348: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179344) {
            ctx->pc = 0x179354u;
            goto label_179354;
        }
    }
    ctx->pc = 0x17934Cu;
    // 0x17934c: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x17934cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x179350: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x179350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_179354:
    // 0x179354: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x179354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x179358: 0xc04e748  jal         func_139D20
    ctx->pc = 0x179358u;
    SET_GPR_U32(ctx, 31, 0x179360u);
    ctx->pc = 0x17935Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179358u;
            // 0x17935c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179360u; }
        if (ctx->pc != 0x179360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179360u; }
        if (ctx->pc != 0x179360u) { return; }
    }
    ctx->pc = 0x179360u;
label_179360:
    // 0x179360: 0x1418c0  sll         $v1, $s4, 3
    ctx->pc = 0x179360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x179364: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x179364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179368: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x179368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x17936c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17936cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x179370: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x179370u;
    SET_GPR_U32(ctx, 31, 0x179378u);
    ctx->pc = 0x179374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179370u;
            // 0x179374: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179378u; }
        if (ctx->pc != 0x179378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179378u; }
        if (ctx->pc != 0x179378u) { return; }
    }
    ctx->pc = 0x179378u;
label_179378:
    // 0x179378: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x179378u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x17937c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x17937cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179380: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x179380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179384: 0x24a56ec0  addiu       $a1, $a1, 0x6EC0
    ctx->pc = 0x179384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28352));
    // 0x179388: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x179388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17938c: 0xc0400bc  jal         func_1002F0
    ctx->pc = 0x17938Cu;
    SET_GPR_U32(ctx, 31, 0x179394u);
    ctx->pc = 0x179390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17938Cu;
            // 0x179390: 0x24070090  addiu       $a3, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002F0u;
    if (runtime->hasFunction(0x1002F0u)) {
        auto targetFn = runtime->lookupFunction(0x1002F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179394u; }
        if (ctx->pc != 0x179394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1002f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179394u; }
        if (ctx->pc != 0x179394u) { return; }
    }
    ctx->pc = 0x179394u;
label_179394:
    // 0x179394: 0xae220130  sw          $v0, 0x130($s1)
    ctx->pc = 0x179394u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 2));
    // 0x179398: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x179398u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17939c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17939Cu;
    {
        const bool branch_taken_0x17939c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1793A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17939Cu;
            // 0x1793a0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17939c) {
            ctx->pc = 0x1793C8u;
            goto label_1793c8;
        }
    }
    ctx->pc = 0x1793A4u;
label_1793a4:
    // 0x1793a4: 0x8e430130  lw          $v1, 0x130($s2)
    ctx->pc = 0x1793a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x1793a8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1793a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1793ac: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x1793acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x1793b0: 0x8e260070  lw          $a2, 0x70($s1)
    ctx->pc = 0x1793b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x1793b4: 0x752021  addu        $a0, $v1, $s5
    ctx->pc = 0x1793b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1793b8: 0xc05eb54  jal         func_17AD50
    ctx->pc = 0x1793B8u;
    SET_GPR_U32(ctx, 31, 0x1793C0u);
    ctx->pc = 0x1793BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1793B8u;
            // 0x1793bc: 0x552821  addu        $a1, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17AD50u;
    if (runtime->hasFunction(0x17AD50u)) {
        auto targetFn = runtime->lookupFunction(0x17AD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1793C0u; }
        if (ctx->pc != 0x1793C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Copy__13CDynamicAnimeFR13CDynamicAnimeP8mgCFrameP9mgCMemory_0x17ad50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1793C0u; }
        if (ctx->pc != 0x1793C0u) { return; }
    }
    ctx->pc = 0x1793C0u;
label_1793c0:
    // 0x1793c0: 0x26b50090  addiu       $s5, $s5, 0x90
    ctx->pc = 0x1793c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
    // 0x1793c4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1793c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1793c8:
    // 0x1793c8: 0x8e42012c  lw          $v0, 0x12C($s2)
    ctx->pc = 0x1793c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 300)));
    // 0x1793cc: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x1793ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1793d0: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1793D0u;
    {
        const bool branch_taken_0x1793d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1793d0) {
            ctx->pc = 0x1793A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1793a4;
        }
    }
    ctx->pc = 0x1793D8u;
label_1793d8:
    // 0x1793d8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1793d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1793dc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1793dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1793e0:
    // 0x1793e0: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x1793e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x1793e4: 0x8c420138  lw          $v0, 0x138($v0)
    ctx->pc = 0x1793e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
    // 0x1793e8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1793E8u;
    {
        const bool branch_taken_0x1793e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1793e8) {
            ctx->pc = 0x1793FCu;
            goto label_1793fc;
        }
    }
    ctx->pc = 0x1793F0u;
    // 0x1793f0: 0x2341021  addu        $v0, $s1, $s4
    ctx->pc = 0x1793f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x1793f4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1793F4u;
    {
        const bool branch_taken_0x1793f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1793F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1793F4u;
            // 0x1793f8: 0xac400138  sw          $zero, 0x138($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 312), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1793f4) {
            ctx->pc = 0x179414u;
            goto label_179414;
        }
    }
    ctx->pc = 0x1793FCu;
label_1793fc:
    // 0x1793fc: 0x0  nop
    ctx->pc = 0x1793fcu;
    // NOP
    // 0x179400: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x179400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x179404: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x179404u;
    SET_GPR_U32(ctx, 31, 0x17940Cu);
    ctx->pc = 0x179408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179404u;
            // 0x179408: 0x8c450050  lw          $a1, 0x50($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17940Cu; }
        if (ctx->pc != 0x17940Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17940Cu; }
        if (ctx->pc != 0x17940Cu) { return; }
    }
    ctx->pc = 0x17940Cu;
label_17940c:
    // 0x17940c: 0x2341821  addu        $v1, $s1, $s4
    ctx->pc = 0x17940cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x179410: 0xac620138  sw          $v0, 0x138($v1)
    ctx->pc = 0x179410u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 312), GPR_U32(ctx, 2));
label_179414:
    // 0x179414: 0x0  nop
    ctx->pc = 0x179414u;
    // NOP
    // 0x179418: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x179418u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x17941c: 0x2aa20002  slti        $v0, $s5, 0x2
    ctx->pc = 0x17941cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x179420: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x179420u;
    {
        const bool branch_taken_0x179420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x179424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179420u;
            // 0x179424: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179420) {
            ctx->pc = 0x1793E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1793e0;
        }
    }
    ctx->pc = 0x179428u;
    // 0x179428: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x179428u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17942c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x17942cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179430:
    // 0x179430: 0x254a821  addu        $s5, $s2, $s4
    ctx->pc = 0x179430u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x179434: 0x8ea20140  lw          $v0, 0x140($s5)
    ctx->pc = 0x179434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 320)));
    // 0x179438: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x179438u;
    {
        const bool branch_taken_0x179438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x179438) {
            ctx->pc = 0x17944Cu;
            goto label_17944c;
        }
    }
    ctx->pc = 0x179440u;
    // 0x179440: 0x2341021  addu        $v0, $s1, $s4
    ctx->pc = 0x179440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x179444: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x179444u;
    {
        const bool branch_taken_0x179444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179444u;
            // 0x179448: 0xac400140  sw          $zero, 0x140($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179444) {
            ctx->pc = 0x17947Cu;
            goto label_17947c;
        }
    }
    ctx->pc = 0x17944Cu;
label_17944c:
    // 0x17944c: 0x0  nop
    ctx->pc = 0x17944cu;
    // NOP
    // 0x179450: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x179450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x179454: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x179454u;
    SET_GPR_U32(ctx, 31, 0x17945Cu);
    ctx->pc = 0x179458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179454u;
            // 0x179458: 0x8c450050  lw          $a1, 0x50($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17945Cu; }
        if (ctx->pc != 0x17945Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17945Cu; }
        if (ctx->pc != 0x17945Cu) { return; }
    }
    ctx->pc = 0x17945Cu;
label_17945c:
    // 0x17945c: 0x2341821  addu        $v1, $s1, $s4
    ctx->pc = 0x17945cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x179460: 0xac620140  sw          $v0, 0x140($v1)
    ctx->pc = 0x179460u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 320), GPR_U32(ctx, 2));
    // 0x179464: 0xc6a00144  lwc1        $f0, 0x144($s5)
    ctx->pc = 0x179464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179468: 0xe4600144  swc1        $f0, 0x144($v1)
    ctx->pc = 0x179468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 324), bits); }
    // 0x17946c: 0x8ea20148  lw          $v0, 0x148($s5)
    ctx->pc = 0x17946cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 328)));
    // 0x179470: 0xac620148  sw          $v0, 0x148($v1)
    ctx->pc = 0x179470u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 328), GPR_U32(ctx, 2));
    // 0x179474: 0x8ea2014c  lw          $v0, 0x14C($s5)
    ctx->pc = 0x179474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 332)));
    // 0x179478: 0xac62014c  sw          $v0, 0x14C($v1)
    ctx->pc = 0x179478u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 332), GPR_U32(ctx, 2));
label_17947c:
    // 0x17947c: 0x0  nop
    ctx->pc = 0x17947cu;
    // NOP
    // 0x179480: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x179480u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x179484: 0x2ac20018  slti        $v0, $s6, 0x18
    ctx->pc = 0x179484u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x179488: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x179488u;
    {
        const bool branch_taken_0x179488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17948Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179488u;
            // 0x17948c: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179488) {
            ctx->pc = 0x179430u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_179430;
        }
    }
    ctx->pc = 0x179490u;
    // 0x179490: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x179490u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179494: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x179494u;
    {
        const bool branch_taken_0x179494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179494u;
            // 0x179498: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179494) {
            ctx->pc = 0x1794D8u;
            goto label_1794d8;
        }
    }
    ctx->pc = 0x17949Cu;
label_17949c:
    // 0x17949c: 0x8c4202e8  lw          $v0, 0x2E8($v0)
    ctx->pc = 0x17949cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 744)));
    // 0x1794a0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1794A0u;
    {
        const bool branch_taken_0x1794a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1794a0) {
            ctx->pc = 0x1794B4u;
            goto label_1794b4;
        }
    }
    ctx->pc = 0x1794A8u;
    // 0x1794a8: 0x2341021  addu        $v0, $s1, $s4
    ctx->pc = 0x1794a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x1794ac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1794ACu;
    {
        const bool branch_taken_0x1794ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1794B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1794ACu;
            // 0x1794b0: 0xac4002e8  sw          $zero, 0x2E8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 744), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1794ac) {
            ctx->pc = 0x1794CCu;
            goto label_1794cc;
        }
    }
    ctx->pc = 0x1794B4u;
label_1794b4:
    // 0x1794b4: 0x0  nop
    ctx->pc = 0x1794b4u;
    // NOP
    // 0x1794b8: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x1794b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x1794bc: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x1794BCu;
    SET_GPR_U32(ctx, 31, 0x1794C4u);
    ctx->pc = 0x1794C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1794BCu;
            // 0x1794c0: 0x8c450050  lw          $a1, 0x50($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1794C4u; }
        if (ctx->pc != 0x1794C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1794C4u; }
        if (ctx->pc != 0x1794C4u) { return; }
    }
    ctx->pc = 0x1794C4u;
label_1794c4:
    // 0x1794c4: 0x2341821  addu        $v1, $s1, $s4
    ctx->pc = 0x1794c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x1794c8: 0xac6202e8  sw          $v0, 0x2E8($v1)
    ctx->pc = 0x1794c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 744), GPR_U32(ctx, 2));
label_1794cc:
    // 0x1794cc: 0x0  nop
    ctx->pc = 0x1794ccu;
    // NOP
    // 0x1794d0: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x1794d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x1794d4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1794d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1794d8:
    // 0x1794d8: 0x8e420348  lw          $v0, 0x348($s2)
    ctx->pc = 0x1794d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 840)));
    // 0x1794dc: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x1794dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1794e0: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1794E0u;
    {
        const bool branch_taken_0x1794e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1794E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1794E0u;
            // 0x1794e4: 0x2541021  addu        $v0, $s2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1794e0) {
            ctx->pc = 0x17949Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17949c;
        }
    }
    ctx->pc = 0x1794E8u;
    // 0x1794e8: 0x8e54034c  lw          $s4, 0x34C($s2)
    ctx->pc = 0x1794e8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 844)));
    // 0x1794ec: 0x1a800040  blez        $s4, . + 4 + (0x40 << 2)
    ctx->pc = 0x1794ECu;
    {
        const bool branch_taken_0x1794ec = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x1794F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1794ECu;
            // 0x1794f0: 0x141040  sll         $v0, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1794ec) {
            ctx->pc = 0x1795F0u;
            goto label_1795f0;
        }
    }
    ctx->pc = 0x1794F4u;
    // 0x1794f4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1794f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1794f8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1794f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1794fc: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x1794fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x179500: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x179500u;
    {
        const bool branch_taken_0x179500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179500u;
            // 0x179504: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179500) {
            ctx->pc = 0x179510u;
            goto label_179510;
        }
    }
    ctx->pc = 0x179508u;
    // 0x179508: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x179508u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x17950c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17950cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_179510:
    // 0x179510: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x179510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x179514: 0xc04e748  jal         func_139D20
    ctx->pc = 0x179514u;
    SET_GPR_U32(ctx, 31, 0x17951Cu);
    ctx->pc = 0x179518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179514u;
            // 0x179518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17951Cu; }
        if (ctx->pc != 0x17951Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17951Cu; }
        if (ctx->pc != 0x17951Cu) { return; }
    }
    ctx->pc = 0x17951Cu;
label_17951c:
    // 0x17951c: 0x141840  sll         $v1, $s4, 1
    ctx->pc = 0x17951cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x179520: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x179520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179524: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x179524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x179528: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x179528u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x17952c: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x17952Cu;
    SET_GPR_U32(ctx, 31, 0x179534u);
    ctx->pc = 0x179530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17952Cu;
            // 0x179530: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179534u; }
        if (ctx->pc != 0x179534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179534u; }
        if (ctx->pc != 0x179534u) { return; }
    }
    ctx->pc = 0x179534u;
label_179534:
    // 0x179534: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x179534u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x179538: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x179538u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17953c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17953cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179540: 0x24a586d0  addiu       $a1, $a1, -0x7930
    ctx->pc = 0x179540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936272));
    // 0x179544: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x179544u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179548: 0xc0400bc  jal         func_1002F0
    ctx->pc = 0x179548u;
    SET_GPR_U32(ctx, 31, 0x179550u);
    ctx->pc = 0x17954Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179548u;
            // 0x17954c: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002F0u;
    if (runtime->hasFunction(0x1002F0u)) {
        auto targetFn = runtime->lookupFunction(0x1002F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179550u; }
        if (ctx->pc != 0x179550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1002f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179550u; }
        if (ctx->pc != 0x179550u) { return; }
    }
    ctx->pc = 0x179550u;
label_179550:
    // 0x179550: 0xae220350  sw          $v0, 0x350($s1)
    ctx->pc = 0x179550u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 848), GPR_U32(ctx, 2));
    // 0x179554: 0x8e230350  lw          $v1, 0x350($s1)
    ctx->pc = 0x179554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 848)));
    // 0x179558: 0x10600054  beqz        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x179558u;
    {
        const bool branch_taken_0x179558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x179558) {
            ctx->pc = 0x1796ACu;
            goto label_1796ac;
        }
    }
    ctx->pc = 0x179560u;
    // 0x179560: 0x8e42034c  lw          $v0, 0x34C($s2)
    ctx->pc = 0x179560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 844)));
    // 0x179564: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x179564u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179568: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x179568u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17956c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x17956Cu;
    {
        const bool branch_taken_0x17956c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17956Cu;
            // 0x179570: 0xae22034c  sw          $v0, 0x34C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 844), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17956c) {
            ctx->pc = 0x1795E0u;
            goto label_1795e0;
        }
    }
    ctx->pc = 0x179574u;
label_179574:
    // 0x179574: 0x8e430350  lw          $v1, 0x350($s2)
    ctx->pc = 0x179574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 848)));
    // 0x179578: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x179578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17957c: 0x8e220350  lw          $v0, 0x350($s1)
    ctx->pc = 0x17957cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 848)));
    // 0x179580: 0x742021  addu        $a0, $v1, $s4
    ctx->pc = 0x179580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x179584: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x179584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179588: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x179588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x17958c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x17958cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x179590: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x179590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x179594: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x179594u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x179598: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x179598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x17959c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x17959cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1795a0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1795a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1795a4: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x1795a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x1795a8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1795a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1795ac: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x1795acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x1795b0: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1795b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1795b4: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x1795b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x1795b8: 0x8e420350  lw          $v0, 0x350($s2)
    ctx->pc = 0x1795b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 848)));
    // 0x1795bc: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1795bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1795c0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1795c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1795c4: 0xc04ce1c  jal         func_133870
    ctx->pc = 0x1795C4u;
    SET_GPR_U32(ctx, 31, 0x1795CCu);
    ctx->pc = 0x1795C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1795C4u;
            // 0x1795c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133870u;
    if (runtime->hasFunction(0x133870u)) {
        auto targetFn = runtime->lookupFunction(0x133870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1795CCu; }
        if (ctx->pc != 0x1795CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCopyFrame__FP8mgCFrameP9mgCMemoryi_0x133870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1795CCu; }
        if (ctx->pc != 0x1795CCu) { return; }
    }
    ctx->pc = 0x1795CCu;
label_1795cc:
    // 0x1795cc: 0x8e230350  lw          $v1, 0x350($s1)
    ctx->pc = 0x1795ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 848)));
    // 0x1795d0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1795d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1795d4: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1795d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1795d8: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x1795d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x1795dc: 0x26940018  addiu       $s4, $s4, 0x18
    ctx->pc = 0x1795dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
label_1795e0:
    // 0x1795e0: 0x8e42034c  lw          $v0, 0x34C($s2)
    ctx->pc = 0x1795e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 844)));
    // 0x1795e4: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x1795e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1795e8: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1795E8u;
    {
        const bool branch_taken_0x1795e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1795e8) {
            ctx->pc = 0x179574u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_179574;
        }
    }
    ctx->pc = 0x1795F0u;
label_1795f0:
    // 0x1795f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1795f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1795f4: 0xae420354  sw          $v0, 0x354($s2)
    ctx->pc = 0x1795f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 852), GPR_U32(ctx, 2));
    // 0x1795f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1795f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1795fc: 0xc05cecc  jal         func_173B30
    ctx->pc = 0x1795FCu;
    SET_GPR_U32(ctx, 31, 0x179604u);
    ctx->pc = 0x179600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1795FCu;
            // 0x179600: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173B30u;
    if (runtime->hasFunction(0x173B30u)) {
        auto targetFn = runtime->lookupFunction(0x173B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179604u; }
        if (ctx->pc != 0x179604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSoundInfoCopy__11CCharacter2FP9mgCMemory_0x173b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179604u; }
        if (ctx->pc != 0x179604u) { return; }
    }
    ctx->pc = 0x179604u;
label_179604:
    // 0x179604: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x179604u;
    {
        const bool branch_taken_0x179604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179604u;
            // 0x179608: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179604) {
            ctx->pc = 0x179618u;
            goto label_179618;
        }
    }
    ctx->pc = 0x17960Cu;
    // 0x17960c: 0xae2205a4  sw          $v0, 0x5A4($s1)
    ctx->pc = 0x17960cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1444), GPR_U32(ctx, 2));
    // 0x179610: 0x8e4305c4  lw          $v1, 0x5C4($s2)
    ctx->pc = 0x179610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1476)));
    // 0x179614: 0xae2305c4  sw          $v1, 0x5C4($s1)
    ctx->pc = 0x179614u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1476), GPR_U32(ctx, 3));
label_179618:
    // 0x179618: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x179618u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17961c:
    // 0x17961c: 0x2551821  addu        $v1, $s2, $s5
    ctx->pc = 0x17961cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x179620: 0x24760570  addiu       $s6, $v1, 0x570
    ctx->pc = 0x179620u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 1392));
    // 0x179624: 0x8c630570  lw          $v1, 0x570($v1)
    ctx->pc = 0x179624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1392)));
    // 0x179628: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x179628u;
    {
        const bool branch_taken_0x179628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17962Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179628u;
            // 0x17962c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179628) {
            ctx->pc = 0x179688u;
            goto label_179688;
        }
    }
    ctx->pc = 0x179630u;
    // 0x179630: 0xc04e748  jal         func_139D20
    ctx->pc = 0x179630u;
    SET_GPR_U32(ctx, 31, 0x179638u);
    ctx->pc = 0x179634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179630u;
            // 0x179634: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179638u; }
        if (ctx->pc != 0x179638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179638u; }
        if (ctx->pc != 0x179638u) { return; }
    }
    ctx->pc = 0x179638u;
label_179638:
    // 0x179638: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x179638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x17963c: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x17963Cu;
    SET_GPR_U32(ctx, 31, 0x179644u);
    ctx->pc = 0x179640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17963Cu;
            // 0x179640: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179644u; }
        if (ctx->pc != 0x179644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179644u; }
        if (ctx->pc != 0x179644u) { return; }
    }
    ctx->pc = 0x179644u;
label_179644:
    // 0x179644: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x179644u;
    {
        const bool branch_taken_0x179644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179644u;
            // 0x179648: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179644) {
            ctx->pc = 0x17966Cu;
            goto label_17966c;
        }
    }
    ctx->pc = 0x17964Cu;
    // 0x17964c: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x17964cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x179650: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x179650u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x179654: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x179654u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x179658: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x179658u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x17965c: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x17965cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
    // 0x179660: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x179660u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x179664: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x179664u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
    // 0x179668: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x179668u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_17966c:
    // 0x17966c: 0x0  nop
    ctx->pc = 0x17966cu;
    // NOP
    // 0x179670: 0x2351821  addu        $v1, $s1, $s5
    ctx->pc = 0x179670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x179674: 0xac620570  sw          $v0, 0x570($v1)
    ctx->pc = 0x179674u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1392), GPR_U32(ctx, 2));
    // 0x179678: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x179678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x17967c: 0x8c650570  lw          $a1, 0x570($v1)
    ctx->pc = 0x17967cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1392)));
    // 0x179680: 0xc0bd7fc  jal         func_2F5FF0
    ctx->pc = 0x179680u;
    SET_GPR_U32(ctx, 31, 0x179688u);
    ctx->pc = 0x179684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179680u;
            // 0x179684: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5FF0u;
    if (runtime->hasFunction(0x2F5FF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179688u; }
        if (ctx->pc != 0x179688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Copy__17CSWordAfterEffectFR17CSWordAfterEffectP9mgCMemory_0x2f5ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179688u; }
        if (ctx->pc != 0x179688u) { return; }
    }
    ctx->pc = 0x179688u;
label_179688:
    // 0x179688: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x179688u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x17968c: 0x2a830003  slti        $v1, $s4, 0x3
    ctx->pc = 0x17968cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x179690: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x179690u;
    {
        const bool branch_taken_0x179690 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x179694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179690u;
            // 0x179694: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179690) {
            ctx->pc = 0x17961Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17961c;
        }
    }
    ctx->pc = 0x179698u;
    // 0x179698: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x179698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x17969c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x17969cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1796a0: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1796a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1796a4: 0x2639823  subu        $s3, $s3, $v1
    ctx->pc = 0x1796a4u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1796a8: 0xae53011c  sw          $s3, 0x11C($s2)
    ctx->pc = 0x1796a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 284), GPR_U32(ctx, 19));
label_1796ac:
    // 0x1796ac: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1796acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1796b0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1796b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1796b4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1796b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1796b8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1796b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1796bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1796bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1796c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1796c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1796c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1796c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1796c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1796c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1796cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1796CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1796D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1796CCu;
            // 0x1796d0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1796D4u;
}
