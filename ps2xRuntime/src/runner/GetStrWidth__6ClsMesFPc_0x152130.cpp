#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetStrWidth__6ClsMesFPc
// Address: 0x152130 - 0x1522b4
void GetStrWidth__6ClsMesFPc_0x152130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetStrWidth__6ClsMesFPc_0x152130");
#endif

    switch (ctx->pc) {
        case 0x152174u: goto label_152174;
        case 0x152188u: goto label_152188;
        case 0x152194u: goto label_152194;
        case 0x1521c4u: goto label_1521c4;
        case 0x1521fcu: goto label_1521fc;
        case 0x152210u: goto label_152210;
        case 0x15222cu: goto label_15222c;
        case 0x152248u: goto label_152248;
        case 0x152254u: goto label_152254;
        default: break;
    }

    ctx->pc = 0x152130u;

    // 0x152130: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x152130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x152134: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x152134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x152138: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x152138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x15213c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15213cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x152140: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x152140u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152144: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x152144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x152148: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x152148u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15214c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15214cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x152150: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x152150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x152154: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x152154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x152158: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x152158u;
    {
        const bool branch_taken_0x152158 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x15215Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152158u;
            // 0x15215c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152158) {
            ctx->pc = 0x152168u;
            goto label_152168;
        }
    }
    ctx->pc = 0x152160u;
    // 0x152160: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x152160u;
    {
        const bool branch_taken_0x152160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152160u;
            // 0x152164: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152160) {
            ctx->pc = 0x15228Cu;
            goto label_15228c;
        }
    }
    ctx->pc = 0x152168u;
label_152168:
    // 0x152168: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x152168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15216c: 0xc04a422  jal         func_129088
    ctx->pc = 0x15216Cu;
    SET_GPR_U32(ctx, 31, 0x152174u);
    ctx->pc = 0x152170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15216Cu;
            // 0x152170: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152174u; }
        if (ctx->pc != 0x152174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152174u; }
        if (ctx->pc != 0x152174u) { return; }
    }
    ctx->pc = 0x152174u;
label_152174:
    // 0x152174: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x152174u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152178: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x152178u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x15217c: 0x10200041  beqz        $at, . + 4 + (0x41 << 2)
    ctx->pc = 0x15217Cu;
    {
        const bool branch_taken_0x15217c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x152180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15217Cu;
            // 0x152180: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15217c) {
            ctx->pc = 0x152284u;
            goto label_152284;
        }
    }
    ctx->pc = 0x152184u;
    // 0x152184: 0x2b2a021  addu        $s4, $s5, $s2
    ctx->pc = 0x152184u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
label_152188:
    // 0x152188: 0x82850000  lb          $a1, 0x0($s4)
    ctx->pc = 0x152188u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x15218c: 0xc0b522c  jal         func_2D48B0
    ctx->pc = 0x15218Cu;
    SET_GPR_U32(ctx, 31, 0x152194u);
    ctx->pc = 0x152190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15218Cu;
            // 0x152190: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D48B0u;
    if (runtime->hasFunction(0x2D48B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D48B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152194u; }
        if (ctx->pc != 0x152194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHalfFontNo__5CFontFc_0x2d48b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152194u; }
        if (ctx->pc != 0x152194u) { return; }
    }
    ctx->pc = 0x152194u;
label_152194:
    // 0x152194: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x152194u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152198: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x152198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x15219c: 0x16620003  bne         $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15219Cu;
    {
        const bool branch_taken_0x15219c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x15219c) {
            ctx->pc = 0x1521ACu;
            goto label_1521ac;
        }
    }
    ctx->pc = 0x1521A4u;
    // 0x1521a4: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1521A4u;
    {
        const bool branch_taken_0x1521a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1521A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1521A4u;
            // 0x1521a8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1521a4) {
            ctx->pc = 0x152274u;
            goto label_152274;
        }
    }
    ctx->pc = 0x1521ACu;
label_1521ac:
    // 0x1521ac: 0x0  nop
    ctx->pc = 0x1521acu;
    // NOP
    // 0x1521b0: 0x260082a  slt         $at, $s3, $zero
    ctx->pc = 0x1521b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1521b4: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x1521B4u;
    {
        const bool branch_taken_0x1521b4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1521B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1521B4u;
            // 0x1521b8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1521b4) {
            ctx->pc = 0x152208u;
            goto label_152208;
        }
    }
    ctx->pc = 0x1521BCu;
    // 0x1521bc: 0xc0b522c  jal         func_2D48B0
    ctx->pc = 0x1521BCu;
    SET_GPR_U32(ctx, 31, 0x1521C4u);
    ctx->pc = 0x1521C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1521BCu;
            // 0x1521c0: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D48B0u;
    if (runtime->hasFunction(0x2D48B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D48B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1521C4u; }
        if (ctx->pc != 0x1521C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHalfFontNo__5CFontFc_0x2d48b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1521C4u; }
        if (ctx->pc != 0x1521C4u) { return; }
    }
    ctx->pc = 0x1521C4u;
label_1521c4:
    // 0x1521c4: 0x16620008  bne         $s3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1521C4u;
    {
        const bool branch_taken_0x1521c4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1521c4) {
            ctx->pc = 0x1521E8u;
            goto label_1521e8;
        }
    }
    ctx->pc = 0x1521CCu;
    // 0x1521cc: 0x8ec300c0  lw          $v1, 0xC0($s6)
    ctx->pc = 0x1521ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 192)));
    // 0x1521d0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1521D0u;
    {
        const bool branch_taken_0x1521d0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1521D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1521D0u;
            // 0x1521d4: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1521d0) {
            ctx->pc = 0x1521E0u;
            goto label_1521e0;
        }
    }
    ctx->pc = 0x1521D8u;
    // 0x1521d8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1521d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1521dc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1521dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1521e0:
    // 0x1521e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1521E0u;
    {
        const bool branch_taken_0x1521e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1521E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1521E0u;
            // 0x1521e4: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1521e0) {
            ctx->pc = 0x152200u;
            goto label_152200;
        }
    }
    ctx->pc = 0x1521E8u;
label_1521e8:
    // 0x1521e8: 0xc6c100c0  lwc1        $f1, 0xC0($s6)
    ctx->pc = 0x1521e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1521ec: 0xc6c000c8  lwc1        $f0, 0xC8($s6)
    ctx->pc = 0x1521ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1521f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1521f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1521f4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1521F4u;
    SET_GPR_U32(ctx, 31, 0x1521FCu);
    ctx->pc = 0x1521F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1521F4u;
            // 0x1521f8: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1521FCu; }
        if (ctx->pc != 0x1521FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1521FCu; }
        if (ctx->pc != 0x1521FCu) { return; }
    }
    ctx->pc = 0x1521FCu;
label_1521fc:
    // 0x1521fc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1521fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_152200:
    // 0x152200: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x152200u;
    {
        const bool branch_taken_0x152200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152200u;
            // 0x152204: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152200) {
            ctx->pc = 0x152274u;
            goto label_152274;
        }
    }
    ctx->pc = 0x152208u;
label_152208:
    // 0x152208: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x152208u;
    SET_GPR_U32(ctx, 31, 0x152210u);
    ctx->pc = 0x15220Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152208u;
            // 0x15220c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152210u; }
        if (ctx->pc != 0x152210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152210u; }
        if (ctx->pc != 0x152210u) { return; }
    }
    ctx->pc = 0x152210u;
label_152210:
    // 0x152210: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x152210u;
    {
        const bool branch_taken_0x152210 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x152210) {
            ctx->pc = 0x152220u;
            goto label_152220;
        }
    }
    ctx->pc = 0x152218u;
    // 0x152218: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x152218u;
    {
        const bool branch_taken_0x152218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15221Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152218u;
            // 0x15221c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152218) {
            ctx->pc = 0x152274u;
            goto label_152274;
        }
    }
    ctx->pc = 0x152220u;
label_152220:
    // 0x152220: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x152220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152224: 0xc0b50fc  jal         func_2D43F0
    ctx->pc = 0x152224u;
    SET_GPR_U32(ctx, 31, 0x15222Cu);
    ctx->pc = 0x152228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152224u;
            // 0x152228: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D43F0u;
    if (runtime->hasFunction(0x2D43F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D43F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15222Cu; }
        if (ctx->pc != 0x15222Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckKanjiFont__5CFontFi_0x2d43f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15222Cu; }
        if (ctx->pc != 0x15222Cu) { return; }
    }
    ctx->pc = 0x15222Cu;
label_15222c:
    // 0x15222c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15222Cu;
    {
        const bool branch_taken_0x15222c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15222c) {
            ctx->pc = 0x152240u;
            goto label_152240;
        }
    }
    ctx->pc = 0x152234u;
    // 0x152234: 0x8ec200c0  lw          $v0, 0xC0($s6)
    ctx->pc = 0x152234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 192)));
    // 0x152238: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x152238u;
    {
        const bool branch_taken_0x152238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15223Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152238u;
            // 0x15223c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152238) {
            ctx->pc = 0x152270u;
            goto label_152270;
        }
    }
    ctx->pc = 0x152240u;
label_152240:
    // 0x152240: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x152240u;
    SET_GPR_U32(ctx, 31, 0x152248u);
    ctx->pc = 0x152244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152240u;
            // 0x152244: 0x26840002  addiu       $a0, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152248u; }
        if (ctx->pc != 0x152248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152248u; }
        if (ctx->pc != 0x152248u) { return; }
    }
    ctx->pc = 0x152248u;
label_152248:
    // 0x152248: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x152248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15224c: 0xc0b50fc  jal         func_2D43F0
    ctx->pc = 0x15224Cu;
    SET_GPR_U32(ctx, 31, 0x152254u);
    ctx->pc = 0x152250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15224Cu;
            // 0x152250: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D43F0u;
    if (runtime->hasFunction(0x2D43F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D43F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152254u; }
        if (ctx->pc != 0x152254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckKanjiFont__5CFontFi_0x2d43f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152254u; }
        if (ctx->pc != 0x152254u) { return; }
    }
    ctx->pc = 0x152254u;
label_152254:
    // 0x152254: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x152254u;
    {
        const bool branch_taken_0x152254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x152254) {
            ctx->pc = 0x152268u;
            goto label_152268;
        }
    }
    ctx->pc = 0x15225Cu;
    // 0x15225c: 0x8ec200c0  lw          $v0, 0xC0($s6)
    ctx->pc = 0x15225cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 192)));
    // 0x152260: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x152260u;
    {
        const bool branch_taken_0x152260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152260u;
            // 0x152264: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152260) {
            ctx->pc = 0x152270u;
            goto label_152270;
        }
    }
    ctx->pc = 0x152268u;
label_152268:
    // 0x152268: 0x8ec200c0  lw          $v0, 0xC0($s6)
    ctx->pc = 0x152268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 192)));
    // 0x15226c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x15226cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_152270:
    // 0x152270: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x152270u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_152274:
    // 0x152274: 0x0  nop
    ctx->pc = 0x152274u;
    // NOP
    // 0x152278: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x152278u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x15227c: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x15227Cu;
    {
        const bool branch_taken_0x15227c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15227Cu;
            // 0x152280: 0x2b2a021  addu        $s4, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15227c) {
            ctx->pc = 0x152188u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_152188;
        }
    }
    ctx->pc = 0x152284u;
label_152284:
    // 0x152284: 0x0  nop
    ctx->pc = 0x152284u;
    // NOP
    // 0x152288: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x152288u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15228c:
    // 0x15228c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x15228cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x152290: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x152290u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x152294: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x152294u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x152298: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x152298u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15229c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15229cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1522a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1522a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1522a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1522a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1522a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1522a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1522ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1522ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1522B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1522ACu;
            // 0x1522b0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1522B4u;
}
