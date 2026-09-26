#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AnalyzeMoonFlower__FP9CEditDataP8CEditMap
// Address: 0x318130 - 0x3189b4
void AnalyzeMoonFlower__FP9CEditDataP8CEditMap_0x318130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AnalyzeMoonFlower__FP9CEditDataP8CEditMap_0x318130");
#endif

    switch (ctx->pc) {
        case 0x318168u: goto label_318168;
        case 0x3181ecu: goto label_3181ec;
        case 0x318204u: goto label_318204;
        case 0x318214u: goto label_318214;
        case 0x318258u: goto label_318258;
        case 0x318270u: goto label_318270;
        case 0x318284u: goto label_318284;
        case 0x31830cu: goto label_31830c;
        case 0x318324u: goto label_318324;
        case 0x318338u: goto label_318338;
        case 0x3183d4u: goto label_3183d4;
        case 0x3183ecu: goto label_3183ec;
        case 0x318400u: goto label_318400;
        case 0x31848cu: goto label_31848c;
        case 0x3184a0u: goto label_3184a0;
        case 0x3184b4u: goto label_3184b4;
        case 0x31858cu: goto label_31858c;
        case 0x3185a4u: goto label_3185a4;
        case 0x3185e8u: goto label_3185e8;
        case 0x3185fcu: goto label_3185fc;
        case 0x318610u: goto label_318610;
        case 0x318698u: goto label_318698;
        case 0x3186acu: goto label_3186ac;
        case 0x3186c0u: goto label_3186c0;
        case 0x318754u: goto label_318754;
        case 0x318768u: goto label_318768;
        case 0x31877cu: goto label_31877c;
        case 0x31880cu: goto label_31880c;
        case 0x318820u: goto label_318820;
        case 0x318834u: goto label_318834;
        case 0x3188c4u: goto label_3188c4;
        case 0x3188d8u: goto label_3188d8;
        case 0x3188ecu: goto label_3188ec;
        case 0x318968u: goto label_318968;
        case 0x31898cu: goto label_31898c;
        default: break;
    }

    ctx->pc = 0x318130u;

    // 0x318130: 0x27bdf560  addiu       $sp, $sp, -0xAA0
    ctx->pc = 0x318130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964576));
    // 0x318134: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x318134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x318138: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x318138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x31813c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x31813cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x318140: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x318140u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318144: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x318144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x318148: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x318148u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31814c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31814cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x318150: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x318150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318154: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x318154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x318158: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x318158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31815c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31815cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x318160: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x318160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x318164: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x318164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_318168:
    // 0x318168: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x318168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x31816c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x31816cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x318170: 0x24460080  addiu       $a2, $v0, 0x80
    ctx->pc = 0x318170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x318174: 0x24470180  addiu       $a3, $v0, 0x180
    ctx->pc = 0x318174u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x318178: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x318178u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x31817c: 0x28820040  slti        $v0, $a0, 0x40
    ctx->pc = 0x31817cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x318180: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x318180u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x318184: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x318184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x318188: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x318188u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x31818c: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x31818cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x318190: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x318190u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x318194: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x318194u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x318198: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x318198u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x31819c: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x31819cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x3181a0: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x3181a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x3181a4: 0xace30010  sw          $v1, 0x10($a3)
    ctx->pc = 0x3181a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 3));
    // 0x3181a8: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x3181a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
    // 0x3181ac: 0xace30014  sw          $v1, 0x14($a3)
    ctx->pc = 0x3181acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 3));
    // 0x3181b0: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x3181b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
    // 0x3181b4: 0xace30018  sw          $v1, 0x18($a3)
    ctx->pc = 0x3181b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
    // 0x3181b8: 0xacc0001c  sw          $zero, 0x1C($a2)
    ctx->pc = 0x3181b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
    // 0x3181bc: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x3181BCu;
    {
        const bool branch_taken_0x3181bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3181C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3181BCu;
            // 0x3181c0: 0xace3001c  sw          $v1, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3181bc) {
            ctx->pc = 0x318168u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_318168;
        }
    }
    ctx->pc = 0x3181C4u;
    // 0x3181c4: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x3181c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x3181c8: 0x27a30a90  addiu       $v1, $sp, 0xA90
    ctx->pc = 0x3181c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 2704));
    // 0x3181cc: 0x2442f9c0  addiu       $v0, $v0, -0x640
    ctx->pc = 0x3181ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965696));
    // 0x3181d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3181d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3181d4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3181d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3181d8: 0x24050039  addiu       $a1, $zero, 0x39
    ctx->pc = 0x3181d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x3181dc: 0x27a60290  addiu       $a2, $sp, 0x290
    ctx->pc = 0x3181dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x3181e0: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x3181e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3181e4: 0xc0bb9dc  jal         func_2EE770
    ctx->pc = 0x3181E4u;
    SET_GPR_U32(ctx, 31, 0x3181ECu);
    ctx->pc = 0x3181E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3181E4u;
            // 0x3181e8: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE770u;
    if (runtime->hasFunction(0x2EE770u)) {
        auto targetFn = runtime->lookupFunction(0x2EE770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3181ECu; }
        if (ctx->pc != 0x3181ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlacePartsAtInfoID__8CEditMapFiPii_0x2ee770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3181ECu; }
        if (ctx->pc != 0x3181ECu) { return; }
    }
    ctx->pc = 0x3181ECu;
label_3181ec:
    // 0x3181ec: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3181ECu;
    {
        const bool branch_taken_0x3181ec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3181F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3181ECu;
            // 0x3181f0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3181ec) {
            ctx->pc = 0x318248u;
            goto label_318248;
        }
    }
    ctx->pc = 0x3181F4u;
    // 0x3181f4: 0x8fa50290  lw          $a1, 0x290($sp)
    ctx->pc = 0x3181f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x3181f8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3181f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3181fc: 0xc0c5b84  jal         func_316E10
    ctx->pc = 0x3181FCu;
    SET_GPR_U32(ctx, 31, 0x318204u);
    ctx->pc = 0x318200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3181FCu;
            // 0x318200: 0x27a60280  addiu       $a2, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x316E10u;
    if (runtime->hasFunction(0x316E10u)) {
        auto targetFn = runtime->lookupFunction(0x316E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318204u; }
        if (ctx->pc != 0x318204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartsPos__FP8CEditMapiPf_0x316e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318204u; }
        if (ctx->pc != 0x318204u) { return; }
    }
    ctx->pc = 0x318204u;
label_318204:
    // 0x318204: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x318204u;
    {
        const bool branch_taken_0x318204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318204u;
            // 0x318208: 0x27a40280  addiu       $a0, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318204) {
            ctx->pc = 0x318244u;
            goto label_318244;
        }
    }
    ctx->pc = 0x31820Cu;
    // 0x31820c: 0xc04c018  jal         func_130060
    ctx->pc = 0x31820Cu;
    SET_GPR_U32(ctx, 31, 0x318214u);
    ctx->pc = 0x318210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31820Cu;
            // 0x318210: 0x27a50a90  addiu       $a1, $sp, 0xA90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318214u; }
        if (ctx->pc != 0x318214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318214u; }
        if (ctx->pc != 0x318214u) { return; }
    }
    ctx->pc = 0x318214u;
label_318214:
    // 0x318214: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x318214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x318218: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x318218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31821c: 0x0  nop
    ctx->pc = 0x31821cu;
    // NOP
    // 0x318220: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x318220u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x318224: 0x0  nop
    ctx->pc = 0x318224u;
    // NOP
    // 0x318228: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x318228u;
    {
        const bool branch_taken_0x318228 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31822Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318228u;
            // 0x31822c: 0x27a20280  addiu       $v0, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318228) {
            ctx->pc = 0x318244u;
            goto label_318244;
        }
    }
    ctx->pc = 0x318230u;
    // 0x318230: 0x27a30a90  addiu       $v1, $sp, 0xA90
    ctx->pc = 0x318230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 2704));
    // 0x318234: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x318234u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x318238: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x318238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31823c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x31823cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x318240: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x318240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_318244:
    // 0x318244: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x318244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_318248:
    // 0x318248: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x318248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x31824c: 0x27a60290  addiu       $a2, $sp, 0x290
    ctx->pc = 0x31824cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x318250: 0xc0bb9dc  jal         func_2EE770
    ctx->pc = 0x318250u;
    SET_GPR_U32(ctx, 31, 0x318258u);
    ctx->pc = 0x318254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318250u;
            // 0x318254: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE770u;
    if (runtime->hasFunction(0x2EE770u)) {
        auto targetFn = runtime->lookupFunction(0x2EE770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318258u; }
        if (ctx->pc != 0x318258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlacePartsAtInfoID__8CEditMapFiPii_0x2ee770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318258u; }
        if (ctx->pc != 0x318258u) { return; }
    }
    ctx->pc = 0x318258u;
label_318258:
    // 0x318258: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x318258u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31825c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x31825cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318260: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x318260u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x318264: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x318264u;
    {
        const bool branch_taken_0x318264 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x318268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318264u;
            // 0x318268: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318264) {
            ctx->pc = 0x3182E8u;
            goto label_3182e8;
        }
    }
    ctx->pc = 0x31826Cu;
    // 0x31826c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x31826cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_318270:
    // 0x318270: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x318270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x318274: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x318274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318278: 0x8c450290  lw          $a1, 0x290($v0)
    ctx->pc = 0x318278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 656)));
    // 0x31827c: 0xc0c5b84  jal         func_316E10
    ctx->pc = 0x31827Cu;
    SET_GPR_U32(ctx, 31, 0x318284u);
    ctx->pc = 0x318280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31827Cu;
            // 0x318280: 0x27a60280  addiu       $a2, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x316E10u;
    if (runtime->hasFunction(0x316E10u)) {
        auto targetFn = runtime->lookupFunction(0x316E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318284u; }
        if (ctx->pc != 0x318284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartsPos__FP8CEditMapiPf_0x316e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318284u; }
        if (ctx->pc != 0x318284u) { return; }
    }
    ctx->pc = 0x318284u;
label_318284:
    // 0x318284: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x318284u;
    {
        const bool branch_taken_0x318284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318284) {
            ctx->pc = 0x3182D4u;
            goto label_3182d4;
        }
    }
    ctx->pc = 0x31828Cu;
    // 0x31828c: 0xc7a20280  lwc1        $f2, 0x280($sp)
    ctx->pc = 0x31828cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x318290: 0xc7a10a90  lwc1        $f1, 0xA90($sp)
    ctx->pc = 0x318290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x318294: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x318294u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318298: 0x0  nop
    ctx->pc = 0x318298u;
    // NOP
    // 0x31829c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x31829cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x3182a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3182a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3182a4: 0x0  nop
    ctx->pc = 0x3182a4u;
    // NOP
    // 0x3182a8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3182A8u;
    {
        const bool branch_taken_0x3182a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3182a8) {
            ctx->pc = 0x3182B4u;
            goto label_3182b4;
        }
    }
    ctx->pc = 0x3182B0u;
    // 0x3182b0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3182b0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_3182b4:
    // 0x3182b4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x3182b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x3182b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3182b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3182bc: 0x0  nop
    ctx->pc = 0x3182bcu;
    // NOP
    // 0x3182c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3182c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3182c4: 0x0  nop
    ctx->pc = 0x3182c4u;
    // NOP
    // 0x3182c8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3182C8u;
    {
        const bool branch_taken_0x3182c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3182c8) {
            ctx->pc = 0x3182D4u;
            goto label_3182d4;
        }
    }
    ctx->pc = 0x3182D0u;
    // 0x3182d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3182d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3182d4:
    // 0x3182d4: 0x0  nop
    ctx->pc = 0x3182d4u;
    // NOP
    // 0x3182d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3182d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3182dc: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x3182dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x3182e0: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x3182E0u;
    {
        const bool branch_taken_0x3182e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3182E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3182E0u;
            // 0x3182e4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3182e0) {
            ctx->pc = 0x318270u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_318270;
        }
    }
    ctx->pc = 0x3182E8u;
label_3182e8:
    // 0x3182e8: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x3182e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x3182ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3182ECu;
    {
        const bool branch_taken_0x3182ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3182F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3182ECu;
            // 0x3182f0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3182ec) {
            ctx->pc = 0x3182FCu;
            goto label_3182fc;
        }
    }
    ctx->pc = 0x3182F4u;
    // 0x3182f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3182f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3182f8: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x3182f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
label_3182fc:
    // 0x3182fc: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x3182fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x318300: 0x27a60290  addiu       $a2, $sp, 0x290
    ctx->pc = 0x318300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x318304: 0xc0bb9dc  jal         func_2EE770
    ctx->pc = 0x318304u;
    SET_GPR_U32(ctx, 31, 0x31830Cu);
    ctx->pc = 0x318308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318304u;
            // 0x318308: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE770u;
    if (runtime->hasFunction(0x2EE770u)) {
        auto targetFn = runtime->lookupFunction(0x2EE770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31830Cu; }
        if (ctx->pc != 0x31830Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlacePartsAtInfoID__8CEditMapFiPii_0x2ee770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31830Cu; }
        if (ctx->pc != 0x31830Cu) { return; }
    }
    ctx->pc = 0x31830Cu;
label_31830c:
    // 0x31830c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x31830cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318310: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x318310u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318314: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x318314u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x318318: 0x10200025  beqz        $at, . + 4 + (0x25 << 2)
    ctx->pc = 0x318318u;
    {
        const bool branch_taken_0x318318 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31831Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318318u;
            // 0x31831c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318318) {
            ctx->pc = 0x3183B0u;
            goto label_3183b0;
        }
    }
    ctx->pc = 0x318320u;
    // 0x318320: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x318320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_318324:
    // 0x318324: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x318324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x318328: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x318328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31832c: 0x8c450290  lw          $a1, 0x290($v0)
    ctx->pc = 0x31832cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 656)));
    // 0x318330: 0xc0c5b84  jal         func_316E10
    ctx->pc = 0x318330u;
    SET_GPR_U32(ctx, 31, 0x318338u);
    ctx->pc = 0x318334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318330u;
            // 0x318334: 0x27a60280  addiu       $a2, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x316E10u;
    if (runtime->hasFunction(0x316E10u)) {
        auto targetFn = runtime->lookupFunction(0x316E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318338u; }
        if (ctx->pc != 0x318338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartsPos__FP8CEditMapiPf_0x316e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318338u; }
        if (ctx->pc != 0x318338u) { return; }
    }
    ctx->pc = 0x318338u;
label_318338:
    // 0x318338: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x318338u;
    {
        const bool branch_taken_0x318338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318338) {
            ctx->pc = 0x3183A0u;
            goto label_3183a0;
        }
    }
    ctx->pc = 0x318340u;
    // 0x318340: 0xc7a20280  lwc1        $f2, 0x280($sp)
    ctx->pc = 0x318340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x318344: 0xc7a10a90  lwc1        $f1, 0xA90($sp)
    ctx->pc = 0x318344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x318348: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x318348u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31834c: 0x0  nop
    ctx->pc = 0x31834cu;
    // NOP
    // 0x318350: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x318350u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x318354: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x318354u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x318358: 0x0  nop
    ctx->pc = 0x318358u;
    // NOP
    // 0x31835c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x31835Cu;
    {
        const bool branch_taken_0x31835c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31835c) {
            ctx->pc = 0x318368u;
            goto label_318368;
        }
    }
    ctx->pc = 0x318364u;
    // 0x318364: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x318364u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_318368:
    // 0x318368: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x318368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x31836c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31836cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318370: 0x0  nop
    ctx->pc = 0x318370u;
    // NOP
    // 0x318374: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x318374u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x318378: 0x0  nop
    ctx->pc = 0x318378u;
    // NOP
    // 0x31837c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x31837Cu;
    {
        const bool branch_taken_0x31837c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x318380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31837Cu;
            // 0x318380: 0x3c02437a  lui         $v0, 0x437A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31837c) {
            ctx->pc = 0x3183A0u;
            goto label_3183a0;
        }
    }
    ctx->pc = 0x318384u;
    // 0x318384: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x318384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318388: 0x0  nop
    ctx->pc = 0x318388u;
    // NOP
    // 0x31838c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x31838cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x318390: 0x0  nop
    ctx->pc = 0x318390u;
    // NOP
    // 0x318394: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x318394u;
    {
        const bool branch_taken_0x318394 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x318394) {
            ctx->pc = 0x3183A0u;
            goto label_3183a0;
        }
    }
    ctx->pc = 0x31839Cu;
    // 0x31839c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x31839cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3183a0:
    // 0x3183a0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3183a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3183a4: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x3183a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x3183a8: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x3183A8u;
    {
        const bool branch_taken_0x3183a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3183ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3183A8u;
            // 0x3183ac: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3183a8) {
            ctx->pc = 0x318324u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_318324;
        }
    }
    ctx->pc = 0x3183B0u;
label_3183b0:
    // 0x3183b0: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x3183b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3183b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3183B4u;
    {
        const bool branch_taken_0x3183b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3183B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3183B4u;
            // 0x3183b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3183b4) {
            ctx->pc = 0x3183C4u;
            goto label_3183c4;
        }
    }
    ctx->pc = 0x3183BCu;
    // 0x3183bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3183bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3183c0: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x3183c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
label_3183c4:
    // 0x3183c4: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x3183c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x3183c8: 0x27a60290  addiu       $a2, $sp, 0x290
    ctx->pc = 0x3183c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x3183cc: 0xc0bb9dc  jal         func_2EE770
    ctx->pc = 0x3183CCu;
    SET_GPR_U32(ctx, 31, 0x3183D4u);
    ctx->pc = 0x3183D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3183CCu;
            // 0x3183d0: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE770u;
    if (runtime->hasFunction(0x2EE770u)) {
        auto targetFn = runtime->lookupFunction(0x2EE770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3183D4u; }
        if (ctx->pc != 0x3183D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlacePartsAtInfoID__8CEditMapFiPii_0x2ee770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3183D4u; }
        if (ctx->pc != 0x3183D4u) { return; }
    }
    ctx->pc = 0x3183D4u;
label_3183d4:
    // 0x3183d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3183d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3183d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3183d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3183dc: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x3183dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x3183e0: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x3183E0u;
    {
        const bool branch_taken_0x3183e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3183E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3183E0u;
            // 0x3183e4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3183e0) {
            ctx->pc = 0x318460u;
            goto label_318460;
        }
    }
    ctx->pc = 0x3183E8u;
    // 0x3183e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3183e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3183ec:
    // 0x3183ec: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x3183ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x3183f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3183f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3183f4: 0x8c450290  lw          $a1, 0x290($v0)
    ctx->pc = 0x3183f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 656)));
    // 0x3183f8: 0xc0c5b84  jal         func_316E10
    ctx->pc = 0x3183F8u;
    SET_GPR_U32(ctx, 31, 0x318400u);
    ctx->pc = 0x3183FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3183F8u;
            // 0x3183fc: 0x27a60280  addiu       $a2, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x316E10u;
    if (runtime->hasFunction(0x316E10u)) {
        auto targetFn = runtime->lookupFunction(0x316E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318400u; }
        if (ctx->pc != 0x318400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartsPos__FP8CEditMapiPf_0x316e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318400u; }
        if (ctx->pc != 0x318400u) { return; }
    }
    ctx->pc = 0x318400u;
label_318400:
    // 0x318400: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x318400u;
    {
        const bool branch_taken_0x318400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318400) {
            ctx->pc = 0x318450u;
            goto label_318450;
        }
    }
    ctx->pc = 0x318408u;
    // 0x318408: 0xc7a20288  lwc1        $f2, 0x288($sp)
    ctx->pc = 0x318408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31840c: 0xc7a10a98  lwc1        $f1, 0xA98($sp)
    ctx->pc = 0x31840cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x318410: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x318410u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318414: 0x0  nop
    ctx->pc = 0x318414u;
    // NOP
    // 0x318418: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x318418u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x31841c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31841cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x318420: 0x0  nop
    ctx->pc = 0x318420u;
    // NOP
    // 0x318424: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x318424u;
    {
        const bool branch_taken_0x318424 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x318424) {
            ctx->pc = 0x318430u;
            goto label_318430;
        }
    }
    ctx->pc = 0x31842Cu;
    // 0x31842c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x31842cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_318430:
    // 0x318430: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x318430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x318434: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x318434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318438: 0x0  nop
    ctx->pc = 0x318438u;
    // NOP
    // 0x31843c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31843cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x318440: 0x0  nop
    ctx->pc = 0x318440u;
    // NOP
    // 0x318444: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x318444u;
    {
        const bool branch_taken_0x318444 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x318444) {
            ctx->pc = 0x318450u;
            goto label_318450;
        }
    }
    ctx->pc = 0x31844Cu;
    // 0x31844c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x31844cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_318450:
    // 0x318450: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x318450u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x318454: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x318454u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x318458: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x318458u;
    {
        const bool branch_taken_0x318458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31845Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318458u;
            // 0x31845c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318458) {
            ctx->pc = 0x3183ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3183ec;
        }
    }
    ctx->pc = 0x318460u;
label_318460:
    // 0x318460: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x318460u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x318464: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x318464u;
    {
        const bool branch_taken_0x318464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x318468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318464u;
            // 0x318468: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318464) {
            ctx->pc = 0x318474u;
            goto label_318474;
        }
    }
    ctx->pc = 0x31846Cu;
    // 0x31846c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31846cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x318470: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x318470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
label_318474:
    // 0x318474: 0x2405003d  addiu       $a1, $zero, 0x3D
    ctx->pc = 0x318474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x318478: 0x27a60290  addiu       $a2, $sp, 0x290
    ctx->pc = 0x318478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x31847c: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x31847cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x318480: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x318480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318484: 0xc0bb9dc  jal         func_2EE770
    ctx->pc = 0x318484u;
    SET_GPR_U32(ctx, 31, 0x31848Cu);
    ctx->pc = 0x318488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318484u;
            // 0x318488: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE770u;
    if (runtime->hasFunction(0x2EE770u)) {
        auto targetFn = runtime->lookupFunction(0x2EE770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31848Cu; }
        if (ctx->pc != 0x31848Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlacePartsAtInfoID__8CEditMapFiPii_0x2ee770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31848Cu; }
        if (ctx->pc != 0x31848Cu) { return; }
    }
    ctx->pc = 0x31848Cu;
label_31848c:
    // 0x31848c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x31848cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318490: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x318490u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x318494: 0x10200032  beqz        $at, . + 4 + (0x32 << 2)
    ctx->pc = 0x318494u;
    {
        const bool branch_taken_0x318494 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x318498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318494u;
            // 0x318498: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318494) {
            ctx->pc = 0x318560u;
            goto label_318560;
        }
    }
    ctx->pc = 0x31849Cu;
    // 0x31849c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x31849cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3184a0:
    // 0x3184a0: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x3184a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x3184a4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3184a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3184a8: 0x8c450290  lw          $a1, 0x290($v0)
    ctx->pc = 0x3184a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 656)));
    // 0x3184ac: 0xc0c5b84  jal         func_316E10
    ctx->pc = 0x3184ACu;
    SET_GPR_U32(ctx, 31, 0x3184B4u);
    ctx->pc = 0x3184B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3184ACu;
            // 0x3184b0: 0x27a60280  addiu       $a2, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x316E10u;
    if (runtime->hasFunction(0x316E10u)) {
        auto targetFn = runtime->lookupFunction(0x316E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3184B4u; }
        if (ctx->pc != 0x3184B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartsPos__FP8CEditMapiPf_0x316e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3184B4u; }
        if (ctx->pc != 0x3184B4u) { return; }
    }
    ctx->pc = 0x3184B4u;
label_3184b4:
    // 0x3184b4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x3184B4u;
    {
        const bool branch_taken_0x3184b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3184b4) {
            ctx->pc = 0x318550u;
            goto label_318550;
        }
    }
    ctx->pc = 0x3184BCu;
    // 0x3184bc: 0xc7a20288  lwc1        $f2, 0x288($sp)
    ctx->pc = 0x3184bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3184c0: 0xc7a10a98  lwc1        $f1, 0xA98($sp)
    ctx->pc = 0x3184c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3184c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3184c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3184c8: 0x0  nop
    ctx->pc = 0x3184c8u;
    // NOP
    // 0x3184cc: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x3184ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x3184d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3184d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3184d4: 0x0  nop
    ctx->pc = 0x3184d4u;
    // NOP
    // 0x3184d8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3184D8u;
    {
        const bool branch_taken_0x3184d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3184d8) {
            ctx->pc = 0x3184E4u;
            goto label_3184e4;
        }
    }
    ctx->pc = 0x3184E0u;
    // 0x3184e0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3184e0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_3184e4:
    // 0x3184e4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3184e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x3184e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3184e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3184ec: 0x0  nop
    ctx->pc = 0x3184ecu;
    // NOP
    // 0x3184f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3184f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3184f4: 0x0  nop
    ctx->pc = 0x3184f4u;
    // NOP
    // 0x3184f8: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x3184F8u;
    {
        const bool branch_taken_0x3184f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3184f8) {
            ctx->pc = 0x318550u;
            goto label_318550;
        }
    }
    ctx->pc = 0x318500u;
    // 0x318500: 0xc7a20280  lwc1        $f2, 0x280($sp)
    ctx->pc = 0x318500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x318504: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x318504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x318508: 0xc7a10a90  lwc1        $f1, 0xA90($sp)
    ctx->pc = 0x318508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31850c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31850cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318510: 0x0  nop
    ctx->pc = 0x318510u;
    // NOP
    // 0x318514: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x318514u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x318518: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x318518u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31851c: 0x0  nop
    ctx->pc = 0x31851cu;
    // NOP
    // 0x318520: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x318520u;
    {
        const bool branch_taken_0x318520 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x318520) {
            ctx->pc = 0x318530u;
            goto label_318530;
        }
    }
    ctx->pc = 0x318528u;
    // 0x318528: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x318528u;
    {
        const bool branch_taken_0x318528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31852Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318528u;
            // 0x31852c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318528) {
            ctx->pc = 0x318550u;
            goto label_318550;
        }
    }
    ctx->pc = 0x318530u;
label_318530:
    // 0x318530: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x318530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
    // 0x318534: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x318534u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318538: 0x0  nop
    ctx->pc = 0x318538u;
    // NOP
    // 0x31853c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31853cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x318540: 0x0  nop
    ctx->pc = 0x318540u;
    // NOP
    // 0x318544: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x318544u;
    {
        const bool branch_taken_0x318544 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x318544) {
            ctx->pc = 0x318550u;
            goto label_318550;
        }
    }
    ctx->pc = 0x31854Cu;
    // 0x31854c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x31854cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_318550:
    // 0x318550: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x318550u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x318554: 0x293102a  slt         $v0, $s4, $s3
    ctx->pc = 0x318554u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x318558: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x318558u;
    {
        const bool branch_taken_0x318558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31855Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318558u;
            // 0x31855c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318558) {
            ctx->pc = 0x3184A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3184a0;
        }
    }
    ctx->pc = 0x318560u;
label_318560:
    // 0x318560: 0x10102a  slt         $v0, $zero, $s0
    ctx->pc = 0x318560u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x318564: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x318564u;
    {
        const bool branch_taken_0x318564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318564) {
            ctx->pc = 0x318570u;
            goto label_318570;
        }
    }
    ctx->pc = 0x31856Cu;
    // 0x31856c: 0x11102a  slt         $v0, $zero, $s1
    ctx->pc = 0x31856cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_318570:
    // 0x318570: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x318570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x318574: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x318574u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x318578: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x318578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31857c: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x31857cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
    // 0x318580: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x318580u;
    {
        const bool branch_taken_0x318580 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x318584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318580u;
            // 0x318584: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318580) {
            ctx->pc = 0x3185C0u;
            goto label_3185c0;
        }
    }
    ctx->pc = 0x318588u;
    // 0x318588: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x318588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31858c:
    // 0x31858c: 0x21d1821  addu        $v1, $s0, $sp
    ctx->pc = 0x31858cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x318590: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x318590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x318594: 0x8c650290  lw          $a1, 0x290($v1)
    ctx->pc = 0x318594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 656)));
    // 0x318598: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x318598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31859c: 0xc0a5b68  jal         func_296DA0
    ctx->pc = 0x31859Cu;
    SET_GPR_U32(ctx, 31, 0x3185A4u);
    ctx->pc = 0x3185A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31859Cu;
            // 0x3185a0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296DA0u;
    if (runtime->hasFunction(0x296DA0u)) {
        auto targetFn = runtime->lookupFunction(0x296DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3185A4u; }
        if (ctx->pc != 0x3185A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRiverNum__8CEditMapFif_0x296da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3185A4u; }
        if (ctx->pc != 0x3185A4u) { return; }
    }
    ctx->pc = 0x3185A4u;
label_3185a4:
    // 0x3185a4: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3185A4u;
    {
        const bool branch_taken_0x3185a4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3185a4) {
            ctx->pc = 0x3185B0u;
            goto label_3185b0;
        }
    }
    ctx->pc = 0x3185ACu;
    // 0x3185ac: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3185acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3185b0:
    // 0x3185b0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3185b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3185b4: 0x253102a  slt         $v0, $s2, $s3
    ctx->pc = 0x3185b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x3185b8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3185B8u;
    {
        const bool branch_taken_0x3185b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3185BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3185B8u;
            // 0x3185bc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3185b8) {
            ctx->pc = 0x31858Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31858c;
        }
    }
    ctx->pc = 0x3185C0u;
label_3185c0:
    // 0x3185c0: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x3185c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3185c4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3185C4u;
    {
        const bool branch_taken_0x3185c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3185C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3185C4u;
            // 0x3185c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3185c4) {
            ctx->pc = 0x3185D4u;
            goto label_3185d4;
        }
    }
    ctx->pc = 0x3185CCu;
    // 0x3185cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3185ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3185d0: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x3185d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
label_3185d4:
    // 0x3185d4: 0x2405003e  addiu       $a1, $zero, 0x3E
    ctx->pc = 0x3185d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x3185d8: 0x27a60290  addiu       $a2, $sp, 0x290
    ctx->pc = 0x3185d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x3185dc: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x3185dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3185e0: 0xc0bb9dc  jal         func_2EE770
    ctx->pc = 0x3185E0u;
    SET_GPR_U32(ctx, 31, 0x3185E8u);
    ctx->pc = 0x3185E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3185E0u;
            // 0x3185e4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE770u;
    if (runtime->hasFunction(0x2EE770u)) {
        auto targetFn = runtime->lookupFunction(0x2EE770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3185E8u; }
        if (ctx->pc != 0x3185E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlacePartsAtInfoID__8CEditMapFiPii_0x2ee770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3185E8u; }
        if (ctx->pc != 0x3185E8u) { return; }
    }
    ctx->pc = 0x3185E8u;
label_3185e8:
    // 0x3185e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3185e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3185ec: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x3185ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x3185f0: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x3185F0u;
    {
        const bool branch_taken_0x3185f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3185F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3185F0u;
            // 0x3185f4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3185f0) {
            ctx->pc = 0x318670u;
            goto label_318670;
        }
    }
    ctx->pc = 0x3185F8u;
    // 0x3185f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3185f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3185fc:
    // 0x3185fc: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x3185fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x318600: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x318600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318604: 0x8c450290  lw          $a1, 0x290($v0)
    ctx->pc = 0x318604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 656)));
    // 0x318608: 0xc0c5b84  jal         func_316E10
    ctx->pc = 0x318608u;
    SET_GPR_U32(ctx, 31, 0x318610u);
    ctx->pc = 0x31860Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318608u;
            // 0x31860c: 0x27a60280  addiu       $a2, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x316E10u;
    if (runtime->hasFunction(0x316E10u)) {
        auto targetFn = runtime->lookupFunction(0x316E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318610u; }
        if (ctx->pc != 0x318610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartsPos__FP8CEditMapiPf_0x316e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318610u; }
        if (ctx->pc != 0x318610u) { return; }
    }
    ctx->pc = 0x318610u;
label_318610:
    // 0x318610: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x318610u;
    {
        const bool branch_taken_0x318610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318610) {
            ctx->pc = 0x31865Cu;
            goto label_31865c;
        }
    }
    ctx->pc = 0x318618u;
    // 0x318618: 0xc7a10280  lwc1        $f1, 0x280($sp)
    ctx->pc = 0x318618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31861c: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x31861cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
    // 0x318620: 0xc7a00a90  lwc1        $f0, 0xA90($sp)
    ctx->pc = 0x318620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x318624: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x318624u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x318628: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x318628u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31862c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x31862cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x318630: 0x0  nop
    ctx->pc = 0x318630u;
    // NOP
    // 0x318634: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x318634u;
    {
        const bool branch_taken_0x318634 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x318634) {
            ctx->pc = 0x31865Cu;
            goto label_31865c;
        }
    }
    ctx->pc = 0x31863Cu;
    // 0x31863c: 0xc7a10288  lwc1        $f1, 0x288($sp)
    ctx->pc = 0x31863cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x318640: 0xc7a00a98  lwc1        $f0, 0xA98($sp)
    ctx->pc = 0x318640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x318644: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x318644u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x318648: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x318648u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31864c: 0x0  nop
    ctx->pc = 0x31864cu;
    // NOP
    // 0x318650: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x318650u;
    {
        const bool branch_taken_0x318650 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x318650) {
            ctx->pc = 0x31865Cu;
            goto label_31865c;
        }
    }
    ctx->pc = 0x318658u;
    // 0x318658: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x318658u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_31865c:
    // 0x31865c: 0x0  nop
    ctx->pc = 0x31865cu;
    // NOP
    // 0x318660: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x318660u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x318664: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x318664u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x318668: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x318668u;
    {
        const bool branch_taken_0x318668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31866Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318668u;
            // 0x31866c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318668) {
            ctx->pc = 0x3185FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3185fc;
        }
    }
    ctx->pc = 0x318670u;
label_318670:
    // 0x318670: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x318670u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x318674: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x318674u;
    {
        const bool branch_taken_0x318674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x318678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318674u;
            // 0x318678: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318674) {
            ctx->pc = 0x318684u;
            goto label_318684;
        }
    }
    ctx->pc = 0x31867Cu;
    // 0x31867c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31867cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x318680: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x318680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
label_318684:
    // 0x318684: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x318684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x318688: 0x27a60290  addiu       $a2, $sp, 0x290
    ctx->pc = 0x318688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x31868c: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x31868cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x318690: 0xc0bb9dc  jal         func_2EE770
    ctx->pc = 0x318690u;
    SET_GPR_U32(ctx, 31, 0x318698u);
    ctx->pc = 0x318694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318690u;
            // 0x318694: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE770u;
    if (runtime->hasFunction(0x2EE770u)) {
        auto targetFn = runtime->lookupFunction(0x2EE770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318698u; }
        if (ctx->pc != 0x318698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlacePartsAtInfoID__8CEditMapFiPii_0x2ee770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318698u; }
        if (ctx->pc != 0x318698u) { return; }
    }
    ctx->pc = 0x318698u;
label_318698:
    // 0x318698: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x318698u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31869c: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x31869cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x3186a0: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x3186A0u;
    {
        const bool branch_taken_0x3186a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3186A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3186A0u;
            // 0x3186a4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3186a0) {
            ctx->pc = 0x318730u;
            goto label_318730;
        }
    }
    ctx->pc = 0x3186A8u;
    // 0x3186a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3186a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3186ac:
    // 0x3186ac: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x3186acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x3186b0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3186b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3186b4: 0x8c450290  lw          $a1, 0x290($v0)
    ctx->pc = 0x3186b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 656)));
    // 0x3186b8: 0xc0c5b84  jal         func_316E10
    ctx->pc = 0x3186B8u;
    SET_GPR_U32(ctx, 31, 0x3186C0u);
    ctx->pc = 0x3186BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3186B8u;
            // 0x3186bc: 0x27a60280  addiu       $a2, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x316E10u;
    if (runtime->hasFunction(0x316E10u)) {
        auto targetFn = runtime->lookupFunction(0x316E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3186C0u; }
        if (ctx->pc != 0x3186C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartsPos__FP8CEditMapiPf_0x316e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3186C0u; }
        if (ctx->pc != 0x3186C0u) { return; }
    }
    ctx->pc = 0x3186C0u;
label_3186c0:
    // 0x3186c0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3186C0u;
    {
        const bool branch_taken_0x3186c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3186c0) {
            ctx->pc = 0x31871Cu;
            goto label_31871c;
        }
    }
    ctx->pc = 0x3186C8u;
    // 0x3186c8: 0xc7a20280  lwc1        $f2, 0x280($sp)
    ctx->pc = 0x3186c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3186cc: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x3186ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x3186d0: 0xc7a10a90  lwc1        $f1, 0xA90($sp)
    ctx->pc = 0x3186d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3186d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3186d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3186d8: 0x0  nop
    ctx->pc = 0x3186d8u;
    // NOP
    // 0x3186dc: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x3186dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x3186e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3186e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3186e4: 0x0  nop
    ctx->pc = 0x3186e4u;
    // NOP
    // 0x3186e8: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x3186E8u;
    {
        const bool branch_taken_0x3186e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3186e8) {
            ctx->pc = 0x31871Cu;
            goto label_31871c;
        }
    }
    ctx->pc = 0x3186F0u;
    // 0x3186f0: 0xc7a20288  lwc1        $f2, 0x288($sp)
    ctx->pc = 0x3186f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3186f4: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x3186f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
    // 0x3186f8: 0xc7a10a98  lwc1        $f1, 0xA98($sp)
    ctx->pc = 0x3186f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3186fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3186fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318700: 0x0  nop
    ctx->pc = 0x318700u;
    // NOP
    // 0x318704: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x318704u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x318708: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x318708u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31870c: 0x0  nop
    ctx->pc = 0x31870cu;
    // NOP
    // 0x318710: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x318710u;
    {
        const bool branch_taken_0x318710 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x318710) {
            ctx->pc = 0x31871Cu;
            goto label_31871c;
        }
    }
    ctx->pc = 0x318718u;
    // 0x318718: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x318718u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_31871c:
    // 0x31871c: 0x0  nop
    ctx->pc = 0x31871cu;
    // NOP
    // 0x318720: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x318720u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x318724: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x318724u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x318728: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x318728u;
    {
        const bool branch_taken_0x318728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31872Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318728u;
            // 0x31872c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318728) {
            ctx->pc = 0x3186ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3186ac;
        }
    }
    ctx->pc = 0x318730u;
label_318730:
    // 0x318730: 0x1a200003  blez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x318730u;
    {
        const bool branch_taken_0x318730 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x318734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318730u;
            // 0x318734: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318730) {
            ctx->pc = 0x318740u;
            goto label_318740;
        }
    }
    ctx->pc = 0x318738u;
    // 0x318738: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x318738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31873c: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x31873cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
label_318740:
    // 0x318740: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x318740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x318744: 0x27a60290  addiu       $a2, $sp, 0x290
    ctx->pc = 0x318744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x318748: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x318748u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x31874c: 0xc0bb9dc  jal         func_2EE770
    ctx->pc = 0x31874Cu;
    SET_GPR_U32(ctx, 31, 0x318754u);
    ctx->pc = 0x318750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31874Cu;
            // 0x318750: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE770u;
    if (runtime->hasFunction(0x2EE770u)) {
        auto targetFn = runtime->lookupFunction(0x2EE770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318754u; }
        if (ctx->pc != 0x318754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlacePartsAtInfoID__8CEditMapFiPii_0x2ee770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318754u; }
        if (ctx->pc != 0x318754u) { return; }
    }
    ctx->pc = 0x318754u;
label_318754:
    // 0x318754: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x318754u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318758: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x318758u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x31875c: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x31875Cu;
    {
        const bool branch_taken_0x31875c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x318760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31875Cu;
            // 0x318760: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31875c) {
            ctx->pc = 0x3187E8u;
            goto label_3187e8;
        }
    }
    ctx->pc = 0x318764u;
    // 0x318764: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x318764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_318768:
    // 0x318768: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x318768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x31876c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x31876cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318770: 0x8c450290  lw          $a1, 0x290($v0)
    ctx->pc = 0x318770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 656)));
    // 0x318774: 0xc0c5b84  jal         func_316E10
    ctx->pc = 0x318774u;
    SET_GPR_U32(ctx, 31, 0x31877Cu);
    ctx->pc = 0x318778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318774u;
            // 0x318778: 0x27a60280  addiu       $a2, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x316E10u;
    if (runtime->hasFunction(0x316E10u)) {
        auto targetFn = runtime->lookupFunction(0x316E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31877Cu; }
        if (ctx->pc != 0x31877Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartsPos__FP8CEditMapiPf_0x316e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31877Cu; }
        if (ctx->pc != 0x31877Cu) { return; }
    }
    ctx->pc = 0x31877Cu;
label_31877c:
    // 0x31877c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x31877Cu;
    {
        const bool branch_taken_0x31877c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31877c) {
            ctx->pc = 0x3187D8u;
            goto label_3187d8;
        }
    }
    ctx->pc = 0x318784u;
    // 0x318784: 0xc7a20280  lwc1        $f2, 0x280($sp)
    ctx->pc = 0x318784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x318788: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x318788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x31878c: 0xc7a10a90  lwc1        $f1, 0xA90($sp)
    ctx->pc = 0x31878cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x318790: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x318790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318794: 0x0  nop
    ctx->pc = 0x318794u;
    // NOP
    // 0x318798: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x318798u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x31879c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31879cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3187a0: 0x0  nop
    ctx->pc = 0x3187a0u;
    // NOP
    // 0x3187a4: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x3187A4u;
    {
        const bool branch_taken_0x3187a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3187a4) {
            ctx->pc = 0x3187D8u;
            goto label_3187d8;
        }
    }
    ctx->pc = 0x3187ACu;
    // 0x3187ac: 0xc7a20288  lwc1        $f2, 0x288($sp)
    ctx->pc = 0x3187acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3187b0: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x3187b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
    // 0x3187b4: 0xc7a10a98  lwc1        $f1, 0xA98($sp)
    ctx->pc = 0x3187b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3187b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3187b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3187bc: 0x0  nop
    ctx->pc = 0x3187bcu;
    // NOP
    // 0x3187c0: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x3187c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x3187c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3187c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3187c8: 0x0  nop
    ctx->pc = 0x3187c8u;
    // NOP
    // 0x3187cc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3187CCu;
    {
        const bool branch_taken_0x3187cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3187cc) {
            ctx->pc = 0x3187D8u;
            goto label_3187d8;
        }
    }
    ctx->pc = 0x3187D4u;
    // 0x3187d4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3187d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3187d8:
    // 0x3187d8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3187d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3187dc: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x3187dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x3187e0: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x3187E0u;
    {
        const bool branch_taken_0x3187e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3187E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3187E0u;
            // 0x3187e4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3187e0) {
            ctx->pc = 0x318768u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_318768;
        }
    }
    ctx->pc = 0x3187E8u;
label_3187e8:
    // 0x3187e8: 0x1a200003  blez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3187E8u;
    {
        const bool branch_taken_0x3187e8 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x3187ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3187E8u;
            // 0x3187ec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3187e8) {
            ctx->pc = 0x3187F8u;
            goto label_3187f8;
        }
    }
    ctx->pc = 0x3187F0u;
    // 0x3187f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3187f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3187f4: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x3187f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_3187f8:
    // 0x3187f8: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x3187f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x3187fc: 0x27a60290  addiu       $a2, $sp, 0x290
    ctx->pc = 0x3187fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x318800: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x318800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x318804: 0xc0bb9dc  jal         func_2EE770
    ctx->pc = 0x318804u;
    SET_GPR_U32(ctx, 31, 0x31880Cu);
    ctx->pc = 0x318808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318804u;
            // 0x318808: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE770u;
    if (runtime->hasFunction(0x2EE770u)) {
        auto targetFn = runtime->lookupFunction(0x2EE770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31880Cu; }
        if (ctx->pc != 0x31880Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlacePartsAtInfoID__8CEditMapFiPii_0x2ee770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31880Cu; }
        if (ctx->pc != 0x31880Cu) { return; }
    }
    ctx->pc = 0x31880Cu;
label_31880c:
    // 0x31880c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x31880cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318810: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x318810u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x318814: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x318814u;
    {
        const bool branch_taken_0x318814 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x318818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318814u;
            // 0x318818: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318814) {
            ctx->pc = 0x3188A0u;
            goto label_3188a0;
        }
    }
    ctx->pc = 0x31881Cu;
    // 0x31881c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x31881cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_318820:
    // 0x318820: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x318820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x318824: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x318824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318828: 0x8c450290  lw          $a1, 0x290($v0)
    ctx->pc = 0x318828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 656)));
    // 0x31882c: 0xc0c5b84  jal         func_316E10
    ctx->pc = 0x31882Cu;
    SET_GPR_U32(ctx, 31, 0x318834u);
    ctx->pc = 0x318830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31882Cu;
            // 0x318830: 0x27a60280  addiu       $a2, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x316E10u;
    if (runtime->hasFunction(0x316E10u)) {
        auto targetFn = runtime->lookupFunction(0x316E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318834u; }
        if (ctx->pc != 0x318834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartsPos__FP8CEditMapiPf_0x316e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318834u; }
        if (ctx->pc != 0x318834u) { return; }
    }
    ctx->pc = 0x318834u;
label_318834:
    // 0x318834: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x318834u;
    {
        const bool branch_taken_0x318834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318834) {
            ctx->pc = 0x318890u;
            goto label_318890;
        }
    }
    ctx->pc = 0x31883Cu;
    // 0x31883c: 0xc7a20280  lwc1        $f2, 0x280($sp)
    ctx->pc = 0x31883cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x318840: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x318840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
    // 0x318844: 0xc7a10a90  lwc1        $f1, 0xA90($sp)
    ctx->pc = 0x318844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x318848: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x318848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31884c: 0x0  nop
    ctx->pc = 0x31884cu;
    // NOP
    // 0x318850: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x318850u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x318854: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x318854u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x318858: 0x0  nop
    ctx->pc = 0x318858u;
    // NOP
    // 0x31885c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x31885Cu;
    {
        const bool branch_taken_0x31885c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31885c) {
            ctx->pc = 0x318890u;
            goto label_318890;
        }
    }
    ctx->pc = 0x318864u;
    // 0x318864: 0xc7a20288  lwc1        $f2, 0x288($sp)
    ctx->pc = 0x318864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x318868: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x318868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x31886c: 0xc7a10a98  lwc1        $f1, 0xA98($sp)
    ctx->pc = 0x31886cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x318870: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x318870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318874: 0x0  nop
    ctx->pc = 0x318874u;
    // NOP
    // 0x318878: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x318878u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x31887c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31887cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x318880: 0x0  nop
    ctx->pc = 0x318880u;
    // NOP
    // 0x318884: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x318884u;
    {
        const bool branch_taken_0x318884 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x318884) {
            ctx->pc = 0x318890u;
            goto label_318890;
        }
    }
    ctx->pc = 0x31888Cu;
    // 0x31888c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x31888cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_318890:
    // 0x318890: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x318890u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x318894: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x318894u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x318898: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x318898u;
    {
        const bool branch_taken_0x318898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31889Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318898u;
            // 0x31889c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318898) {
            ctx->pc = 0x318820u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_318820;
        }
    }
    ctx->pc = 0x3188A0u;
label_3188a0:
    // 0x3188a0: 0x1a200003  blez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3188A0u;
    {
        const bool branch_taken_0x3188a0 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x3188A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3188A0u;
            // 0x3188a4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3188a0) {
            ctx->pc = 0x3188B0u;
            goto label_3188b0;
        }
    }
    ctx->pc = 0x3188A8u;
    // 0x3188a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3188a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3188ac: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x3188acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
label_3188b0:
    // 0x3188b0: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x3188b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x3188b4: 0x27a60290  addiu       $a2, $sp, 0x290
    ctx->pc = 0x3188b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x3188b8: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x3188b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3188bc: 0xc0bb9dc  jal         func_2EE770
    ctx->pc = 0x3188BCu;
    SET_GPR_U32(ctx, 31, 0x3188C4u);
    ctx->pc = 0x3188C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3188BCu;
            // 0x3188c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE770u;
    if (runtime->hasFunction(0x2EE770u)) {
        auto targetFn = runtime->lookupFunction(0x2EE770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3188C4u; }
        if (ctx->pc != 0x3188C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlacePartsAtInfoID__8CEditMapFiPii_0x2ee770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3188C4u; }
        if (ctx->pc != 0x3188C4u) { return; }
    }
    ctx->pc = 0x3188C4u;
label_3188c4:
    // 0x3188c4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3188c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3188c8: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x3188c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x3188cc: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x3188CCu;
    {
        const bool branch_taken_0x3188cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3188D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3188CCu;
            // 0x3188d0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3188cc) {
            ctx->pc = 0x318948u;
            goto label_318948;
        }
    }
    ctx->pc = 0x3188D4u;
    // 0x3188d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3188d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3188d8:
    // 0x3188d8: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x3188d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x3188dc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3188dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3188e0: 0x8c450290  lw          $a1, 0x290($v0)
    ctx->pc = 0x3188e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 656)));
    // 0x3188e4: 0xc0c5b84  jal         func_316E10
    ctx->pc = 0x3188E4u;
    SET_GPR_U32(ctx, 31, 0x3188ECu);
    ctx->pc = 0x3188E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3188E4u;
            // 0x3188e8: 0x27a60280  addiu       $a2, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x316E10u;
    if (runtime->hasFunction(0x316E10u)) {
        auto targetFn = runtime->lookupFunction(0x316E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3188ECu; }
        if (ctx->pc != 0x3188ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartsPos__FP8CEditMapiPf_0x316e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3188ECu; }
        if (ctx->pc != 0x3188ECu) { return; }
    }
    ctx->pc = 0x3188ECu;
label_3188ec:
    // 0x3188ec: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3188ECu;
    {
        const bool branch_taken_0x3188ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3188ec) {
            ctx->pc = 0x318938u;
            goto label_318938;
        }
    }
    ctx->pc = 0x3188F4u;
    // 0x3188f4: 0xc7a10280  lwc1        $f1, 0x280($sp)
    ctx->pc = 0x3188f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3188f8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x3188f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x3188fc: 0xc7a00a90  lwc1        $f0, 0xA90($sp)
    ctx->pc = 0x3188fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x318900: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x318900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x318904: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x318904u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x318908: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x318908u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31890c: 0x0  nop
    ctx->pc = 0x31890cu;
    // NOP
    // 0x318910: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x318910u;
    {
        const bool branch_taken_0x318910 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x318910) {
            ctx->pc = 0x318938u;
            goto label_318938;
        }
    }
    ctx->pc = 0x318918u;
    // 0x318918: 0xc7a10288  lwc1        $f1, 0x288($sp)
    ctx->pc = 0x318918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31891c: 0xc7a00a98  lwc1        $f0, 0xA98($sp)
    ctx->pc = 0x31891cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x318920: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x318920u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x318924: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x318924u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x318928: 0x0  nop
    ctx->pc = 0x318928u;
    // NOP
    // 0x31892c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x31892Cu;
    {
        const bool branch_taken_0x31892c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31892c) {
            ctx->pc = 0x318938u;
            goto label_318938;
        }
    }
    ctx->pc = 0x318934u;
    // 0x318934: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x318934u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_318938:
    // 0x318938: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x318938u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x31893c: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x31893cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x318940: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x318940u;
    {
        const bool branch_taken_0x318940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x318944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318940u;
            // 0x318944: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318940) {
            ctx->pc = 0x3188D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3188d8;
        }
    }
    ctx->pc = 0x318948u;
label_318948:
    // 0x318948: 0x1a200003  blez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x318948u;
    {
        const bool branch_taken_0x318948 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x31894Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318948u;
            // 0x31894c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318948) {
            ctx->pc = 0x318958u;
            goto label_318958;
        }
    }
    ctx->pc = 0x318950u;
    // 0x318950: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x318950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x318954: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x318954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
label_318958:
    // 0x318958: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x318958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x31895c: 0x27a60290  addiu       $a2, $sp, 0x290
    ctx->pc = 0x31895cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x318960: 0xc0bb9dc  jal         func_2EE770
    ctx->pc = 0x318960u;
    SET_GPR_U32(ctx, 31, 0x318968u);
    ctx->pc = 0x318964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318960u;
            // 0x318964: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE770u;
    if (runtime->hasFunction(0x2EE770u)) {
        auto targetFn = runtime->lookupFunction(0x2EE770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318968u; }
        if (ctx->pc != 0x318968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlacePartsAtInfoID__8CEditMapFiPii_0x2ee770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318968u; }
        if (ctx->pc != 0x318968u) { return; }
    }
    ctx->pc = 0x318968u;
label_318968:
    // 0x318968: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x318968u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x31896c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x31896cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318970: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x318970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x318974: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x318974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x318978: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x318978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31897c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31897cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x318980: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x318980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x318984: 0xc0aa7f4  jal         func_2A9FD0
    ctx->pc = 0x318984u;
    SET_GPR_U32(ctx, 31, 0x31898Cu);
    ctx->pc = 0x318988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318984u;
            // 0x318988: 0x27a70180  addiu       $a3, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9FD0u;
    if (runtime->hasFunction(0x2A9FD0u)) {
        auto targetFn = runtime->lookupFunction(0x2A9FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31898Cu; }
        if (ctx->pc != 0x31898Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Analize__9CEditDataFiPiPi_0x2a9fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31898Cu; }
        if (ctx->pc != 0x31898Cu) { return; }
    }
    ctx->pc = 0x31898Cu;
label_31898c:
    // 0x31898c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x31898cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x318990: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x318990u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x318994: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x318994u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x318998: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x318998u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31899c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31899cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3189a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3189a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3189a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3189a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3189a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3189a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3189ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3189ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3189B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3189ACu;
            // 0x3189b0: 0x27bd0aa0  addiu       $sp, $sp, 0xAA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2720));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3189B4u;
}
