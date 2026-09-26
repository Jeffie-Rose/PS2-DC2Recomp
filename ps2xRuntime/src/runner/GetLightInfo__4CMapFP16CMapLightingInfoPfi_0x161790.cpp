#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetLightInfo__4CMapFP16CMapLightingInfoPfi
// Address: 0x161790 - 0x161c3c
void GetLightInfo__4CMapFP16CMapLightingInfoPfi_0x161790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetLightInfo__4CMapFP16CMapLightingInfoPfi_0x161790");
#endif

    switch (ctx->pc) {
        case 0x1617e4u: goto label_1617e4;
        case 0x1617f0u: goto label_1617f0;
        case 0x161820u: goto label_161820;
        case 0x161828u: goto label_161828;
        case 0x161830u: goto label_161830;
        case 0x161838u: goto label_161838;
        case 0x161840u: goto label_161840;
        case 0x161848u: goto label_161848;
        case 0x161850u: goto label_161850;
        case 0x161860u: goto label_161860;
        case 0x161890u: goto label_161890;
        case 0x16189cu: goto label_16189c;
        case 0x1618acu: goto label_1618ac;
        case 0x1618b8u: goto label_1618b8;
        case 0x1618c8u: goto label_1618c8;
        case 0x1618d4u: goto label_1618d4;
        case 0x1619ccu: goto label_1619cc;
        case 0x1619d8u: goto label_1619d8;
        case 0x161a08u: goto label_161a08;
        case 0x161a14u: goto label_161a14;
        case 0x161a28u: goto label_161a28;
        case 0x161a3cu: goto label_161a3c;
        case 0x161a4cu: goto label_161a4c;
        case 0x161a5cu: goto label_161a5c;
        case 0x161a6cu: goto label_161a6c;
        case 0x161a9cu: goto label_161a9c;
        case 0x161aa4u: goto label_161aa4;
        case 0x161ab4u: goto label_161ab4;
        case 0x161ad4u: goto label_161ad4;
        case 0x161b00u: goto label_161b00;
        case 0x161b64u: goto label_161b64;
        case 0x161bb8u: goto label_161bb8;
        case 0x161bc4u: goto label_161bc4;
        case 0x161bd0u: goto label_161bd0;
        case 0x161bdcu: goto label_161bdc;
        default: break;
    }

    ctx->pc = 0x161790u;

    // 0x161790: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x161790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x161794: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x161794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x161798: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x161798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x16179c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x16179cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1617a0: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1617a0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1617a4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1617a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1617a8: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x1617a8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1617ac: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1617acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1617b0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1617b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1617b4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1617b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1617b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1617b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1617bc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1617bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1617c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1617c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1617c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1617c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1617c8: 0xafa600bc  sw          $a2, 0xBC($sp)
    ctx->pc = 0x1617c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 6));
    // 0x1617cc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1617ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1617d0: 0x8c9100d0  lw          $s1, 0xD0($a0)
    ctx->pc = 0x1617d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x1617d4: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x1617d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1617d8: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x1617D8u;
    {
        const bool branch_taken_0x1617d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1617DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1617D8u;
            // 0x1617dc: 0xafa000a0  sw          $zero, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1617d8) {
            ctx->pc = 0x161818u;
            goto label_161818;
        }
    }
    ctx->pc = 0x1617E0u;
    // 0x1617e0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1617e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1617e4:
    // 0x1617e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1617e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1617e8: 0xc059410  jal         func_165040
    ctx->pc = 0x1617E8u;
    SET_GPR_U32(ctx, 31, 0x1617F0u);
    ctx->pc = 0x1617ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1617E8u;
            // 0x1617ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x165040u;
    if (runtime->hasFunction(0x165040u)) {
        auto targetFn = runtime->lookupFunction(0x165040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1617F0u; }
        if (ctx->pc != 0x1617F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLightingInfo__8CMapInfoFi_0x165040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1617F0u; }
        if (ctx->pc != 0x1617F0u) { return; }
    }
    ctx->pc = 0x1617F0u;
label_1617f0:
    // 0x1617f0: 0x25d1821  addu        $v1, $s2, $sp
    ctx->pc = 0x1617f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x1617f4: 0x24630190  addiu       $v1, $v1, 0x190
    ctx->pc = 0x1617f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
    // 0x1617f8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1617f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1617fc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1617fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x161800: 0x10600102  beqz        $v1, . + 4 + (0x102 << 2)
    ctx->pc = 0x161800u;
    {
        const bool branch_taken_0x161800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x161800) {
            ctx->pc = 0x161C0Cu;
            goto label_161c0c;
        }
    }
    ctx->pc = 0x161808u;
    // 0x161808: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x161808u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16180c: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x16180cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x161810: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x161810u;
    {
        const bool branch_taken_0x161810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x161814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161810u;
            // 0x161814: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161810) {
            ctx->pc = 0x1617E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1617e4;
        }
    }
    ctx->pc = 0x161818u;
label_161818:
    // 0x161818: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x161818u;
    SET_GPR_U32(ctx, 31, 0x161820u);
    ctx->pc = 0x16181Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161818u;
            // 0x16181c: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161820u; }
        if (ctx->pc != 0x161820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161820u; }
        if (ctx->pc != 0x161820u) { return; }
    }
    ctx->pc = 0x161820u;
label_161820:
    // 0x161820: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x161820u;
    SET_GPR_U32(ctx, 31, 0x161828u);
    ctx->pc = 0x161824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161820u;
            // 0x161824: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161828u; }
        if (ctx->pc != 0x161828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161828u; }
        if (ctx->pc != 0x161828u) { return; }
    }
    ctx->pc = 0x161828u;
label_161828:
    // 0x161828: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x161828u;
    SET_GPR_U32(ctx, 31, 0x161830u);
    ctx->pc = 0x16182Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161828u;
            // 0x16182c: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161830u; }
        if (ctx->pc != 0x161830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161830u; }
        if (ctx->pc != 0x161830u) { return; }
    }
    ctx->pc = 0x161830u;
label_161830:
    // 0x161830: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x161830u;
    SET_GPR_U32(ctx, 31, 0x161838u);
    ctx->pc = 0x161834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161830u;
            // 0x161834: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161838u; }
        if (ctx->pc != 0x161838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161838u; }
        if (ctx->pc != 0x161838u) { return; }
    }
    ctx->pc = 0x161838u;
label_161838:
    // 0x161838: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x161838u;
    SET_GPR_U32(ctx, 31, 0x161840u);
    ctx->pc = 0x16183Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161838u;
            // 0x16183c: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161840u; }
        if (ctx->pc != 0x161840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161840u; }
        if (ctx->pc != 0x161840u) { return; }
    }
    ctx->pc = 0x161840u;
label_161840:
    // 0x161840: 0xc04c058  jal         func_130160
    ctx->pc = 0x161840u;
    SET_GPR_U32(ctx, 31, 0x161848u);
    ctx->pc = 0x161844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161840u;
            // 0x161844: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130160u;
    if (runtime->hasFunction(0x130160u)) {
        auto targetFn = runtime->lookupFunction(0x130160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161848u; }
        if (ctx->pc != 0x161848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroMatrix__FPA4_f_0x130160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161848u; }
        if (ctx->pc != 0x161848u) { return; }
    }
    ctx->pc = 0x161848u;
label_161848:
    // 0x161848: 0xc04c058  jal         func_130160
    ctx->pc = 0x161848u;
    SET_GPR_U32(ctx, 31, 0x161850u);
    ctx->pc = 0x16184Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161848u;
            // 0x16184c: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130160u;
    if (runtime->hasFunction(0x130160u)) {
        auto targetFn = runtime->lookupFunction(0x130160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161850u; }
        if (ctx->pc != 0x161850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroMatrix__FPA4_f_0x130160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161850u; }
        if (ctx->pc != 0x161850u) { return; }
    }
    ctx->pc = 0x161850u;
label_161850:
    // 0x161850: 0x17082a  slt         $at, $zero, $s7
    ctx->pc = 0x161850u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x161854: 0x1020008e  beqz        $at, . + 4 + (0x8E << 2)
    ctx->pc = 0x161854u;
    {
        const bool branch_taken_0x161854 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x161858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161854u;
            // 0x161858: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161854) {
            ctx->pc = 0x161A90u;
            goto label_161a90;
        }
    }
    ctx->pc = 0x16185Cu;
    // 0x16185c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x16185cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_161860:
    // 0x161860: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x161860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x161864: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x161864u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161868: 0x529821  addu        $s3, $v0, $s2
    ctx->pc = 0x161868u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x16186c: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x16186cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x161870: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x161870u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161874: 0x0  nop
    ctx->pc = 0x161874u;
    // NOP
    // 0x161878: 0x45010080  bc1t        . + 4 + (0x80 << 2)
    ctx->pc = 0x161878u;
    {
        const bool branch_taken_0x161878 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16187Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161878u;
            // 0x16187c: 0x25d1021  addu        $v0, $s2, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161878) {
            ctx->pc = 0x161A7Cu;
            goto label_161a7c;
        }
    }
    ctx->pc = 0x161880u;
    // 0x161880: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x161880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x161884: 0x8c540190  lw          $s4, 0x190($v0)
    ctx->pc = 0x161884u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 400)));
    // 0x161888: 0xc041c4a  jal         func_107128
    ctx->pc = 0x161888u;
    SET_GPR_U32(ctx, 31, 0x161890u);
    ctx->pc = 0x16188Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161888u;
            // 0x16188c: 0x26850180  addiu       $a1, $s4, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161890u; }
        if (ctx->pc != 0x161890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161890u; }
        if (ctx->pc != 0x161890u) { return; }
    }
    ctx->pc = 0x161890u;
label_161890:
    // 0x161890: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x161890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x161894: 0xc04bcf4  jal         func_12F3D0
    ctx->pc = 0x161894u;
    SET_GPR_U32(ctx, 31, 0x16189Cu);
    ctx->pc = 0x161898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161894u;
            // 0x161898: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16189Cu; }
        if (ctx->pc != 0x16189Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16189Cu; }
        if (ctx->pc != 0x16189Cu) { return; }
    }
    ctx->pc = 0x16189Cu;
label_16189c:
    // 0x16189c: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x16189cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1618a0: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1618a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1618a4: 0xc041c4a  jal         func_107128
    ctx->pc = 0x1618A4u;
    SET_GPR_U32(ctx, 31, 0x1618ACu);
    ctx->pc = 0x1618A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1618A4u;
            // 0x1618a8: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1618ACu; }
        if (ctx->pc != 0x1618ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1618ACu; }
        if (ctx->pc != 0x1618ACu) { return; }
    }
    ctx->pc = 0x1618ACu;
label_1618ac:
    // 0x1618ac: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1618acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1618b0: 0xc04bcf4  jal         func_12F3D0
    ctx->pc = 0x1618B0u;
    SET_GPR_U32(ctx, 31, 0x1618B8u);
    ctx->pc = 0x1618B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1618B0u;
            // 0x1618b4: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1618B8u; }
        if (ctx->pc != 0x1618B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1618B8u; }
        if (ctx->pc != 0x1618B8u) { return; }
    }
    ctx->pc = 0x1618B8u;
label_1618b8:
    // 0x1618b8: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x1618b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1618bc: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1618bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1618c0: 0xc041c4a  jal         func_107128
    ctx->pc = 0x1618C0u;
    SET_GPR_U32(ctx, 31, 0x1618C8u);
    ctx->pc = 0x1618C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1618C0u;
            // 0x1618c4: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1618C8u; }
        if (ctx->pc != 0x1618C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1618C8u; }
        if (ctx->pc != 0x1618C8u) { return; }
    }
    ctx->pc = 0x1618C8u;
label_1618c8:
    // 0x1618c8: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1618c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1618cc: 0xc04bcf4  jal         func_12F3D0
    ctx->pc = 0x1618CCu;
    SET_GPR_U32(ctx, 31, 0x1618D4u);
    ctx->pc = 0x1618D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1618CCu;
            // 0x1618d0: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1618D4u; }
        if (ctx->pc != 0x1618D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1618D4u; }
        if (ctx->pc != 0x1618D4u) { return; }
    }
    ctx->pc = 0x1618D4u;
label_1618d4:
    // 0x1618d4: 0x8e820190  lw          $v0, 0x190($s4)
    ctx->pc = 0x1618d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 400)));
    // 0x1618d8: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x1618D8u;
    {
        const bool branch_taken_0x1618d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1618d8) {
            ctx->pc = 0x161A20u;
            goto label_161a20;
        }
    }
    ctx->pc = 0x1618E0u;
    // 0x1618e0: 0x928201a8  lbu         $v0, 0x1A8($s4)
    ctx->pc = 0x1618e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 424)));
    // 0x1618e4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1618E4u;
    {
        const bool branch_taken_0x1618e4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1618E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1618E4u;
            // 0x1618e8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1618e4) {
            ctx->pc = 0x1618F8u;
            goto label_1618f8;
        }
    }
    ctx->pc = 0x1618ECu;
    // 0x1618ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1618ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1618f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1618F0u;
    {
        const bool branch_taken_0x1618f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1618F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1618F0u;
            // 0x1618f4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1618f0) {
            ctx->pc = 0x161910u;
            goto label_161910;
        }
    }
    ctx->pc = 0x1618F8u;
label_1618f8:
    // 0x1618f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1618f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1618fc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1618fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x161900: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x161900u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161904: 0x0  nop
    ctx->pc = 0x161904u;
    // NOP
    // 0x161908: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x161908u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16190c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x16190cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_161910:
    // 0x161910: 0xe7a001b0  swc1        $f0, 0x1B0($sp)
    ctx->pc = 0x161910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x161914: 0x928201a9  lbu         $v0, 0x1A9($s4)
    ctx->pc = 0x161914u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 425)));
    // 0x161918: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x161918u;
    {
        const bool branch_taken_0x161918 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16191Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161918u;
            // 0x16191c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161918) {
            ctx->pc = 0x16192Cu;
            goto label_16192c;
        }
    }
    ctx->pc = 0x161920u;
    // 0x161920: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161924: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x161924u;
    {
        const bool branch_taken_0x161924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161924u;
            // 0x161928: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x161924) {
            ctx->pc = 0x161944u;
            goto label_161944;
        }
    }
    ctx->pc = 0x16192Cu;
label_16192c:
    // 0x16192c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x16192cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x161930: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x161930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x161934: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x161934u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161938: 0x0  nop
    ctx->pc = 0x161938u;
    // NOP
    // 0x16193c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16193cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x161940: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x161940u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_161944:
    // 0x161944: 0x27b601b4  addiu       $s6, $sp, 0x1B4
    ctx->pc = 0x161944u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
    // 0x161948: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x161948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x16194c: 0x928201aa  lbu         $v0, 0x1AA($s4)
    ctx->pc = 0x16194cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 426)));
    // 0x161950: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x161950u;
    {
        const bool branch_taken_0x161950 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x161954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161950u;
            // 0x161954: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161950) {
            ctx->pc = 0x161964u;
            goto label_161964;
        }
    }
    ctx->pc = 0x161958u;
    // 0x161958: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16195c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16195Cu;
    {
        const bool branch_taken_0x16195c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16195Cu;
            // 0x161960: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16195c) {
            ctx->pc = 0x16197Cu;
            goto label_16197c;
        }
    }
    ctx->pc = 0x161964u;
label_161964:
    // 0x161964: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x161964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x161968: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x161968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16196c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16196cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161970: 0x0  nop
    ctx->pc = 0x161970u;
    // NOP
    // 0x161974: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x161974u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x161978: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x161978u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_16197c:
    // 0x16197c: 0x27b101b8  addiu       $s1, $sp, 0x1B8
    ctx->pc = 0x16197cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
    // 0x161980: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x161980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x161984: 0x928201ab  lbu         $v0, 0x1AB($s4)
    ctx->pc = 0x161984u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 427)));
    // 0x161988: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x161988u;
    {
        const bool branch_taken_0x161988 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16198Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161988u;
            // 0x16198c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161988) {
            ctx->pc = 0x16199Cu;
            goto label_16199c;
        }
    }
    ctx->pc = 0x161990u;
    // 0x161990: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161990u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161994: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x161994u;
    {
        const bool branch_taken_0x161994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161994u;
            // 0x161998: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x161994) {
            ctx->pc = 0x1619B4u;
            goto label_1619b4;
        }
    }
    ctx->pc = 0x16199Cu;
label_16199c:
    // 0x16199c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x16199cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1619a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1619a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1619a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1619a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1619a8: 0x0  nop
    ctx->pc = 0x1619a8u;
    // NOP
    // 0x1619ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1619acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1619b0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1619b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1619b4:
    // 0x1619b4: 0x27b001bc  addiu       $s0, $sp, 0x1BC
    ctx->pc = 0x1619b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
    // 0x1619b8: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1619b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1619bc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1619bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1619c0: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x1619c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1619c4: 0xc041c4a  jal         func_107128
    ctx->pc = 0x1619C4u;
    SET_GPR_U32(ctx, 31, 0x1619CCu);
    ctx->pc = 0x1619C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1619C4u;
            // 0x1619c8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1619CCu; }
        if (ctx->pc != 0x1619CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1619CCu; }
        if (ctx->pc != 0x1619CCu) { return; }
    }
    ctx->pc = 0x1619CCu;
label_1619cc:
    // 0x1619cc: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x1619ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1619d0: 0xc04bcf4  jal         func_12F3D0
    ctx->pc = 0x1619D0u;
    SET_GPR_U32(ctx, 31, 0x1619D8u);
    ctx->pc = 0x1619D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1619D0u;
            // 0x1619d4: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1619D8u; }
        if (ctx->pc != 0x1619D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1619D8u; }
        if (ctx->pc != 0x1619D8u) { return; }
    }
    ctx->pc = 0x1619D8u;
label_1619d8:
    // 0x1619d8: 0xc68001a0  lwc1        $f0, 0x1A0($s4)
    ctx->pc = 0x1619d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1619dc: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1619dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1619e0: 0xe7a001b0  swc1        $f0, 0x1B0($sp)
    ctx->pc = 0x1619e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x1619e4: 0xc68001a4  lwc1        $f0, 0x1A4($s4)
    ctx->pc = 0x1619e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1619e8: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x1619e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x1619ec: 0xc68001b0  lwc1        $f0, 0x1B0($s4)
    ctx->pc = 0x1619ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1619f0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1619f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1619f4: 0xc68001b4  lwc1        $f0, 0x1B4($s4)
    ctx->pc = 0x1619f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1619f8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1619f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1619fc: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x1619fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x161a00: 0xc041c4a  jal         func_107128
    ctx->pc = 0x161A00u;
    SET_GPR_U32(ctx, 31, 0x161A08u);
    ctx->pc = 0x161A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161A00u;
            // 0x161a04: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161A08u; }
        if (ctx->pc != 0x161A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161A08u; }
        if (ctx->pc != 0x161A08u) { return; }
    }
    ctx->pc = 0x161A08u;
label_161a08:
    // 0x161a08: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x161a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x161a0c: 0xc04bcf4  jal         func_12F3D0
    ctx->pc = 0x161A0Cu;
    SET_GPR_U32(ctx, 31, 0x161A14u);
    ctx->pc = 0x161A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161A0Cu;
            // 0x161a10: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161A14u; }
        if (ctx->pc != 0x161A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161A14u; }
        if (ctx->pc != 0x161A14u) { return; }
    }
    ctx->pc = 0x161A14u;
label_161a14:
    // 0x161a14: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x161a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x161a18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x161a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x161a1c: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x161a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_161a20:
    // 0x161a20: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x161a20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161a24: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x161a24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_161a28:
    // 0x161a28: 0x291b021  addu        $s6, $s4, $s1
    ctx->pc = 0x161a28u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x161a2c: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x161a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x161a30: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x161a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x161a34: 0xc041c4a  jal         func_107128
    ctx->pc = 0x161A34u;
    SET_GPR_U32(ctx, 31, 0x161A3Cu);
    ctx->pc = 0x161A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161A34u;
            // 0x161a38: 0x26c50030  addiu       $a1, $s6, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161A3Cu; }
        if (ctx->pc != 0x161A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161A3Cu; }
        if (ctx->pc != 0x161A3Cu) { return; }
    }
    ctx->pc = 0x161A3Cu;
label_161a3c:
    // 0x161a3c: 0x23d1021  addu        $v0, $s1, $sp
    ctx->pc = 0x161a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x161a40: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x161a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x161a44: 0xc04bcf4  jal         func_12F3D0
    ctx->pc = 0x161A44u;
    SET_GPR_U32(ctx, 31, 0x161A4Cu);
    ctx->pc = 0x161A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161A44u;
            // 0x161a48: 0x244400c0  addiu       $a0, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161A4Cu; }
        if (ctx->pc != 0x161A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161A4Cu; }
        if (ctx->pc != 0x161A4Cu) { return; }
    }
    ctx->pc = 0x161A4Cu;
label_161a4c:
    // 0x161a4c: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x161a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x161a50: 0x26c50070  addiu       $a1, $s6, 0x70
    ctx->pc = 0x161a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 112));
    // 0x161a54: 0xc041c4a  jal         func_107128
    ctx->pc = 0x161A54u;
    SET_GPR_U32(ctx, 31, 0x161A5Cu);
    ctx->pc = 0x161A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161A54u;
            // 0x161a58: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161A5Cu; }
        if (ctx->pc != 0x161A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161A5Cu; }
        if (ctx->pc != 0x161A5Cu) { return; }
    }
    ctx->pc = 0x161A5Cu;
label_161a5c:
    // 0x161a5c: 0x23d1021  addu        $v0, $s1, $sp
    ctx->pc = 0x161a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x161a60: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x161a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x161a64: 0xc04bcf4  jal         func_12F3D0
    ctx->pc = 0x161A64u;
    SET_GPR_U32(ctx, 31, 0x161A6Cu);
    ctx->pc = 0x161A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161A64u;
            // 0x161a68: 0x24440100  addiu       $a0, $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161A6Cu; }
        if (ctx->pc != 0x161A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161A6Cu; }
        if (ctx->pc != 0x161A6Cu) { return; }
    }
    ctx->pc = 0x161A6Cu;
label_161a6c:
    // 0x161a6c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x161a6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x161a70: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x161a70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x161a74: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x161A74u;
    {
        const bool branch_taken_0x161a74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x161A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161A74u;
            // 0x161a78: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161a74) {
            ctx->pc = 0x161A28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_161a28;
        }
    }
    ctx->pc = 0x161A7Cu;
label_161a7c:
    // 0x161a7c: 0x0  nop
    ctx->pc = 0x161a7cu;
    // NOP
    // 0x161a80: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x161a80u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x161a84: 0x2b7102a  slt         $v0, $s5, $s7
    ctx->pc = 0x161a84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x161a88: 0x1440ff75  bnez        $v0, . + 4 + (-0x8B << 2)
    ctx->pc = 0x161A88u;
    {
        const bool branch_taken_0x161a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x161A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161A88u;
            // 0x161a8c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161a88) {
            ctx->pc = 0x161860u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_161860;
        }
    }
    ctx->pc = 0x161A90u;
label_161a90:
    // 0x161a90: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x161a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x161a94: 0xc041bf0  jal         func_106FC0
    ctx->pc = 0x161A94u;
    SET_GPR_U32(ctx, 31, 0x161A9Cu);
    ctx->pc = 0x161A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161A94u;
            // 0x161a98: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106FC0u;
    if (runtime->hasFunction(0x106FC0u)) {
        auto targetFn = runtime->lookupFunction(0x106FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161A9Cu; }
        if (ctx->pc != 0x161A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransposeMatrix_0x106fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161A9Cu; }
        if (ctx->pc != 0x161A9Cu) { return; }
    }
    ctx->pc = 0x161A9Cu;
label_161a9c:
    // 0x161a9c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x161a9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161aa0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x161aa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_161aa4:
    // 0x161aa4: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x161aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x161aa8: 0x245100c0  addiu       $s1, $v0, 0xC0
    ctx->pc = 0x161aa8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x161aac: 0xc04bff4  jal         func_12FFD0
    ctx->pc = 0x161AACu;
    SET_GPR_U32(ctx, 31, 0x161AB4u);
    ctx->pc = 0x161AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161AACu;
            // 0x161ab0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161AB4u; }
        if (ctx->pc != 0x161AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161AB4u; }
        if (ctx->pc != 0x161AB4u) { return; }
    }
    ctx->pc = 0x161AB4u;
label_161ab4:
    // 0x161ab4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x161ab4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x161ab8: 0x0  nop
    ctx->pc = 0x161ab8u;
    // NOP
    // 0x161abc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x161abcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161ac0: 0x0  nop
    ctx->pc = 0x161ac0u;
    // NOP
    // 0x161ac4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x161AC4u;
    {
        const bool branch_taken_0x161ac4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x161AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161AC4u;
            // 0x161ac8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161ac4) {
            ctx->pc = 0x161AD4u;
            goto label_161ad4;
        }
    }
    ctx->pc = 0x161ACCu;
    // 0x161acc: 0xc041be0  jal         func_106F80
    ctx->pc = 0x161ACCu;
    SET_GPR_U32(ctx, 31, 0x161AD4u);
    ctx->pc = 0x161AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161ACCu;
            // 0x161ad0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161AD4u; }
        if (ctx->pc != 0x161AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161AD4u; }
        if (ctx->pc != 0x161AD4u) { return; }
    }
    ctx->pc = 0x161AD4u;
label_161ad4:
    // 0x161ad4: 0x0  nop
    ctx->pc = 0x161ad4u;
    // NOP
    // 0x161ad8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x161ad8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x161adc: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x161adcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x161ae0: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x161AE0u;
    {
        const bool branch_taken_0x161ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x161AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161AE0u;
            // 0x161ae4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161ae0) {
            ctx->pc = 0x161AA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_161aa4;
        }
    }
    ctx->pc = 0x161AE8u;
    // 0x161ae8: 0x27b0014c  addiu       $s0, $sp, 0x14C
    ctx->pc = 0x161ae8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
    // 0x161aec: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x161aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x161af0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x161af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161af4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x161af4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x161af8: 0xc058710  jal         func_161C40
    ctx->pc = 0x161AF8u;
    SET_GPR_U32(ctx, 31, 0x161B00u);
    ctx->pc = 0x161AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161AF8u;
            // 0x161afc: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x161C40u;
    if (runtime->hasFunction(0x161C40u)) {
        auto targetFn = runtime->lookupFunction(0x161C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161B00u; }
        if (ctx->pc != 0x161B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAbs__Ff_0x161c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161B00u; }
        if (ctx->pc != 0x161B00u) { return; }
    }
    ctx->pc = 0x161B00u;
label_161b00:
    // 0x161b00: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x161b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x161b04: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x161b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x161b08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x161b08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x161b0c: 0x0  nop
    ctx->pc = 0x161b0cu;
    // NOP
    // 0x161b10: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x161b10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161b14: 0x0  nop
    ctx->pc = 0x161b14u;
    // NOP
    // 0x161b18: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x161B18u;
    {
        const bool branch_taken_0x161b18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x161B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161B18u;
            // 0x161b1c: 0x27a20140  addiu       $v0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b18) {
            ctx->pc = 0x161B2Cu;
            goto label_161b2c;
        }
    }
    ctx->pc = 0x161B20u;
    // 0x161b20: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x161b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x161b24: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x161b24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x161b28: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x161b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_161b2c:
    // 0x161b2c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x161b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x161b30: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x161b30u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x161b34: 0x27a30160  addiu       $v1, $sp, 0x160
    ctx->pc = 0x161b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x161b38: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x161b38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161b3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x161b3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161b40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x161b40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161b44: 0x7fc50180  sq          $a1, 0x180($fp)
    ctx->pc = 0x161b44u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 384), GPR_VEC(ctx, 5));
    // 0x161b48: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x161b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x161b4c: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x161b4cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x161b50: 0x7fc40010  sq          $a0, 0x10($fp)
    ctx->pc = 0x161b50u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 16), GPR_VEC(ctx, 4));
    // 0x161b54: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x161b54u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x161b58: 0x7fc30020  sq          $v1, 0x20($fp)
    ctx->pc = 0x161b58u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 32), GPR_VEC(ctx, 3));
    // 0x161b5c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x161b5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x161b60: 0x7fc20070  sq          $v0, 0x70($fp)
    ctx->pc = 0x161b60u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 112), GPR_VEC(ctx, 2));
label_161b64:
    // 0x161b64: 0xdd1021  addu        $v0, $a2, $sp
    ctx->pc = 0x161b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x161b68: 0x3c74021  addu        $t0, $fp, $a3
    ctx->pc = 0x161b68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 7)));
    // 0x161b6c: 0x244500c0  addiu       $a1, $v0, 0xC0
    ctx->pc = 0x161b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x161b70: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x161b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x161b74: 0xa01021  addu        $v0, $a1, $zero
    ctx->pc = 0x161b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 0)));
    // 0x161b78: 0x3c61821  addu        $v1, $fp, $a2
    ctx->pc = 0x161b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 6)));
    // 0x161b7c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x161b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161b80: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x161b80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x161b84: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x161b84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x161b88: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x161b88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x161b8c: 0xe5000030  swc1        $f0, 0x30($t0)
    ctx->pc = 0x161b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 48), bits); }
    // 0x161b90: 0x29220004  slti        $v0, $t1, 0x4
    ctx->pc = 0x161b90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x161b94: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x161b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161b98: 0xe5000040  swc1        $f0, 0x40($t0)
    ctx->pc = 0x161b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 64), bits); }
    // 0x161b9c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x161b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161ba0: 0xe5000050  swc1        $f0, 0x50($t0)
    ctx->pc = 0x161ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 80), bits); }
    // 0x161ba4: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x161ba4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x161ba8: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x161BA8u;
    {
        const bool branch_taken_0x161ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x161BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161BA8u;
            // 0x161bac: 0x7c640070  sq          $a0, 0x70($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 112), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161ba8) {
            ctx->pc = 0x161B64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_161b64;
        }
    }
    ctx->pc = 0x161BB0u;
    // 0x161bb0: 0xc0a24b0  jal         func_2892C0
    ctx->pc = 0x161BB0u;
    SET_GPR_U32(ctx, 31, 0x161BB8u);
    ctx->pc = 0x161BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161BB0u;
            // 0x161bb4: 0xc7ac0180  lwc1        $f12, 0x180($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2892C0u;
    if (runtime->hasFunction(0x2892C0u)) {
        auto targetFn = runtime->lookupFunction(0x2892C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161BB8u; }
        if (ctx->pc != 0x161BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptoui_0x2892c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161BB8u; }
        if (ctx->pc != 0x161BB8u) { return; }
    }
    ctx->pc = 0x161BB8u;
label_161bb8:
    // 0x161bb8: 0xa3c201a8  sb          $v0, 0x1A8($fp)
    ctx->pc = 0x161bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 424), (uint8_t)GPR_U32(ctx, 2));
    // 0x161bbc: 0xc0a24b0  jal         func_2892C0
    ctx->pc = 0x161BBCu;
    SET_GPR_U32(ctx, 31, 0x161BC4u);
    ctx->pc = 0x161BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161BBCu;
            // 0x161bc0: 0xc7ac0184  lwc1        $f12, 0x184($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2892C0u;
    if (runtime->hasFunction(0x2892C0u)) {
        auto targetFn = runtime->lookupFunction(0x2892C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161BC4u; }
        if (ctx->pc != 0x161BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptoui_0x2892c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161BC4u; }
        if (ctx->pc != 0x161BC4u) { return; }
    }
    ctx->pc = 0x161BC4u;
label_161bc4:
    // 0x161bc4: 0xa3c201a9  sb          $v0, 0x1A9($fp)
    ctx->pc = 0x161bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 425), (uint8_t)GPR_U32(ctx, 2));
    // 0x161bc8: 0xc0a24b0  jal         func_2892C0
    ctx->pc = 0x161BC8u;
    SET_GPR_U32(ctx, 31, 0x161BD0u);
    ctx->pc = 0x161BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161BC8u;
            // 0x161bcc: 0xc7ac0188  lwc1        $f12, 0x188($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2892C0u;
    if (runtime->hasFunction(0x2892C0u)) {
        auto targetFn = runtime->lookupFunction(0x2892C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161BD0u; }
        if (ctx->pc != 0x161BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptoui_0x2892c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161BD0u; }
        if (ctx->pc != 0x161BD0u) { return; }
    }
    ctx->pc = 0x161BD0u;
label_161bd0:
    // 0x161bd0: 0xa3c201aa  sb          $v0, 0x1AA($fp)
    ctx->pc = 0x161bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 426), (uint8_t)GPR_U32(ctx, 2));
    // 0x161bd4: 0xc0a24b0  jal         func_2892C0
    ctx->pc = 0x161BD4u;
    SET_GPR_U32(ctx, 31, 0x161BDCu);
    ctx->pc = 0x161BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161BD4u;
            // 0x161bd8: 0xc7ac018c  lwc1        $f12, 0x18C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2892C0u;
    if (runtime->hasFunction(0x2892C0u)) {
        auto targetFn = runtime->lookupFunction(0x2892C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161BDCu; }
        if (ctx->pc != 0x161BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptoui_0x2892c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161BDCu; }
        if (ctx->pc != 0x161BDCu) { return; }
    }
    ctx->pc = 0x161BDCu;
label_161bdc:
    // 0x161bdc: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x161bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x161be0: 0xa3c201ab  sb          $v0, 0x1AB($fp)
    ctx->pc = 0x161be0u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 427), (uint8_t)GPR_U32(ctx, 2));
    // 0x161be4: 0x3182a  slt         $v1, $zero, $v1
    ctx->pc = 0x161be4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x161be8: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x161be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161bec: 0xe7c001a0  swc1        $f0, 0x1A0($fp)
    ctx->pc = 0x161becu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 416), bits); }
    // 0x161bf0: 0xc7a00174  lwc1        $f0, 0x174($sp)
    ctx->pc = 0x161bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161bf4: 0xe7c001a4  swc1        $f0, 0x1A4($fp)
    ctx->pc = 0x161bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 420), bits); }
    // 0x161bf8: 0xc7a00178  lwc1        $f0, 0x178($sp)
    ctx->pc = 0x161bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161bfc: 0xe7c001b0  swc1        $f0, 0x1B0($fp)
    ctx->pc = 0x161bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 432), bits); }
    // 0x161c00: 0xc7a0017c  lwc1        $f0, 0x17C($sp)
    ctx->pc = 0x161c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161c04: 0xe7c001b4  swc1        $f0, 0x1B4($fp)
    ctx->pc = 0x161c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 436), bits); }
    // 0x161c08: 0xafc30190  sw          $v1, 0x190($fp)
    ctx->pc = 0x161c08u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 400), GPR_U32(ctx, 3));
label_161c0c:
    // 0x161c0c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x161c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x161c10: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x161c10u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x161c14: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x161c14u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x161c18: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x161c18u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x161c1c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x161c1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x161c20: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x161c20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x161c24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x161c24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x161c28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x161c28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x161c2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x161c2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161c30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x161c30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161c34: 0x3e00008  jr          $ra
    ctx->pc = 0x161C34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161C34u;
            // 0x161c38: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x161C3Cu;
}
