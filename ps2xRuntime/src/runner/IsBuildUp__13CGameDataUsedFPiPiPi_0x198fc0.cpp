#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsBuildUp__13CGameDataUsedFPiPiPi
// Address: 0x198fc0 - 0x1992ac
void IsBuildUp__13CGameDataUsedFPiPiPi_0x198fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsBuildUp__13CGameDataUsedFPiPiPi_0x198fc0");
#endif

    switch (ctx->pc) {
        case 0x199018u: goto label_199018;
        case 0x1990f0u: goto label_1990f0;
        case 0x199104u: goto label_199104;
        case 0x1991d8u: goto label_1991d8;
        default: break;
    }

    ctx->pc = 0x198fc0u;

    // 0x198fc0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x198fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x198fc4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x198fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x198fc8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x198fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x198fcc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x198fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x198fd0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x198fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x198fd4: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x198fd4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198fd8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x198fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x198fdc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x198fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x198fe0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x198fe0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198fe4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x198fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x198fe8: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x198fe8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198fec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x198fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x198ff0: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x198ff0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198ff4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x198ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x198ff8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x198ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x198ffc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x198ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x199000: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x199000u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x199004: 0x14620099  bne         $v1, $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x199004u;
    {
        const bool branch_taken_0x199004 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x199008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199004u;
            // 0x199008: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199004) {
            ctx->pc = 0x19926Cu;
            goto label_19926c;
        }
    }
    ctx->pc = 0x19900Cu;
    // 0x19900c: 0x24970010  addiu       $s7, $a0, 0x10
    ctx->pc = 0x19900cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x199010: 0xc065710  jal         func_195C40
    ctx->pc = 0x199010u;
    SET_GPR_U32(ctx, 31, 0x199018u);
    ctx->pc = 0x199014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199010u;
            // 0x199014: 0x84840002  lh          $a0, 0x2($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C40u;
    if (runtime->hasFunction(0x195C40u)) {
        auto targetFn = runtime->lookupFunction(0x195C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199018u; }
        if (ctx->pc != 0x199018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWeaponInfoData__Fi_0x195c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199018u; }
        if (ctx->pc != 0x199018u) { return; }
    }
    ctx->pc = 0x199018u;
label_199018:
    // 0x199018: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x199018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x19901c: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x19901cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x199020: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x199020u;
    {
        const bool branch_taken_0x199020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199020u;
            // 0x199024: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199020) {
            ctx->pc = 0x199030u;
            goto label_199030;
        }
    }
    ctx->pc = 0x199028u;
    // 0x199028: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x199028u;
    {
        const bool branch_taken_0x199028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19902Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199028u;
            // 0x19902c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199028) {
            ctx->pc = 0x199280u;
            goto label_199280;
        }
    }
    ctx->pc = 0x199030u;
label_199030:
    // 0x199030: 0x86e20012  lh          $v0, 0x12($s7)
    ctx->pc = 0x199030u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 18)));
    // 0x199034: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x199034u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199038: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x199038u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19903c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x19903cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199040: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199044: 0x0  nop
    ctx->pc = 0x199044u;
    // NOP
    // 0x199048: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x199048u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19904c: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x19904cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x199050: 0x86e20016  lh          $v0, 0x16($s7)
    ctx->pc = 0x199050u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 22)));
    // 0x199054: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199054u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199058: 0x0  nop
    ctx->pc = 0x199058u;
    // NOP
    // 0x19905c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19905cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x199060: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x199060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x199064: 0x86e20018  lh          $v0, 0x18($s7)
    ctx->pc = 0x199064u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 24)));
    // 0x199068: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19906c: 0x0  nop
    ctx->pc = 0x19906cu;
    // NOP
    // 0x199070: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x199070u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x199074: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x199074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x199078: 0x86e2001a  lh          $v0, 0x1A($s7)
    ctx->pc = 0x199078u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 26)));
    // 0x19907c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19907cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199080: 0x0  nop
    ctx->pc = 0x199080u;
    // NOP
    // 0x199084: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x199084u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x199088: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x199088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x19908c: 0x86e2001c  lh          $v0, 0x1C($s7)
    ctx->pc = 0x19908cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 28)));
    // 0x199090: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199094: 0x0  nop
    ctx->pc = 0x199094u;
    // NOP
    // 0x199098: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x199098u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19909c: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x19909cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1990a0: 0x86e2001e  lh          $v0, 0x1E($s7)
    ctx->pc = 0x1990a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 30)));
    // 0x1990a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1990a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1990a8: 0x0  nop
    ctx->pc = 0x1990a8u;
    // NOP
    // 0x1990ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1990acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1990b0: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1990b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1990b4: 0x86e20020  lh          $v0, 0x20($s7)
    ctx->pc = 0x1990b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 32)));
    // 0x1990b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1990b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1990bc: 0x0  nop
    ctx->pc = 0x1990bcu;
    // NOP
    // 0x1990c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1990c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1990c4: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1990c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1990c8: 0x86e20022  lh          $v0, 0x22($s7)
    ctx->pc = 0x1990c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 34)));
    // 0x1990cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1990ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1990d0: 0x0  nop
    ctx->pc = 0x1990d0u;
    // NOP
    // 0x1990d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1990d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1990d8: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1990d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1990dc: 0x86e20024  lh          $v0, 0x24($s7)
    ctx->pc = 0x1990dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 36)));
    // 0x1990e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1990e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1990e4: 0x0  nop
    ctx->pc = 0x1990e4u;
    // NOP
    // 0x1990e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1990e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1990ec: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1990ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1990f0:
    // 0x1990f0: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1990f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1990f4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1990f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1990f8: 0x8444003a  lh          $a0, 0x3A($v0)
    ctx->pc = 0x1990f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 58)));
    // 0x1990fc: 0xc065710  jal         func_195C40
    ctx->pc = 0x1990FCu;
    SET_GPR_U32(ctx, 31, 0x199104u);
    ctx->pc = 0x199100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1990FCu;
            // 0x199100: 0x2457003a  addiu       $s7, $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 58));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C40u;
    if (runtime->hasFunction(0x195C40u)) {
        auto targetFn = runtime->lookupFunction(0x195C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199104u; }
        if (ctx->pc != 0x199104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWeaponInfoData__Fi_0x195c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199104u; }
        if (ctx->pc != 0x199104u) { return; }
    }
    ctx->pc = 0x199104u;
label_199104:
    // 0x199104: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x199104u;
    {
        const bool branch_taken_0x199104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x199104) {
            ctx->pc = 0x199254u;
            goto label_199254;
        }
    }
    ctx->pc = 0x19910Cu;
    // 0x19910c: 0x84460004  lh          $a2, 0x4($v0)
    ctx->pc = 0x19910cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x199110: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x199110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199114: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x199114u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199118: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x199118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19911c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x19911cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199120: 0x0  nop
    ctx->pc = 0x199120u;
    // NOP
    // 0x199124: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x199124u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x199128: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x199128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x19912c: 0x8446000c  lh          $a2, 0xC($v0)
    ctx->pc = 0x19912cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x199130: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x199130u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199134: 0x0  nop
    ctx->pc = 0x199134u;
    // NOP
    // 0x199138: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x199138u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19913c: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x19913cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x199140: 0x8446000e  lh          $a2, 0xE($v0)
    ctx->pc = 0x199140u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x199144: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x199144u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199148: 0x0  nop
    ctx->pc = 0x199148u;
    // NOP
    // 0x19914c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19914cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x199150: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x199150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x199154: 0x84460010  lh          $a2, 0x10($v0)
    ctx->pc = 0x199154u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x199158: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x199158u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19915c: 0x0  nop
    ctx->pc = 0x19915cu;
    // NOP
    // 0x199160: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x199160u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x199164: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x199164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x199168: 0x84460012  lh          $a2, 0x12($v0)
    ctx->pc = 0x199168u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x19916c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x19916cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199170: 0x0  nop
    ctx->pc = 0x199170u;
    // NOP
    // 0x199174: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x199174u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x199178: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x199178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x19917c: 0x84460014  lh          $a2, 0x14($v0)
    ctx->pc = 0x19917cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x199180: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x199180u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199184: 0x0  nop
    ctx->pc = 0x199184u;
    // NOP
    // 0x199188: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x199188u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19918c: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x19918cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x199190: 0x84460016  lh          $a2, 0x16($v0)
    ctx->pc = 0x199190u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x199194: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x199194u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199198: 0x0  nop
    ctx->pc = 0x199198u;
    // NOP
    // 0x19919c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19919cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1991a0: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x1991a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x1991a4: 0x84460018  lh          $a2, 0x18($v0)
    ctx->pc = 0x1991a4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1991a8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1991a8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1991ac: 0x0  nop
    ctx->pc = 0x1991acu;
    // NOP
    // 0x1991b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1991b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1991b4: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x1991b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x1991b8: 0x8442001a  lh          $v0, 0x1A($v0)
    ctx->pc = 0x1991b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 26)));
    // 0x1991bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1991bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1991c0: 0x0  nop
    ctx->pc = 0x1991c0u;
    // NOP
    // 0x1991c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1991c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1991c8: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x1991c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x1991cc: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x1991ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x1991d0: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1991d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1991d4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1991d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1991d8:
    // 0x1991d8: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x1991d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x1991dc: 0x244600f0  addiu       $a2, $v0, 0xF0
    ctx->pc = 0x1991dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x1991e0: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x1991e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1991e4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1991e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1991e8: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x1991e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1991ec: 0xc44100b0  lwc1        $f1, 0xB0($v0)
    ctx->pc = 0x1991ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1991f0: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x1991f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1991f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1991f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1991f8: 0x0  nop
    ctx->pc = 0x1991f8u;
    // NOP
    // 0x1991fc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1991FCu;
    {
        const bool branch_taken_0x1991fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1991fc) {
            ctx->pc = 0x19920Cu;
            goto label_19920c;
        }
    }
    ctx->pc = 0x199204u;
    // 0x199204: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x199204u;
    {
        const bool branch_taken_0x199204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199204u;
            // 0x199208: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199204) {
            ctx->pc = 0x199220u;
            goto label_199220;
        }
    }
    ctx->pc = 0x19920Cu;
label_19920c:
    // 0x19920c: 0x0  nop
    ctx->pc = 0x19920cu;
    // NOP
    // 0x199210: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x199214: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x199214u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x199218: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x199218u;
    {
        const bool branch_taken_0x199218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19921Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199218u;
            // 0x19921c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199218) {
            ctx->pc = 0x1991D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1991d8;
        }
    }
    ctx->pc = 0x199220u;
label_199220:
    // 0x199220: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x199220u;
    {
        const bool branch_taken_0x199220 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x199224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199220u;
            // 0x199224: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199220) {
            ctx->pc = 0x199234u;
            goto label_199234;
        }
    }
    ctx->pc = 0x199228u;
    // 0x199228: 0x86e30000  lh          $v1, 0x0($s7)
    ctx->pc = 0x199228u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x19922c: 0x2b31021  addu        $v0, $s5, $s3
    ctx->pc = 0x19922cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x199230: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x199230u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_199234:
    // 0x199234: 0x0  nop
    ctx->pc = 0x199234u;
    // NOP
    // 0x199238: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x199238u;
    {
        const bool branch_taken_0x199238 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x19923Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199238u;
            // 0x19923c: 0x2931021  addu        $v0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199238) {
            ctx->pc = 0x199244u;
            goto label_199244;
        }
    }
    ctx->pc = 0x199240u;
    // 0x199240: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x199240u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_199244:
    // 0x199244: 0x0  nop
    ctx->pc = 0x199244u;
    // NOP
    // 0x199248: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x199248u;
    {
        const bool branch_taken_0x199248 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x199248) {
            ctx->pc = 0x199254u;
            goto label_199254;
        }
    }
    ctx->pc = 0x199250u;
    // 0x199250: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x199250u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_199254:
    // 0x199254: 0x0  nop
    ctx->pc = 0x199254u;
    // NOP
    // 0x199258: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x199258u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x19925c: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x19925cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x199260: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x199260u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x199264: 0x1440ffa2  bnez        $v0, . + 4 + (-0x5E << 2)
    ctx->pc = 0x199264u;
    {
        const bool branch_taken_0x199264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199264u;
            // 0x199268: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199264) {
            ctx->pc = 0x1990F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1990f0;
        }
    }
    ctx->pc = 0x19926Cu;
label_19926c:
    // 0x19926c: 0x0  nop
    ctx->pc = 0x19926cu;
    // NOP
    // 0x199270: 0x13c00002  beqz        $fp, . + 4 + (0x2 << 2)
    ctx->pc = 0x199270u;
    {
        const bool branch_taken_0x199270 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x199274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199270u;
            // 0x199274: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199270) {
            ctx->pc = 0x19927Cu;
            goto label_19927c;
        }
    }
    ctx->pc = 0x199278u;
    // 0x199278: 0xafd00000  sw          $s0, 0x0($fp)
    ctx->pc = 0x199278u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 16));
label_19927c:
    // 0x19927c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x19927cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_199280:
    // 0x199280: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x199280u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x199284: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x199284u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x199288: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x199288u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19928c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x19928cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x199290: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x199290u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x199294: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x199294u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x199298: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x199298u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19929c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19929cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1992a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1992a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1992a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1992A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1992A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1992A4u;
            // 0x1992a8: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1992ACu;
}
