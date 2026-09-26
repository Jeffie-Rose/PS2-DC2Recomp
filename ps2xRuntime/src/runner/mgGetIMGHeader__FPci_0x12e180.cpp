#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgGetIMGHeader__FPci
// Address: 0x12e180 - 0x12e434
void mgGetIMGHeader__FPci_0x12e180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgGetIMGHeader__FPci_0x12e180");
#endif

    switch (ctx->pc) {
        case 0x12e1c4u: goto label_12e1c4;
        case 0x12e228u: goto label_12e228;
        case 0x12e2d4u: goto label_12e2d4;
        case 0x12e324u: goto label_12e324;
        case 0x12e348u: goto label_12e348;
        default: break;
    }

    ctx->pc = 0x12e180u;

    // 0x12e180: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x12e180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x12e184: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x12e184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x12e188: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x12e188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x12e18c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x12e18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x12e190: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x12e190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x12e194: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x12e194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x12e198: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12e198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x12e19c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12e19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12e1a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12e1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12e1a4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x12e1a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e1a8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x12e1a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e1ac: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x12e1acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e1b0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x12e1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x12e1b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12e1b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e1b8: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x12e1b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x12e1bc: 0xc049c86  jal         func_127218
    ctx->pc = 0x12E1BCu;
    SET_GPR_U32(ctx, 31, 0x12E1C4u);
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E1C4u; }
        if (ctx->pc != 0x12E1C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E1C4u; }
        if (ctx->pc != 0x12E1C4u) { return; }
    }
    ctx->pc = 0x12E1C4u;
label_12e1c4:
    // 0x12e1c4: 0x16600014  bnez        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x12E1C4u;
    {
        const bool branch_taken_0x12e1c4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e1c4) {
            ctx->pc = 0x12E218u;
            goto label_12e218;
        }
    }
    ctx->pc = 0x12E1CCu;
    // 0x12e1cc: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x12e1ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x12e1d0: 0xdce60000  ld          $a2, 0x0($a3)
    ctx->pc = 0x12e1d0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12e1d4: 0xdce50008  ld          $a1, 0x8($a3)
    ctx->pc = 0x12e1d4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x12e1d8: 0xdce40010  ld          $a0, 0x10($a3)
    ctx->pc = 0x12e1d8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x12e1dc: 0xdce30018  ld          $v1, 0x18($a3)
    ctx->pc = 0x12e1dcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x12e1e0: 0xfea60000  sd          $a2, 0x0($s5)
    ctx->pc = 0x12e1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 6));
    // 0x12e1e4: 0xfea50008  sd          $a1, 0x8($s5)
    ctx->pc = 0x12e1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 5));
    // 0x12e1e8: 0xfea40010  sd          $a0, 0x10($s5)
    ctx->pc = 0x12e1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 16), GPR_U64(ctx, 4));
    // 0x12e1ec: 0xfea30018  sd          $v1, 0x18($s5)
    ctx->pc = 0x12e1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 24), GPR_U64(ctx, 3));
    // 0x12e1f0: 0xdce60020  ld          $a2, 0x20($a3)
    ctx->pc = 0x12e1f0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x12e1f4: 0xdce50028  ld          $a1, 0x28($a3)
    ctx->pc = 0x12e1f4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x12e1f8: 0xdce40030  ld          $a0, 0x30($a3)
    ctx->pc = 0x12e1f8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x12e1fc: 0xdce30038  ld          $v1, 0x38($a3)
    ctx->pc = 0x12e1fcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x12e200: 0xfea60020  sd          $a2, 0x20($s5)
    ctx->pc = 0x12e200u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 32), GPR_U64(ctx, 6));
    // 0x12e204: 0xfea50028  sd          $a1, 0x28($s5)
    ctx->pc = 0x12e204u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 40), GPR_U64(ctx, 5));
    // 0x12e208: 0xfea40030  sd          $a0, 0x30($s5)
    ctx->pc = 0x12e208u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 48), GPR_U64(ctx, 4));
    // 0x12e20c: 0xfea30038  sd          $v1, 0x38($s5)
    ctx->pc = 0x12e20cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 56), GPR_U64(ctx, 3));
    // 0x12e210: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x12E210u;
    {
        const bool branch_taken_0x12e210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e210) {
            ctx->pc = 0x12E408u;
            goto label_12e408;
        }
    }
    ctx->pc = 0x12E218u;
label_12e218:
    // 0x12e218: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x12e218u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e21c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12e21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e220: 0xc04b800  jal         func_12E000
    ctx->pc = 0x12E220u;
    SET_GPR_U32(ctx, 31, 0x12E228u);
    ctx->pc = 0x12E000u;
    if (runtime->hasFunction(0x12E000u)) {
        auto targetFn = runtime->lookupFunction(0x12E000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E228u; }
        if (ctx->pc != 0x12E228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetIMGVersion__FPc_0x12e000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E228u; }
        if (ctx->pc != 0x12E228u) { return; }
    }
    ctx->pc = 0x12E228u;
label_12e228:
    // 0x12e228: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12e228u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e22c: 0x16000014  bnez        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x12E22Cu;
    {
        const bool branch_taken_0x12e22c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e22c) {
            ctx->pc = 0x12E280u;
            goto label_12e280;
        }
    }
    ctx->pc = 0x12E234u;
    // 0x12e234: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x12e234u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x12e238: 0xdce60000  ld          $a2, 0x0($a3)
    ctx->pc = 0x12e238u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12e23c: 0xdce50008  ld          $a1, 0x8($a3)
    ctx->pc = 0x12e23cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x12e240: 0xdce40010  ld          $a0, 0x10($a3)
    ctx->pc = 0x12e240u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x12e244: 0xdce30018  ld          $v1, 0x18($a3)
    ctx->pc = 0x12e244u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x12e248: 0xfea60000  sd          $a2, 0x0($s5)
    ctx->pc = 0x12e248u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 6));
    // 0x12e24c: 0xfea50008  sd          $a1, 0x8($s5)
    ctx->pc = 0x12e24cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 5));
    // 0x12e250: 0xfea40010  sd          $a0, 0x10($s5)
    ctx->pc = 0x12e250u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 16), GPR_U64(ctx, 4));
    // 0x12e254: 0xfea30018  sd          $v1, 0x18($s5)
    ctx->pc = 0x12e254u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 24), GPR_U64(ctx, 3));
    // 0x12e258: 0xdce60020  ld          $a2, 0x20($a3)
    ctx->pc = 0x12e258u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x12e25c: 0xdce50028  ld          $a1, 0x28($a3)
    ctx->pc = 0x12e25cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x12e260: 0xdce40030  ld          $a0, 0x30($a3)
    ctx->pc = 0x12e260u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x12e264: 0xdce30038  ld          $v1, 0x38($a3)
    ctx->pc = 0x12e264u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x12e268: 0xfea60020  sd          $a2, 0x20($s5)
    ctx->pc = 0x12e268u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 32), GPR_U64(ctx, 6));
    // 0x12e26c: 0xfea50028  sd          $a1, 0x28($s5)
    ctx->pc = 0x12e26cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 40), GPR_U64(ctx, 5));
    // 0x12e270: 0xfea40030  sd          $a0, 0x30($s5)
    ctx->pc = 0x12e270u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 48), GPR_U64(ctx, 4));
    // 0x12e274: 0xfea30038  sd          $v1, 0x38($s5)
    ctx->pc = 0x12e274u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 56), GPR_U64(ctx, 3));
    // 0x12e278: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x12E278u;
    {
        const bool branch_taken_0x12e278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e278) {
            ctx->pc = 0x12E408u;
            goto label_12e408;
        }
    }
    ctx->pc = 0x12E280u;
label_12e280:
    // 0x12e280: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12e280u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e284: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12e284u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e288: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12e288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e28c: 0x12030004  beq         $s0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12E28Cu;
    {
        const bool branch_taken_0x12e28c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x12e28c) {
            ctx->pc = 0x12E2A0u;
            goto label_12e2a0;
        }
    }
    ctx->pc = 0x12E294u;
    // 0x12e294: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12e294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12e298: 0x16030004  bne         $s0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12E298u;
    {
        const bool branch_taken_0x12e298 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x12e298) {
            ctx->pc = 0x12E2ACu;
            goto label_12e2ac;
        }
    }
    ctx->pc = 0x12E2A0u;
label_12e2a0:
    // 0x12e2a0: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x12e2a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x12e2a4: 0x8e710004  lw          $s1, 0x4($s3)
    ctx->pc = 0x12e2a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x12e2a8: 0x24120030  addiu       $s2, $zero, 0x30
    ctx->pc = 0x12e2a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_12e2ac:
    // 0x12e2ac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x12e2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12e2b0: 0x16030005  bne         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12E2B0u;
    {
        const bool branch_taken_0x12e2b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x12e2b0) {
            ctx->pc = 0x12E2C8u;
            goto label_12e2c8;
        }
    }
    ctx->pc = 0x12E2B8u;
    // 0x12e2b8: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x12e2b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e2bc: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x12e2bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x12e2c0: 0x8c710008  lw          $s1, 0x8($v1)
    ctx->pc = 0x12e2c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x12e2c4: 0x24120040  addiu       $s2, $zero, 0x40
    ctx->pc = 0x12e2c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_12e2c8:
    // 0x12e2c8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x12e2c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e2cc: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x12E2CCu;
    {
        const bool branch_taken_0x12e2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e2cc) {
            ctx->pc = 0x12E3B8u;
            goto label_12e3b8;
        }
    }
    ctx->pc = 0x12E2D4u;
label_12e2d4:
    // 0x12e2d4: 0x16d30036  bne         $s6, $s3, . + 4 + (0x36 << 2)
    ctx->pc = 0x12E2D4u;
    {
        const bool branch_taken_0x12e2d4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 19));
        if (branch_taken_0x12e2d4) {
            ctx->pc = 0x12E3B0u;
            goto label_12e3b0;
        }
    }
    ctx->pc = 0x12E2DCu;
    // 0x12e2dc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x12e2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12e2e0: 0x12030014  beq         $s0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x12E2E0u;
    {
        const bool branch_taken_0x12e2e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x12e2e0) {
            ctx->pc = 0x12E334u;
            goto label_12e334;
        }
    }
    ctx->pc = 0x12E2E8u;
    // 0x12e2e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12e2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e2ec: 0x12040007  beq         $s0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12E2ECu;
    {
        const bool branch_taken_0x12e2ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        if (branch_taken_0x12e2ec) {
            ctx->pc = 0x12E30Cu;
            goto label_12e30c;
        }
    }
    ctx->pc = 0x12E2F4u;
    // 0x12e2f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12e2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12e2f8: 0x12030003  beq         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12E2F8u;
    {
        const bool branch_taken_0x12e2f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x12e2f8) {
            ctx->pc = 0x12E308u;
            goto label_12e308;
        }
    }
    ctx->pc = 0x12E300u;
    // 0x12e300: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x12E300u;
    {
        const bool branch_taken_0x12e300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e300) {
            ctx->pc = 0x12E3B0u;
            goto label_12e3b0;
        }
    }
    ctx->pc = 0x12E308u;
label_12e308:
    // 0x12e308: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x12e308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
label_12e30c:
    // 0x12e30c: 0x0  nop
    ctx->pc = 0x12e30cu;
    // NOP
    // 0x12e310: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x12e310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x12e314: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12e314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e318: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x12e318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12e31c: 0xc049c18  jal         func_127060
    ctx->pc = 0x12E31Cu;
    SET_GPR_U32(ctx, 31, 0x12E324u);
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E324u; }
        if (ctx->pc != 0x12E324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E324u; }
        if (ctx->pc != 0x12E324u) { return; }
    }
    ctx->pc = 0x12E324u;
label_12e324:
    // 0x12e324: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x12e324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x12e328: 0xafa300a4  sw          $v1, 0xA4($sp)
    ctx->pc = 0x12e328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
    // 0x12e32c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x12E32Cu;
    {
        const bool branch_taken_0x12e32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e32c) {
            ctx->pc = 0x12E3B0u;
            goto label_12e3b0;
        }
    }
    ctx->pc = 0x12E334u;
label_12e334:
    // 0x12e334: 0x0  nop
    ctx->pc = 0x12e334u;
    // NOP
    // 0x12e338: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x12e338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x12e33c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x12e33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12e340: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x12e340u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e344: 0x0  nop
    ctx->pc = 0x12e344u;
    // NOP
label_12e348:
    // 0x12e348: 0x80e40000  lb          $a0, 0x0($a3)
    ctx->pc = 0x12e348u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12e34c: 0x80e30001  lb          $v1, 0x1($a3)
    ctx->pc = 0x12e34cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x12e350: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x12e350u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x12e354: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x12e354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x12e358: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x12e358u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12e35c: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x12e35cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x12e360: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x12e360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x12e364: 0x1ca0fff8  bgtz        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x12E364u;
    {
        const bool branch_taken_0x12e364 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x12e364) {
            ctx->pc = 0x12E348u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e348;
        }
    }
    ctx->pc = 0x12E36Cu;
    // 0x12e36c: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x12e36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x12e370: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x12e370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x12e374: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x12e374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x12e378: 0xafa300a4  sw          $v1, 0xA4($sp)
    ctx->pc = 0x12e378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
    // 0x12e37c: 0x8e830028  lw          $v1, 0x28($s4)
    ctx->pc = 0x12e37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x12e380: 0xafa300a8  sw          $v1, 0xA8($sp)
    ctx->pc = 0x12e380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 3));
    // 0x12e384: 0x8e83002c  lw          $v1, 0x2C($s4)
    ctx->pc = 0x12e384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x12e388: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x12e388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x12e38c: 0x86830030  lh          $v1, 0x30($s4)
    ctx->pc = 0x12e38cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x12e390: 0xa7a300b0  sh          $v1, 0xB0($sp)
    ctx->pc = 0x12e390u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 176), (uint16_t)GPR_U32(ctx, 3));
    // 0x12e394: 0x27a400b2  addiu       $a0, $sp, 0xB2
    ctx->pc = 0x12e394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 178));
    // 0x12e398: 0x86830032  lh          $v1, 0x32($s4)
    ctx->pc = 0x12e398u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 50)));
    // 0x12e39c: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x12e39cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x12e3a0: 0x8e830034  lw          $v1, 0x34($s4)
    ctx->pc = 0x12e3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x12e3a4: 0xafa300b4  sw          $v1, 0xB4($sp)
    ctx->pc = 0x12e3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 3));
    // 0x12e3a8: 0xde830038  ld          $v1, 0x38($s4)
    ctx->pc = 0x12e3a8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x12e3ac: 0xffa300b8  sd          $v1, 0xB8($sp)
    ctx->pc = 0x12e3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 3));
label_12e3b0:
    // 0x12e3b0: 0x292a021  addu        $s4, $s4, $s2
    ctx->pc = 0x12e3b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x12e3b4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x12e3b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_12e3b8:
    // 0x12e3b8: 0x271182a  slt         $v1, $s3, $s1
    ctx->pc = 0x12e3b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x12e3bc: 0x1460ffc5  bnez        $v1, . + 4 + (-0x3B << 2)
    ctx->pc = 0x12E3BCu;
    {
        const bool branch_taken_0x12e3bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e3bc) {
            ctx->pc = 0x12E2D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e2d4;
        }
    }
    ctx->pc = 0x12E3C4u;
    // 0x12e3c4: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x12e3c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x12e3c8: 0xdce60000  ld          $a2, 0x0($a3)
    ctx->pc = 0x12e3c8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12e3cc: 0xdce50008  ld          $a1, 0x8($a3)
    ctx->pc = 0x12e3ccu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x12e3d0: 0xdce40010  ld          $a0, 0x10($a3)
    ctx->pc = 0x12e3d0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x12e3d4: 0xdce30018  ld          $v1, 0x18($a3)
    ctx->pc = 0x12e3d4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x12e3d8: 0xfea60000  sd          $a2, 0x0($s5)
    ctx->pc = 0x12e3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 6));
    // 0x12e3dc: 0xfea50008  sd          $a1, 0x8($s5)
    ctx->pc = 0x12e3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 5));
    // 0x12e3e0: 0xfea40010  sd          $a0, 0x10($s5)
    ctx->pc = 0x12e3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 16), GPR_U64(ctx, 4));
    // 0x12e3e4: 0xfea30018  sd          $v1, 0x18($s5)
    ctx->pc = 0x12e3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 24), GPR_U64(ctx, 3));
    // 0x12e3e8: 0xdce60020  ld          $a2, 0x20($a3)
    ctx->pc = 0x12e3e8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x12e3ec: 0xdce50028  ld          $a1, 0x28($a3)
    ctx->pc = 0x12e3ecu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x12e3f0: 0xdce40030  ld          $a0, 0x30($a3)
    ctx->pc = 0x12e3f0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x12e3f4: 0xdce30038  ld          $v1, 0x38($a3)
    ctx->pc = 0x12e3f4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x12e3f8: 0xfea60020  sd          $a2, 0x20($s5)
    ctx->pc = 0x12e3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 32), GPR_U64(ctx, 6));
    // 0x12e3fc: 0xfea50028  sd          $a1, 0x28($s5)
    ctx->pc = 0x12e3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 40), GPR_U64(ctx, 5));
    // 0x12e400: 0xfea40030  sd          $a0, 0x30($s5)
    ctx->pc = 0x12e400u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 48), GPR_U64(ctx, 4));
    // 0x12e404: 0xfea30038  sd          $v1, 0x38($s5)
    ctx->pc = 0x12e404u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 56), GPR_U64(ctx, 3));
label_12e408:
    // 0x12e408: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x12e408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12e40c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x12e40cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12e410: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x12e410u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12e414: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x12e414u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12e418: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12e418u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12e41c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12e41cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12e420: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12e420u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12e424: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12e424u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e428: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x12e428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x12e42c: 0x3e00008  jr          $ra
    ctx->pc = 0x12E42Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12E434u;
}
