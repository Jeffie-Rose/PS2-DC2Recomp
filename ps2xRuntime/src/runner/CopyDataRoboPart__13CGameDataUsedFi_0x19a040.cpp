#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CopyDataRoboPart__13CGameDataUsedFi
// Address: 0x19a040 - 0x19a158
void CopyDataRoboPart__13CGameDataUsedFi_0x19a040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CopyDataRoboPart__13CGameDataUsedFi_0x19a040");
#endif

    switch (ctx->pc) {
        case 0x19a068u: goto label_19a068;
        case 0x19a08cu: goto label_19a08c;
        case 0x19a12cu: goto label_19a12c;
        case 0x19a13cu: goto label_19a13c;
        default: break;
    }

    ctx->pc = 0x19a040u;

    // 0x19a040: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19a040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19a044: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19a044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19a048: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19a048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19a04c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19a04cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a050: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19a050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19a054: 0x3c0401e7  lui         $a0, 0x1E7
    ctx->pc = 0x19a054u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
    // 0x19a058: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19a058u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a05c: 0x24849570  addiu       $a0, $a0, -0x6A90
    ctx->pc = 0x19a05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
    // 0x19a060: 0xc06567c  jal         func_1959F0
    ctx->pc = 0x19A060u;
    SET_GPR_U32(ctx, 31, 0x19A068u);
    ctx->pc = 0x19A064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A060u;
            // 0x19a064: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1959F0u;
    if (runtime->hasFunction(0x1959F0u)) {
        auto targetFn = runtime->lookupFunction(0x1959F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A068u; }
        if (ctx->pc != 0x19A068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRoboData__9CGameDataFi_0x1959f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A068u; }
        if (ctx->pc != 0x19A068u) { return; }
    }
    ctx->pc = 0x19A068u;
label_19a068:
    // 0x19a068: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19a068u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a06c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19A06Cu;
    {
        const bool branch_taken_0x19a06c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A06Cu;
            // 0x19a070: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a06c) {
            ctx->pc = 0x19A07Cu;
            goto label_19a07c;
        }
    }
    ctx->pc = 0x19A074u;
    // 0x19a074: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x19A074u;
    {
        const bool branch_taken_0x19a074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A074u;
            // 0x19a078: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a074) {
            ctx->pc = 0x19A140u;
            goto label_19a140;
        }
    }
    ctx->pc = 0x19A07Cu;
label_19a07c:
    // 0x19a07c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19a07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a080: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x19a080u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x19a084: 0xc0657b0  jal         func_195EC0
    ctx->pc = 0x19A084u;
    SET_GPR_U32(ctx, 31, 0x19A08Cu);
    ctx->pc = 0x19A088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A084u;
            // 0x19a088: 0xa6510002  sh          $s1, 0x2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195EC0u;
    if (runtime->hasFunction(0x195EC0u)) {
        auto targetFn = runtime->lookupFunction(0x195EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A08Cu; }
        if (ctx->pc != 0x19A08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemDataType__Fi_0x195ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A08Cu; }
        if (ctx->pc != 0x19A08Cu) { return; }
    }
    ctx->pc = 0x19A08Cu;
label_19a08c:
    // 0x19a08c: 0xa2420004  sb          $v0, 0x4($s2)
    ctx->pc = 0x19a08cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x19a090: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19a090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a094: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x19a094u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x19a098: 0x26510010  addiu       $s1, $s2, 0x10
    ctx->pc = 0x19a098u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x19a09c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19a09cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a0a0: 0x0  nop
    ctx->pc = 0x19a0a0u;
    // NOP
    // 0x19a0a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19a0a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19a0a8: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x19a0a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x19a0ac: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x19a0acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x19a0b0: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x19a0b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x19a0b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19a0b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a0b8: 0x0  nop
    ctx->pc = 0x19a0b8u;
    // NOP
    // 0x19a0bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19a0bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19a0c0: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x19a0c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x19a0c4: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x19a0c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x19a0c8: 0x8602001c  lh          $v0, 0x1C($s0)
    ctx->pc = 0x19a0c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x19a0cc: 0xa6420034  sh          $v0, 0x34($s2)
    ctx->pc = 0x19a0ccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 52), (uint16_t)GPR_U32(ctx, 2));
    // 0x19a0d0: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x19a0d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19a0d4: 0xa6420036  sh          $v0, 0x36($s2)
    ctx->pc = 0x19a0d4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 54), (uint16_t)GPR_U32(ctx, 2));
    // 0x19a0d8: 0x86020008  lh          $v0, 0x8($s0)
    ctx->pc = 0x19a0d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x19a0dc: 0xa6420020  sh          $v0, 0x20($s2)
    ctx->pc = 0x19a0dcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x19a0e0: 0x8602000a  lh          $v0, 0xA($s0)
    ctx->pc = 0x19a0e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x19a0e4: 0xa6420022  sh          $v0, 0x22($s2)
    ctx->pc = 0x19a0e4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x19a0e8: 0x8602000c  lh          $v0, 0xC($s0)
    ctx->pc = 0x19a0e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x19a0ec: 0xa6420024  sh          $v0, 0x24($s2)
    ctx->pc = 0x19a0ecu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x19a0f0: 0x8602000e  lh          $v0, 0xE($s0)
    ctx->pc = 0x19a0f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x19a0f4: 0xa6420026  sh          $v0, 0x26($s2)
    ctx->pc = 0x19a0f4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 38), (uint16_t)GPR_U32(ctx, 2));
    // 0x19a0f8: 0x86020010  lh          $v0, 0x10($s0)
    ctx->pc = 0x19a0f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x19a0fc: 0xa6420028  sh          $v0, 0x28($s2)
    ctx->pc = 0x19a0fcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x19a100: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x19a100u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x19a104: 0xa642002a  sh          $v0, 0x2A($s2)
    ctx->pc = 0x19a104u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x19a108: 0x86020014  lh          $v0, 0x14($s0)
    ctx->pc = 0x19a108u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x19a10c: 0xa642002c  sh          $v0, 0x2C($s2)
    ctx->pc = 0x19a10cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x19a110: 0x86020016  lh          $v0, 0x16($s0)
    ctx->pc = 0x19a110u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x19a114: 0xa642002e  sh          $v0, 0x2E($s2)
    ctx->pc = 0x19a114u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 46), (uint16_t)GPR_U32(ctx, 2));
    // 0x19a118: 0x86020018  lh          $v0, 0x18($s0)
    ctx->pc = 0x19a118u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x19a11c: 0xa6420030  sh          $v0, 0x30($s2)
    ctx->pc = 0x19a11cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x19a120: 0x8602001a  lh          $v0, 0x1A($s0)
    ctx->pc = 0x19a120u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x19a124: 0xc065810  jal         func_196040
    ctx->pc = 0x19A124u;
    SET_GPR_U32(ctx, 31, 0x19A12Cu);
    ctx->pc = 0x19A128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A124u;
            // 0x19a128: 0xa6420032  sh          $v0, 0x32($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 50), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196040u;
    if (runtime->hasFunction(0x196040u)) {
        auto targetFn = runtime->lookupFunction(0x196040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A12Cu; }
        if (ctx->pc != 0x19A12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemMessage__Fi_0x196040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A12Cu; }
        if (ctx->pc != 0x19A12Cu) { return; }
    }
    ctx->pc = 0x19A12Cu;
label_19a12c:
    // 0x19a12c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19A12Cu;
    {
        const bool branch_taken_0x19a12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A12Cu;
            // 0x19a130: 0x2624002c  addiu       $a0, $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a12c) {
            ctx->pc = 0x19A13Cu;
            goto label_19a13c;
        }
    }
    ctx->pc = 0x19A134u;
    // 0x19a134: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x19A134u;
    SET_GPR_U32(ctx, 31, 0x19A13Cu);
    ctx->pc = 0x19A138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A134u;
            // 0x19a138: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A13Cu; }
        if (ctx->pc != 0x19A13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A13Cu; }
        if (ctx->pc != 0x19A13Cu) { return; }
    }
    ctx->pc = 0x19A13Cu;
label_19a13c:
    // 0x19a13c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19a13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19a140:
    // 0x19a140: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19a140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19a144: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19a144u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19a148: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19a148u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a14c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19a14cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a150: 0x3e00008  jr          $ra
    ctx->pc = 0x19A150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A150u;
            // 0x19a154: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19A158u;
}
