#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgBeginFrame__FP14mgCDrawManager
// Address: 0x1421e0 - 0x142414
void mgBeginFrame__FP14mgCDrawManager_0x1421e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgBeginFrame__FP14mgCDrawManager_0x1421e0");
#endif

    switch (ctx->pc) {
        case 0x14224cu: goto label_14224c;
        case 0x142264u: goto label_142264;
        case 0x14227cu: goto label_14227c;
        case 0x142294u: goto label_142294;
        case 0x1422c4u: goto label_1422c4;
        case 0x14233cu: goto label_14233c;
        case 0x142348u: goto label_142348;
        case 0x14235cu: goto label_14235c;
        case 0x14236cu: goto label_14236c;
        case 0x14237cu: goto label_14237c;
        case 0x142384u: goto label_142384;
        case 0x14238cu: goto label_14238c;
        case 0x142394u: goto label_142394;
        case 0x1423ccu: goto label_1423cc;
        case 0x1423f0u: goto label_1423f0;
        case 0x1423f8u: goto label_1423f8;
        default: break;
    }

    ctx->pc = 0x1421e0u;

    // 0x1421e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1421e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1421e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1421e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1421e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1421e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1421ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1421ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1421f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1421f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1421f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1421f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1421f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1421f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1421fc: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1421FCu;
    {
        const bool branch_taken_0x1421fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x142200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1421FCu;
            // 0x142200: 0x3c011000  lui         $at, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1421fc) {
            ctx->pc = 0x142230u;
            goto label_142230;
        }
    }
    ctx->pc = 0x142204u;
    // 0x142204: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x142204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x142208: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x142208u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x14220c: 0x24421ef0  addiu       $v0, $v0, 0x1EF0
    ctx->pc = 0x14220cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7920));
    // 0x142210: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x142210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x142214: 0xac222138  sw          $v0, 0x2138($at)
    ctx->pc = 0x142214u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8504), GPR_U32(ctx, 2));
    // 0x142218: 0x261020e0  addiu       $s0, $s0, 0x20E0
    ctx->pc = 0x142218u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8416));
    // 0x14221c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x14221cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x142220: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x142220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x142224: 0x24420ec0  addiu       $v0, $v0, 0xEC0
    ctx->pc = 0x142224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3776));
    // 0x142228: 0xac222144  sw          $v0, 0x2144($at)
    ctx->pc = 0x142228u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8516), GPR_U32(ctx, 2));
    // 0x14222c: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x14222cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
label_142230:
    // 0x142230: 0xac200000  sw          $zero, 0x0($at)
    ctx->pc = 0x142230u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 0), GPR_U32(ctx, 0));
    // 0x142234: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x142234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x142238: 0x8c220000  lw          $v0, 0x0($at)
    ctx->pc = 0x142238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 0)));
    // 0x14223c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x14223cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x142240: 0xc42c1ee0  lwc1        $f12, 0x1EE0($at)
    ctx->pc = 0x142240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 7904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x142244: 0xc0a248c  jal         func_289230
    ctx->pc = 0x142244u;
    SET_GPR_U32(ctx, 31, 0x14224Cu);
    ctx->pc = 0x142248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142244u;
            // 0x142248: 0xaf828864  sw          $v0, -0x779C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14224Cu; }
        if (ctx->pc != 0x14224Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14224Cu; }
        if (ctx->pc != 0x14224Cu) { return; }
    }
    ctx->pc = 0x14224Cu;
label_14224c:
    // 0x14224c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x14224cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x142250: 0xa0222260  sb          $v0, 0x2260($at)
    ctx->pc = 0x142250u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 8800), (uint8_t)GPR_U32(ctx, 2));
    // 0x142254: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x142254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x142258: 0xc42c1ee4  lwc1        $f12, 0x1EE4($at)
    ctx->pc = 0x142258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 7908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14225c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x14225Cu;
    SET_GPR_U32(ctx, 31, 0x142264u);
    ctx->pc = 0x142260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14225Cu;
            // 0x142260: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142264u; }
        if (ctx->pc != 0x142264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142264u; }
        if (ctx->pc != 0x142264u) { return; }
    }
    ctx->pc = 0x142264u;
label_142264:
    // 0x142264: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x142264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x142268: 0xa0222261  sb          $v0, 0x2261($at)
    ctx->pc = 0x142268u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 8801), (uint8_t)GPR_U32(ctx, 2));
    // 0x14226c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x14226cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x142270: 0xc42c1ee8  lwc1        $f12, 0x1EE8($at)
    ctx->pc = 0x142270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 7912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x142274: 0xc0a248c  jal         func_289230
    ctx->pc = 0x142274u;
    SET_GPR_U32(ctx, 31, 0x14227Cu);
    ctx->pc = 0x142278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142274u;
            // 0x142278: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14227Cu; }
        if (ctx->pc != 0x14227Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14227Cu; }
        if (ctx->pc != 0x14227Cu) { return; }
    }
    ctx->pc = 0x14227Cu;
label_14227c:
    // 0x14227c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x14227cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x142280: 0xa0222262  sb          $v0, 0x2262($at)
    ctx->pc = 0x142280u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 8802), (uint8_t)GPR_U32(ctx, 2));
    // 0x142284: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x142284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x142288: 0xc42c1eec  lwc1        $f12, 0x1EEC($at)
    ctx->pc = 0x142288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 7916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14228c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x14228Cu;
    SET_GPR_U32(ctx, 31, 0x142294u);
    ctx->pc = 0x142290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14228Cu;
            // 0x142290: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142294u; }
        if (ctx->pc != 0x142294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142294u; }
        if (ctx->pc != 0x142294u) { return; }
    }
    ctx->pc = 0x142294u;
label_142294:
    // 0x142294: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x142294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x142298: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x142298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14229c: 0xa0312350  sb          $s1, 0x2350($at)
    ctx->pc = 0x14229cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 9040), (uint8_t)GPR_U32(ctx, 17));
    // 0x1422a0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1422a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1422a4: 0xa0322351  sb          $s2, 0x2351($at)
    ctx->pc = 0x1422a4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 9041), (uint8_t)GPR_U32(ctx, 18));
    // 0x1422a8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1422a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1422ac: 0xa0332352  sb          $s3, 0x2352($at)
    ctx->pc = 0x1422acu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 9042), (uint8_t)GPR_U32(ctx, 19));
    // 0x1422b0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1422b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1422b4: 0xa0222263  sb          $v0, 0x2263($at)
    ctx->pc = 0x1422b4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 8803), (uint8_t)GPR_U32(ctx, 2));
    // 0x1422b8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1422b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1422bc: 0xc050908  jal         func_142420
    ctx->pc = 0x1422BCu;
    SET_GPR_U32(ctx, 31, 0x1422C4u);
    ctx->pc = 0x1422C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1422BCu;
            // 0x1422c0: 0xa0222353  sb          $v0, 0x2353($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 9043), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142420u;
    if (runtime->hasFunction(0x142420u)) {
        auto targetFn = runtime->lookupFunction(0x142420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1422C4u; }
        if (ctx->pc != 0x1422C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgBeginPacket__FP14mgCDrawManager_0x142420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1422C4u; }
        if (ctx->pc != 0x1422C4u) { return; }
    }
    ctx->pc = 0x1422C4u;
label_1422c4:
    // 0x1422c4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1422c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1422c8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1422c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1422cc: 0x24420eb0  addiu       $v0, $v0, 0xEB0
    ctx->pc = 0x1422ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3760));
    // 0x1422d0: 0x240aff7f  addiu       $t2, $zero, -0x81
    ctx->pc = 0x1422d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x1422d4: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x1422d4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x1422d8: 0x640b0080  daddiu      $t3, $zero, 0x80
    ctx->pc = 0x1422d8u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x1422dc: 0x902c0eb1  lbu         $t4, 0xEB1($at)
    ctx->pc = 0x1422dcu;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 3761)));
    // 0x1422e0: 0x2407ff0f  addiu       $a3, $zero, -0xF1
    ctx->pc = 0x1422e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x1422e4: 0x8f848774  lw          $a0, -0x788C($gp)
    ctx->pc = 0x1422e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
    // 0x1422e8: 0x64080010  daddiu      $t0, $zero, 0x10
    ctx->pc = 0x1422e8u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x1422ec: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1422ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1422f0: 0x6403000e  daddiu      $v1, $zero, 0xE
    ctx->pc = 0x1422f0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)14);
    // 0x1422f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1422f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1422f8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1422f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1422fc: 0x18a5024  and         $t2, $t4, $t2
    ctx->pc = 0x1422fcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) & GPR_U64(ctx, 10));
    // 0x142300: 0x90290eb7  lbu         $t1, 0xEB7($at)
    ctx->pc = 0x142300u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 3767)));
    // 0x142304: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x142304u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x142308: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x142308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x14230c: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x14230cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x142310: 0x90260eb8  lbu         $a2, 0xEB8($at)
    ctx->pc = 0x142310u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 3768)));
    // 0x142314: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x142314u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x142318: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x142318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x14231c: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x14231cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x142320: 0xa02a0eb1  sb          $t2, 0xEB1($at)
    ctx->pc = 0x142320u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 3761), (uint8_t)GPR_U32(ctx, 10));
    // 0x142324: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x142324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x142328: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x142328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x14232c: 0xa0270eb7  sb          $a3, 0xEB7($at)
    ctx->pc = 0x14232cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 3767), (uint8_t)GPR_U32(ctx, 7));
    // 0x142330: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x142330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x142334: 0xc041ae4  jal         func_106B90
    ctx->pc = 0x142334u;
    SET_GPR_U32(ctx, 31, 0x14233Cu);
    ctx->pc = 0x142338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142334u;
            // 0x142338: 0xa0220eb8  sb          $v0, 0xEB8($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 3768), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106B90u;
    if (runtime->hasFunction(0x106B90u)) {
        auto targetFn = runtime->lookupFunction(0x106B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14233Cu; }
        if (ctx->pc != 0x14233Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkCnt_0x106b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14233Cu; }
        if (ctx->pc != 0x14233Cu) { return; }
    }
    ctx->pc = 0x14233Cu;
label_14233c:
    // 0x14233c: 0x8f848774  lw          $a0, -0x788C($gp)
    ctx->pc = 0x14233cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
    // 0x142340: 0xc041b2c  jal         func_106CB0
    ctx->pc = 0x142340u;
    SET_GPR_U32(ctx, 31, 0x142348u);
    ctx->pc = 0x142344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142340u;
            // 0x142344: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106CB0u;
    if (runtime->hasFunction(0x106CB0u)) {
        auto targetFn = runtime->lookupFunction(0x106CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142348u; }
        if (ctx->pc != 0x142348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkOpenDirectCode_0x106cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142348u; }
        if (ctx->pc != 0x142348u) { return; }
    }
    ctx->pc = 0x142348u;
label_142348:
    // 0x142348: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x142348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x14234c: 0x24420eb0  addiu       $v0, $v0, 0xEB0
    ctx->pc = 0x14234cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3760));
    // 0x142350: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x142350u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x142354: 0xc041b4e  jal         func_106D38
    ctx->pc = 0x142354u;
    SET_GPR_U32(ctx, 31, 0x14235Cu);
    ctx->pc = 0x142358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142354u;
            // 0x142358: 0x8f848774  lw          $a0, -0x788C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106D38u;
    if (runtime->hasFunction(0x106D38u)) {
        auto targetFn = runtime->lookupFunction(0x106D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14235Cu; }
        if (ctx->pc != 0x14235Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkOpenGifTag_0x106d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14235Cu; }
        if (ctx->pc != 0x14235Cu) { return; }
    }
    ctx->pc = 0x14235Cu;
label_14235c:
    // 0x14235c: 0x8f848774  lw          $a0, -0x788C($gp)
    ctx->pc = 0x14235cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
    // 0x142360: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x142360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x142364: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x142364u;
    SET_GPR_U32(ctx, 31, 0x14236Cu);
    ctx->pc = 0x142368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142364u;
            // 0x142368: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106E90u;
    if (runtime->hasFunction(0x106E90u)) {
        auto targetFn = runtime->lookupFunction(0x106E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14236Cu; }
        if (ctx->pc != 0x14236Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkAddGsAD_0x106e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14236Cu; }
        if (ctx->pc != 0x14236Cu) { return; }
    }
    ctx->pc = 0x14236Cu;
label_14236c:
    // 0x14236c: 0x8f848774  lw          $a0, -0x788C($gp)
    ctx->pc = 0x14236cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
    // 0x142370: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x142370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x142374: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x142374u;
    SET_GPR_U32(ctx, 31, 0x14237Cu);
    ctx->pc = 0x142378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142374u;
            // 0x142378: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106E90u;
    if (runtime->hasFunction(0x106E90u)) {
        auto targetFn = runtime->lookupFunction(0x106E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14237Cu; }
        if (ctx->pc != 0x14237Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkAddGsAD_0x106e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14237Cu; }
        if (ctx->pc != 0x14237Cu) { return; }
    }
    ctx->pc = 0x14237Cu;
label_14237c:
    // 0x14237c: 0xc041b54  jal         func_106D50
    ctx->pc = 0x14237Cu;
    SET_GPR_U32(ctx, 31, 0x142384u);
    ctx->pc = 0x142380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14237Cu;
            // 0x142380: 0x8f848774  lw          $a0, -0x788C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106D50u;
    if (runtime->hasFunction(0x106D50u)) {
        auto targetFn = runtime->lookupFunction(0x106D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142384u; }
        if (ctx->pc != 0x142384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkCloseGifTag_0x106d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142384u; }
        if (ctx->pc != 0x142384u) { return; }
    }
    ctx->pc = 0x142384u;
label_142384:
    // 0x142384: 0xc041b42  jal         func_106D08
    ctx->pc = 0x142384u;
    SET_GPR_U32(ctx, 31, 0x14238Cu);
    ctx->pc = 0x142388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142384u;
            // 0x142388: 0x8f848774  lw          $a0, -0x788C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106D08u;
    if (runtime->hasFunction(0x106D08u)) {
        auto targetFn = runtime->lookupFunction(0x106D08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14238Cu; }
        if (ctx->pc != 0x14238Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkCloseDirectCode_0x106d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14238Cu; }
        if (ctx->pc != 0x14238Cu) { return; }
    }
    ctx->pc = 0x14238Cu;
label_14238c:
    // 0x14238c: 0xc050ebc  jal         func_143AF0
    ctx->pc = 0x14238Cu;
    SET_GPR_U32(ctx, 31, 0x142394u);
    ctx->pc = 0x142390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14238Cu;
            // 0x142390: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143AF0u;
    if (runtime->hasFunction(0x143AF0u)) {
        auto targetFn = runtime->lookupFunction(0x143AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142394u; }
        if (ctx->pc != 0x142394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkTextureRepeat__Fi_0x143af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142394u; }
        if (ctx->pc != 0x142394u) { return; }
    }
    ctx->pc = 0x142394u;
label_142394:
    // 0x142394: 0x8f828818  lw          $v0, -0x77E8($gp)
    ctx->pc = 0x142394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
    // 0x142398: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x142398u;
    {
        const bool branch_taken_0x142398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14239Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142398u;
            // 0x14239c: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142398) {
            ctx->pc = 0x1423ACu;
            goto label_1423ac;
        }
    }
    ctx->pc = 0x1423A0u;
    // 0x1423a0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1423a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1423a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1423A4u;
    {
        const bool branch_taken_0x1423a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1423A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1423A4u;
            // 0x1423a8: 0x244221c0  addiu       $v0, $v0, 0x21C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1423a4) {
            ctx->pc = 0x1423B0u;
            goto label_1423b0;
        }
    }
    ctx->pc = 0x1423ACu;
label_1423ac:
    // 0x1423ac: 0x244222b0  addiu       $v0, $v0, 0x22B0
    ctx->pc = 0x1423acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8880));
label_1423b0:
    // 0x1423b0: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x1423b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1423b4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1423b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1423b8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1423b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1423bc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1423bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1423c0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1423c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1423c4: 0xc050f18  jal         func_143C60
    ctx->pc = 0x1423C4u;
    SET_GPR_U32(ctx, 31, 0x1423CCu);
    ctx->pc = 0x1423C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1423C4u;
            // 0x1423c8: 0xff828810  sd          $v0, -0x77F0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294936592), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143C60u;
    if (runtime->hasFunction(0x143C60u)) {
        auto targetFn = runtime->lookupFunction(0x143C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1423CCu; }
        if (ctx->pc != 0x1423CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkFrameBuffer__Fiiii_0x143c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1423CCu; }
        if (ctx->pc != 0x1423CCu) { return; }
    }
    ctx->pc = 0x1423CCu;
label_1423cc:
    // 0x1423cc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1423ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1423d0: 0x90242260  lbu         $a0, 0x2260($at)
    ctx->pc = 0x1423d0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 8800)));
    // 0x1423d4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1423d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1423d8: 0x90252261  lbu         $a1, 0x2261($at)
    ctx->pc = 0x1423d8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 8801)));
    // 0x1423dc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1423dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1423e0: 0x90262262  lbu         $a2, 0x2262($at)
    ctx->pc = 0x1423e0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 8802)));
    // 0x1423e4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1423e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1423e8: 0xc05135c  jal         func_144D70
    ctx->pc = 0x1423E8u;
    SET_GPR_U32(ctx, 31, 0x1423F0u);
    ctx->pc = 0x1423ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1423E8u;
            // 0x1423ec: 0x90272263  lbu         $a3, 0x2263($at) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 8803)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144D70u;
    if (runtime->hasFunction(0x144D70u)) {
        auto targetFn = runtime->lookupFunction(0x144D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1423F0u; }
        if (ctx->pc != 0x1423F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkClearScreen__FUcUcUcUc_0x144d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1423F0u; }
        if (ctx->pc != 0x1423F0u) { return; }
    }
    ctx->pc = 0x1423F0u;
label_1423f0:
    // 0x1423f0: 0xc050e88  jal         func_143A20
    ctx->pc = 0x1423F0u;
    SET_GPR_U32(ctx, 31, 0x1423F8u);
    ctx->pc = 0x143A20u;
    if (runtime->hasFunction(0x143A20u)) {
        auto targetFn = runtime->lookupFunction(0x143A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1423F8u; }
        if (ctx->pc != 0x1423F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgFlushRenderInfo__Fv_0x143a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1423F8u; }
        if (ctx->pc != 0x1423F8u) { return; }
    }
    ctx->pc = 0x1423F8u;
label_1423f8:
    // 0x1423f8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1423f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1423fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1423fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x142400: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x142400u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x142404: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x142404u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142408: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x142408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14240c: 0x3e00008  jr          $ra
    ctx->pc = 0x14240Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14240Cu;
            // 0x142410: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x142414u;
}
