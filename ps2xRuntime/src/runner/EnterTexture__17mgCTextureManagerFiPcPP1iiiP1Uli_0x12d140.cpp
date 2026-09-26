#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EnterTexture__17mgCTextureManagerFiPcPP1iiiP1Uli
// Address: 0x12d140 - 0x12d894
void EnterTexture__17mgCTextureManagerFiPcPP1iiiP1Uli_0x12d140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EnterTexture__17mgCTextureManagerFiPcPP1iiiP1Uli_0x12d140");
#endif

    switch (ctx->pc) {
        case 0x12d198u: goto label_12d198;
        case 0x12d1a8u: goto label_12d1a8;
        case 0x12d1d0u: goto label_12d1d0;
        case 0x12d204u: goto label_12d204;
        case 0x12d238u: goto label_12d238;
        case 0x12d25cu: goto label_12d25c;
        case 0x12d2fcu: goto label_12d2fc;
        case 0x12d334u: goto label_12d334;
        case 0x12d36cu: goto label_12d36c;
        case 0x12d3a4u: goto label_12d3a4;
        case 0x12d4acu: goto label_12d4ac;
        case 0x12d4f4u: goto label_12d4f4;
        case 0x12d6e0u: goto label_12d6e0;
        case 0x12d79cu: goto label_12d79c;
        case 0x12d7acu: goto label_12d7ac;
        case 0x12d838u: goto label_12d838;
        case 0x12d85cu: goto label_12d85c;
        default: break;
    }

    ctx->pc = 0x12d140u;

    // 0x12d140: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x12d140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x12d144: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x12d144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x12d148: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x12d148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x12d14c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x12d14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x12d150: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x12d150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x12d154: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x12d154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x12d158: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x12d158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x12d15c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x12d15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x12d160: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12d160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x12d164: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12d164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12d168: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12d168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12d16c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x12d16cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d170: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x12d170u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d174: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x12d174u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d178: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x12d178u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d17c: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x12d17cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d180: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x12d180u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d184: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x12d184u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d188: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x12d188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x12d18c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x12d18cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d190: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x12D190u;
    SET_GPR_U32(ctx, 31, 0x12D198u);
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D198u; }
        if (ctx->pc != 0x12D198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D198u; }
        if (ctx->pc != 0x12D198u) { return; }
    }
    ctx->pc = 0x12D198u;
label_12d198:
    // 0x12d198: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x12d198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x12d19c: 0x26a501d8  addiu       $a1, $s5, 0x1D8
    ctx->pc = 0x12d19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 472));
    // 0x12d1a0: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x12D1A0u;
    SET_GPR_U32(ctx, 31, 0x12D1A8u);
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D1A8u; }
        if (ctx->pc != 0x12D1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D1A8u; }
        if (ctx->pc != 0x12D1A8u) { return; }
    }
    ctx->pc = 0x12D1A8u;
label_12d1a8:
    // 0x12d1a8: 0x83a200b0  lb          $v0, 0xB0($sp)
    ctx->pc = 0x12d1a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x12d1ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12D1ACu;
    {
        const bool branch_taken_0x12d1ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d1ac) {
            ctx->pc = 0x12D1C0u;
            goto label_12d1c0;
        }
    }
    ctx->pc = 0x12D1B4u;
    // 0x12d1b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12d1b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d1b8: 0x100001a9  b           . + 4 + (0x1A9 << 2)
    ctx->pc = 0x12D1B8u;
    {
        const bool branch_taken_0x12d1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d1b8) {
            ctx->pc = 0x12D860u;
            goto label_12d860;
        }
    }
    ctx->pc = 0x12D1C0u;
label_12d1c0:
    // 0x12d1c0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12d1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d1c4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x12d1c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d1c8: 0xc04b41c  jal         func_12D070
    ctx->pc = 0x12D1C8u;
    SET_GPR_U32(ctx, 31, 0x12D1D0u);
    ctx->pc = 0x12D070u;
    if (runtime->hasFunction(0x12D070u)) {
        auto targetFn = runtime->lookupFunction(0x12D070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D1D0u; }
        if (ctx->pc != 0x12D1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTextureBlock__17mgCTextureManagerFi_0x12d070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D1D0u; }
        if (ctx->pc != 0x12D1D0u) { return; }
    }
    ctx->pc = 0x12D1D0u;
label_12d1d0:
    // 0x12d1d0: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x12d1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x12d1d4: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x12d1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x12d1d8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12D1D8u;
    {
        const bool branch_taken_0x12d1d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d1d8) {
            ctx->pc = 0x12D1ECu;
            goto label_12d1ec;
        }
    }
    ctx->pc = 0x12D1E0u;
    // 0x12d1e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12d1e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d1e4: 0x1000019e  b           . + 4 + (0x19E << 2)
    ctx->pc = 0x12D1E4u;
    {
        const bool branch_taken_0x12d1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d1e4) {
            ctx->pc = 0x12D860u;
            goto label_12d860;
        }
    }
    ctx->pc = 0x12D1ECu;
label_12d1ec:
    // 0x12d1ec: 0x1680000d  bnez        $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x12D1ECu;
    {
        const bool branch_taken_0x12d1ec = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d1ec) {
            ctx->pc = 0x12D224u;
            goto label_12d224;
        }
    }
    ctx->pc = 0x12D1F4u;
    // 0x12d1f4: 0x27b400d0  addiu       $s4, $sp, 0xD0
    ctx->pc = 0x12d1f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x12d1f8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x12d1f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d1fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12D1FCu;
    {
        const bool branch_taken_0x12d1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d1fc) {
            ctx->pc = 0x12D214u;
            goto label_12d214;
        }
    }
    ctx->pc = 0x12D204u;
label_12d204:
    // 0x12d204: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x12d204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12d208: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x12d208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x12d20c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x12d20cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x12d210: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12d210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_12d214:
    // 0x12d214: 0x0  nop
    ctx->pc = 0x12d214u;
    // NOP
    // 0x12d218: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x12d218u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x12d21c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x12D21Cu;
    {
        const bool branch_taken_0x12d21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d21c) {
            ctx->pc = 0x12D204u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d204;
        }
    }
    ctx->pc = 0x12D224u;
label_12d224:
    // 0x12d224: 0x0  nop
    ctx->pc = 0x12d224u;
    // NOP
    // 0x12d228: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12d228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d22c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x12d22cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x12d230: 0xc04b3ec  jal         func_12CFB0
    ctx->pc = 0x12D230u;
    SET_GPR_U32(ctx, 31, 0x12D238u);
    ctx->pc = 0x12CFB0u;
    if (runtime->hasFunction(0x12CFB0u)) {
        auto targetFn = runtime->lookupFunction(0x12CFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D238u; }
        if (ctx->pc != 0x12D238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchTexture__17mgCTextureManagerFPc_0x12cfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D238u; }
        if (ctx->pc != 0x12D238u) { return; }
    }
    ctx->pc = 0x12D238u;
label_12d238:
    // 0x12d238: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12d238u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d23c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12D23Cu;
    {
        const bool branch_taken_0x12d23c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d23c) {
            ctx->pc = 0x12D250u;
            goto label_12d250;
        }
    }
    ctx->pc = 0x12D244u;
    // 0x12d244: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12d244u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d248: 0x10000185  b           . + 4 + (0x185 << 2)
    ctx->pc = 0x12D248u;
    {
        const bool branch_taken_0x12d248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d248) {
            ctx->pc = 0x12D860u;
            goto label_12d860;
        }
    }
    ctx->pc = 0x12D250u;
label_12d250:
    // 0x12d250: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12d250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d254: 0xc04b12c  jal         func_12C4B0
    ctx->pc = 0x12D254u;
    SET_GPR_U32(ctx, 31, 0x12D25Cu);
    ctx->pc = 0x12C4B0u;
    if (runtime->hasFunction(0x12C4B0u)) {
        auto targetFn = runtime->lookupFunction(0x12C4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D25Cu; }
        if (ctx->pc != 0x12D25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__10mgCTextureFv_0x12c4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D25Cu; }
        if (ctx->pc != 0x12D25Cu) { return; }
    }
    ctx->pc = 0x12D25Cu;
label_12d25c:
    // 0x12d25c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x12d25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12d260: 0x1242001b  beq         $s2, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x12D260u;
    {
        const bool branch_taken_0x12d260 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x12d260) {
            ctx->pc = 0x12D2D0u;
            goto label_12d2d0;
        }
    }
    ctx->pc = 0x12D268u;
    // 0x12d268: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x12d268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x12d26c: 0x12420015  beq         $s2, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x12D26Cu;
    {
        const bool branch_taken_0x12d26c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x12d26c) {
            ctx->pc = 0x12D2C4u;
            goto label_12d2c4;
        }
    }
    ctx->pc = 0x12D274u;
    // 0x12d274: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x12d274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12d278: 0x1242000f  beq         $s2, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x12D278u;
    {
        const bool branch_taken_0x12d278 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x12d278) {
            ctx->pc = 0x12D2B8u;
            goto label_12d2b8;
        }
    }
    ctx->pc = 0x12D280u;
    // 0x12d280: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x12d280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12d284: 0x12420009  beq         $s2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12D284u;
    {
        const bool branch_taken_0x12d284 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x12d284) {
            ctx->pc = 0x12D2ACu;
            goto label_12d2ac;
        }
    }
    ctx->pc = 0x12D28Cu;
    // 0x12d28c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x12d28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12d290: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D290u;
    {
        const bool branch_taken_0x12d290 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x12d290) {
            ctx->pc = 0x12D2A0u;
            goto label_12d2a0;
        }
    }
    ctx->pc = 0x12D298u;
    // 0x12d298: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x12D298u;
    {
        const bool branch_taken_0x12d298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d298) {
            ctx->pc = 0x12D2DCu;
            goto label_12d2dc;
        }
    }
    ctx->pc = 0x12D2A0u;
label_12d2a0:
    // 0x12d2a0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x12d2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x12d2a4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x12D2A4u;
    {
        const bool branch_taken_0x12d2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d2a4) {
            ctx->pc = 0x12D2E8u;
            goto label_12d2e8;
        }
    }
    ctx->pc = 0x12D2ACu;
label_12d2ac:
    // 0x12d2ac: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x12d2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x12d2b0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x12D2B0u;
    {
        const bool branch_taken_0x12d2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d2b0) {
            ctx->pc = 0x12D2E8u;
            goto label_12d2e8;
        }
    }
    ctx->pc = 0x12D2B8u;
label_12d2b8:
    // 0x12d2b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12d2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12d2bc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x12D2BCu;
    {
        const bool branch_taken_0x12d2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d2bc) {
            ctx->pc = 0x12D2E8u;
            goto label_12d2e8;
        }
    }
    ctx->pc = 0x12D2C4u;
label_12d2c4:
    // 0x12d2c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12d2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d2c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12D2C8u;
    {
        const bool branch_taken_0x12d2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d2c8) {
            ctx->pc = 0x12D2E8u;
            goto label_12d2e8;
        }
    }
    ctx->pc = 0x12D2D0u;
label_12d2d0:
    // 0x12d2d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12d2d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d2d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12D2D4u;
    {
        const bool branch_taken_0x12d2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d2d4) {
            ctx->pc = 0x12D2E8u;
            goto label_12d2e8;
        }
    }
    ctx->pc = 0x12D2DCu;
label_12d2dc:
    // 0x12d2dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12d2dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d2e0: 0x1000015f  b           . + 4 + (0x15F << 2)
    ctx->pc = 0x12D2E0u;
    {
        const bool branch_taken_0x12d2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d2e0) {
            ctx->pc = 0x12D860u;
            goto label_12d860;
        }
    }
    ctx->pc = 0x12D2E8u;
label_12d2e8:
    // 0x12d2e8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x12d2e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d2ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12d2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d2f0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x12d2f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d2f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12D2F4u;
    {
        const bool branch_taken_0x12d2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d2f4) {
            ctx->pc = 0x12D318u;
            goto label_12d318;
        }
    }
    ctx->pc = 0x12D2FCu;
label_12d2fc:
    // 0x12d2fc: 0x72843  sra         $a1, $a3, 1
    ctx->pc = 0x12d2fcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 7), 1));
    // 0x12d300: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D300u;
    {
        const bool branch_taken_0x12d300 = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x12d300) {
            ctx->pc = 0x12D310u;
            goto label_12d310;
        }
    }
    ctx->pc = 0x12D308u;
    // 0x12d308: 0x24e50001  addiu       $a1, $a3, 0x1
    ctx->pc = 0x12d308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x12d30c: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x12d30cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_12d310:
    // 0x12d310: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x12d310u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d314: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12d314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_12d318:
    // 0x12d318: 0x28e10002  slti        $at, $a3, 0x2
    ctx->pc = 0x12d318u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x12d31c: 0x1020fff7  beqz        $at, . + 4 + (-0x9 << 2)
    ctx->pc = 0x12D31Cu;
    {
        const bool branch_taken_0x12d31c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d31c) {
            ctx->pc = 0x12D2FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d2fc;
        }
    }
    ctx->pc = 0x12D324u;
    // 0x12d324: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12d324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d328: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12d328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d32c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12D32Cu;
    {
        const bool branch_taken_0x12d32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d32c) {
            ctx->pc = 0x12D33Cu;
            goto label_12d33c;
        }
    }
    ctx->pc = 0x12D334u;
label_12d334:
    // 0x12d334: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x12d334u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x12d338: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x12d338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_12d33c:
    // 0x12d33c: 0x0  nop
    ctx->pc = 0x12d33cu;
    // NOP
    // 0x12d340: 0xa3302a  slt         $a2, $a1, $v1
    ctx->pc = 0x12d340u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x12d344: 0x0  nop
    ctx->pc = 0x12d344u;
    // NOP
    // 0x12d348: 0x0  nop
    ctx->pc = 0x12d348u;
    // NOP
    // 0x12d34c: 0x14c0fff9  bnez        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x12D34Cu;
    {
        const bool branch_taken_0x12d34c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d34c) {
            ctx->pc = 0x12D334u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d334;
        }
    }
    ctx->pc = 0x12D354u;
    // 0x12d354: 0x12670002  beq         $s3, $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x12D354u;
    {
        const bool branch_taken_0x12d354 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 7));
        if (branch_taken_0x12d354) {
            ctx->pc = 0x12D360u;
            goto label_12d360;
        }
    }
    ctx->pc = 0x12D35Cu;
    // 0x12d35c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12d35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_12d360:
    // 0x12d360: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x12d360u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d364: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12D364u;
    {
        const bool branch_taken_0x12d364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d364) {
            ctx->pc = 0x12D388u;
            goto label_12d388;
        }
    }
    ctx->pc = 0x12D36Cu;
label_12d36c:
    // 0x12d36c: 0x72843  sra         $a1, $a3, 1
    ctx->pc = 0x12d36cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 7), 1));
    // 0x12d370: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D370u;
    {
        const bool branch_taken_0x12d370 = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x12d370) {
            ctx->pc = 0x12D380u;
            goto label_12d380;
        }
    }
    ctx->pc = 0x12D378u;
    // 0x12d378: 0x24e50001  addiu       $a1, $a3, 0x1
    ctx->pc = 0x12d378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x12d37c: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x12d37cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_12d380:
    // 0x12d380: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x12d380u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d384: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x12d384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_12d388:
    // 0x12d388: 0x28e10002  slti        $at, $a3, 0x2
    ctx->pc = 0x12d388u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x12d38c: 0x1020fff7  beqz        $at, . + 4 + (-0x9 << 2)
    ctx->pc = 0x12D38Cu;
    {
        const bool branch_taken_0x12d38c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d38c) {
            ctx->pc = 0x12D36Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d36c;
        }
    }
    ctx->pc = 0x12D394u;
    // 0x12d394: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12d394u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d398: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12d398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d39c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12D39Cu;
    {
        const bool branch_taken_0x12d39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d39c) {
            ctx->pc = 0x12D3ACu;
            goto label_12d3ac;
        }
    }
    ctx->pc = 0x12D3A4u;
label_12d3a4:
    // 0x12d3a4: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x12d3a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x12d3a8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x12d3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_12d3ac:
    // 0x12d3ac: 0x0  nop
    ctx->pc = 0x12d3acu;
    // NOP
    // 0x12d3b0: 0xa4302a  slt         $a2, $a1, $a0
    ctx->pc = 0x12d3b0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x12d3b4: 0x0  nop
    ctx->pc = 0x12d3b4u;
    // NOP
    // 0x12d3b8: 0x0  nop
    ctx->pc = 0x12d3b8u;
    // NOP
    // 0x12d3bc: 0x14c0fff9  bnez        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x12D3BCu;
    {
        const bool branch_taken_0x12d3bc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d3bc) {
            ctx->pc = 0x12D3A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d3a4;
        }
    }
    ctx->pc = 0x12D3C4u;
    // 0x12d3c4: 0x12e70002  beq         $s7, $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x12D3C4u;
    {
        const bool branch_taken_0x12d3c4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 7));
        if (branch_taken_0x12d3c4) {
            ctx->pc = 0x12D3D0u;
            goto label_12d3d0;
        }
    }
    ctx->pc = 0x12D3CCu;
    // 0x12d3cc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x12d3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_12d3d0:
    // 0x12d3d0: 0x133183  sra         $a2, $s3, 6
    ctx->pc = 0x12d3d0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 19), 6));
    // 0x12d3d4: 0x6610003  bgez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D3D4u;
    {
        const bool branch_taken_0x12d3d4 = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x12d3d4) {
            ctx->pc = 0x12D3E4u;
            goto label_12d3e4;
        }
    }
    ctx->pc = 0x12D3DCu;
    // 0x12d3dc: 0x2665003f  addiu       $a1, $s3, 0x3F
    ctx->pc = 0x12d3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 63));
    // 0x12d3e0: 0x53183  sra         $a2, $a1, 6
    ctx->pc = 0x12d3e0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 6));
label_12d3e4:
    // 0x12d3e4: 0x3265003f  andi        $a1, $s3, 0x3F
    ctx->pc = 0x12d3e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)63);
    // 0x12d3e8: 0x6610004  bgez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x12D3E8u;
    {
        const bool branch_taken_0x12d3e8 = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x12d3e8) {
            ctx->pc = 0x12D3FCu;
            goto label_12d3fc;
        }
    }
    ctx->pc = 0x12D3F0u;
    // 0x12d3f0: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x12D3F0u;
    {
        const bool branch_taken_0x12d3f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d3f0) {
            ctx->pc = 0x12D3FCu;
            goto label_12d3fc;
        }
    }
    ctx->pc = 0x12D3F8u;
    // 0x12d3f8: 0x24a5ffc0  addiu       $a1, $a1, -0x40
    ctx->pc = 0x12d3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967232));
label_12d3fc:
    // 0x12d3fc: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x12D3FCu;
    {
        const bool branch_taken_0x12d3fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d3fc) {
            ctx->pc = 0x12D408u;
            goto label_12d408;
        }
    }
    ctx->pc = 0x12D404u;
    // 0x12d404: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x12d404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_12d408:
    // 0x12d408: 0x1cc00002  bgtz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x12D408u;
    {
        const bool branch_taken_0x12d408 = (GPR_S32(ctx, 6) > 0);
        if (branch_taken_0x12d408) {
            ctx->pc = 0x12D414u;
            goto label_12d414;
        }
    }
    ctx->pc = 0x12D410u;
    // 0x12d410: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x12d410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12d414:
    // 0x12d414: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x12d414u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d418: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x12d418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x12d41c: 0x16450002  bne         $s2, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x12D41Cu;
    {
        const bool branch_taken_0x12d41c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 5));
        if (branch_taken_0x12d41c) {
            ctx->pc = 0x12D428u;
            goto label_12d428;
        }
    }
    ctx->pc = 0x12D424u;
    // 0x12d424: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x12d424u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_12d428:
    // 0x12d428: 0x2772818  mult        $a1, $s3, $s7
    ctx->pc = 0x12d428u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x12d42c: 0xe53818  mult        $a3, $a3, $a1
    ctx->pc = 0x12d42cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x12d430: 0x72a03  sra         $a1, $a3, 8
    ctx->pc = 0x12d430u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 7), 8));
    // 0x12d434: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D434u;
    {
        const bool branch_taken_0x12d434 = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x12d434) {
            ctx->pc = 0x12D444u;
            goto label_12d444;
        }
    }
    ctx->pc = 0x12D43Cu;
    // 0x12d43c: 0x24e500ff  addiu       $a1, $a3, 0xFF
    ctx->pc = 0x12d43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 255));
    // 0x12d440: 0x52a03  sra         $a1, $a1, 8
    ctx->pc = 0x12d440u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 8));
label_12d444:
    // 0x12d444: 0x538c3  sra         $a3, $a1, 3
    ctx->pc = 0x12d444u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 5), 3));
    // 0x12d448: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D448u;
    {
        const bool branch_taken_0x12d448 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x12d448) {
            ctx->pc = 0x12D458u;
            goto label_12d458;
        }
    }
    ctx->pc = 0x12D450u;
    // 0x12d450: 0x24a50007  addiu       $a1, $a1, 0x7
    ctx->pc = 0x12d450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x12d454: 0x538c3  sra         $a3, $a1, 3
    ctx->pc = 0x12d454u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 5), 3));
label_12d458:
    // 0x12d458: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x12d458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x12d45c: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x12d45cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12d460: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x12d460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x12d464: 0x1045000e  beq         $v0, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x12D464u;
    {
        const bool branch_taken_0x12d464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x12d464) {
            ctx->pc = 0x12D4A0u;
            goto label_12d4a0;
        }
    }
    ctx->pc = 0x12D46Cu;
    // 0x12d46c: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x12d46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x12d470: 0x1045000b  beq         $v0, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x12D470u;
    {
        const bool branch_taken_0x12d470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x12d470) {
            ctx->pc = 0x12D4A0u;
            goto label_12d4a0;
        }
    }
    ctx->pc = 0x12D478u;
    // 0x12d478: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x12d478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12d47c: 0x10450008  beq         $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x12D47Cu;
    {
        const bool branch_taken_0x12d47c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x12d47c) {
            ctx->pc = 0x12D4A0u;
            goto label_12d4a0;
        }
    }
    ctx->pc = 0x12D484u;
    // 0x12d484: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D484u;
    {
        const bool branch_taken_0x12d484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d484) {
            ctx->pc = 0x12D4A0u;
            goto label_12d4a0;
        }
    }
    ctx->pc = 0x12D48Cu;
    // 0x12d48c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12d48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d490: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D490u;
    {
        const bool branch_taken_0x12d490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x12d490) {
            ctx->pc = 0x12D4A0u;
            goto label_12d4a0;
        }
    }
    ctx->pc = 0x12D498u;
    // 0x12d498: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x12D498u;
    {
        const bool branch_taken_0x12d498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d498) {
            ctx->pc = 0x12D690u;
            goto label_12d690;
        }
    }
    ctx->pc = 0x12D4A0u;
label_12d4a0:
    // 0x12d4a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12d4a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d4a4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12D4A4u;
    {
        const bool branch_taken_0x12d4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d4a4) {
            ctx->pc = 0x12D4D4u;
            goto label_12d4d4;
        }
    }
    ctx->pc = 0x12D4ACu;
label_12d4ac:
    // 0x12d4ac: 0x54080  sll         $t0, $a1, 2
    ctx->pc = 0x12d4acu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x12d4b0: 0x2884021  addu        $t0, $s4, $t0
    ctx->pc = 0x12d4b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
    // 0x12d4b4: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x12d4b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x12d4b8: 0x15000004  bnez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12D4B8u;
    {
        const bool branch_taken_0x12d4b8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d4b8) {
            ctx->pc = 0x12D4CCu;
            goto label_12d4cc;
        }
    }
    ctx->pc = 0x12D4C0u;
    // 0x12d4c0: 0x24b1ffff  addiu       $s1, $a1, -0x1
    ctx->pc = 0x12d4c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x12d4c4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12D4C4u;
    {
        const bool branch_taken_0x12d4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d4c4) {
            ctx->pc = 0x12D4E4u;
            goto label_12d4e4;
        }
    }
    ctx->pc = 0x12D4CCu;
label_12d4cc:
    // 0x12d4cc: 0x0  nop
    ctx->pc = 0x12d4ccu;
    // NOP
    // 0x12d4d0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x12d4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_12d4d4:
    // 0x12d4d4: 0x0  nop
    ctx->pc = 0x12d4d4u;
    // NOP
    // 0x12d4d8: 0x28a80004  slti        $t0, $a1, 0x4
    ctx->pc = 0x12d4d8u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x12d4dc: 0x1500fff3  bnez        $t0, . + 4 + (-0xD << 2)
    ctx->pc = 0x12D4DCu;
    {
        const bool branch_taken_0x12d4dc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d4dc) {
            ctx->pc = 0x12D4ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d4ac;
        }
    }
    ctx->pc = 0x12D4E4u;
label_12d4e4:
    // 0x12d4e4: 0x0  nop
    ctx->pc = 0x12d4e4u;
    // NOP
    // 0x12d4e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12d4e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d4ec: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x12D4ECu;
    {
        const bool branch_taken_0x12d4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d4ec) {
            ctx->pc = 0x12D53Cu;
            goto label_12d53c;
        }
    }
    ctx->pc = 0x12D4F4u;
label_12d4f4:
    // 0x12d4f4: 0x54080  sll         $t0, $a1, 2
    ctx->pc = 0x12d4f4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x12d4f8: 0x2885021  addu        $t2, $s4, $t0
    ctx->pc = 0x12d4f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
    // 0x12d4fc: 0x8d490000  lw          $t1, 0x0($t2)
    ctx->pc = 0x12d4fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x12d500: 0x1104021  addu        $t0, $t0, $s0
    ctx->pc = 0x12d500u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x12d504: 0xad090050  sw          $t1, 0x50($t0)
    ctx->pc = 0x12d504u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 80), GPR_U32(ctx, 9));
    // 0x12d508: 0x8d480000  lw          $t0, 0x0($t2)
    ctx->pc = 0x12d508u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x12d50c: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12D50Cu;
    {
        const bool branch_taken_0x12d50c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d50c) {
            ctx->pc = 0x12D520u;
            goto label_12d520;
        }
    }
    ctx->pc = 0x12D514u;
    // 0x12d514: 0x8e08002c  lw          $t0, 0x2C($s0)
    ctx->pc = 0x12d514u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x12d518: 0x1074021  addu        $t0, $t0, $a3
    ctx->pc = 0x12d518u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x12d51c: 0xae08002c  sw          $t0, 0x2C($s0)
    ctx->pc = 0x12d51cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 8));
label_12d520:
    // 0x12d520: 0x74083  sra         $t0, $a3, 2
    ctx->pc = 0x12d520u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 7), 2));
    // 0x12d524: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D524u;
    {
        const bool branch_taken_0x12d524 = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x12d524) {
            ctx->pc = 0x12D534u;
            goto label_12d534;
        }
    }
    ctx->pc = 0x12D52Cu;
    // 0x12d52c: 0x24e70003  addiu       $a3, $a3, 0x3
    ctx->pc = 0x12d52cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x12d530: 0x74083  sra         $t0, $a3, 2
    ctx->pc = 0x12d530u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 7), 2));
label_12d534:
    // 0x12d534: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x12d534u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d538: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x12d538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_12d53c:
    // 0x12d53c: 0x0  nop
    ctx->pc = 0x12d53cu;
    // NOP
    // 0x12d540: 0x26280001  addiu       $t0, $s1, 0x1
    ctx->pc = 0x12d540u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x12d544: 0xa8402a  slt         $t0, $a1, $t0
    ctx->pc = 0x12d544u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x12d548: 0x1500ffea  bnez        $t0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x12D548u;
    {
        const bool branch_taken_0x12d548 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d548) {
            ctx->pc = 0x12D4F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d4f4;
        }
    }
    ctx->pc = 0x12D550u;
    // 0x12d550: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x12d550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x12d554: 0x14a00002  bnez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x12D554u;
    {
        const bool branch_taken_0x12d554 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d554) {
            ctx->pc = 0x12D560u;
            goto label_12d560;
        }
    }
    ctx->pc = 0x12D55Cu;
    // 0x12d55c: 0xae07002c  sw          $a3, 0x2C($s0)
    ctx->pc = 0x12d55cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 7));
label_12d560:
    // 0x12d560: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x12d560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x12d564: 0x1445001a  bne         $v0, $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x12D564u;
    {
        const bool branch_taken_0x12d564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x12d564) {
            ctx->pc = 0x12D5D0u;
            goto label_12d5d0;
        }
    }
    ctx->pc = 0x12D56Cu;
    // 0x12d56c: 0xae1e0060  sw          $fp, 0x60($s0)
    ctx->pc = 0x12d56cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 30));
    // 0x12d570: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x12d570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12d574: 0xae050030  sw          $a1, 0x30($s0)
    ctx->pc = 0x12d574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 5));
    // 0x12d578: 0x6283c  dsll32      $a1, $a2, 0
    ctx->pc = 0x12d578u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 0));
    // 0x12d57c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x12d57cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x12d580: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x12d580u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x12d584: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12d584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12d588: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x12d588u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x12d58c: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x12d58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x12d590: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x12d590u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x12d594: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x12d594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x12d598: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x12d598u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x12d59c: 0x216b8  dsll        $v0, $v0, 26
    ctx->pc = 0x12d59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
    // 0x12d5a0: 0x451825  or          $v1, $v0, $a1
    ctx->pc = 0x12d5a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x12d5a4: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x12d5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x12d5a8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x12d5a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x12d5ac: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x12d5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x12d5b0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x12d5b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12d5b4: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x12d5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x12d5b8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x12d5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x12d5bc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12d5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12d5c0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x12d5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x12d5c4: 0xfe020038  sd          $v0, 0x38($s0)
    ctx->pc = 0x12d5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 2));
    // 0x12d5c8: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x12D5C8u;
    {
        const bool branch_taken_0x12d5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d5c8) {
            ctx->pc = 0x12D690u;
            goto label_12d690;
        }
    }
    ctx->pc = 0x12D5D0u;
label_12d5d0:
    // 0x12d5d0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x12d5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x12d5d4: 0x1445001a  bne         $v0, $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x12D5D4u;
    {
        const bool branch_taken_0x12d5d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x12d5d4) {
            ctx->pc = 0x12D640u;
            goto label_12d640;
        }
    }
    ctx->pc = 0x12D5DCu;
    // 0x12d5dc: 0xae1e0060  sw          $fp, 0x60($s0)
    ctx->pc = 0x12d5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 30));
    // 0x12d5e0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x12d5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12d5e4: 0xae050030  sw          $a1, 0x30($s0)
    ctx->pc = 0x12d5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 5));
    // 0x12d5e8: 0x6283c  dsll32      $a1, $a2, 0
    ctx->pc = 0x12d5e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 0));
    // 0x12d5ec: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x12d5ecu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x12d5f0: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x12d5f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x12d5f4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12d5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12d5f8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x12d5f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x12d5fc: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x12d5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x12d600: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x12d600u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x12d604: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x12d604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x12d608: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x12d608u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x12d60c: 0x216b8  dsll        $v0, $v0, 26
    ctx->pc = 0x12d60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
    // 0x12d610: 0x451825  or          $v1, $v0, $a1
    ctx->pc = 0x12d610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x12d614: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x12d614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x12d618: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x12d618u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x12d61c: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x12d61cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x12d620: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x12d620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12d624: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x12d624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x12d628: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x12d628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x12d62c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12d62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12d630: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x12d630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x12d634: 0xfe020038  sd          $v0, 0x38($s0)
    ctx->pc = 0x12d634u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 2));
    // 0x12d638: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x12D638u;
    {
        const bool branch_taken_0x12d638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d638) {
            ctx->pc = 0x12D690u;
            goto label_12d690;
        }
    }
    ctx->pc = 0x12D640u;
label_12d640:
    // 0x12d640: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x12d640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x12d644: 0x6283c  dsll32      $a1, $a2, 0
    ctx->pc = 0x12d644u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 0));
    // 0x12d648: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x12d648u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x12d64c: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x12d64cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x12d650: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12d650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12d654: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x12d654u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x12d658: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x12d658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x12d65c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x12d65cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x12d660: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x12d660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x12d664: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x12d664u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x12d668: 0x216b8  dsll        $v0, $v0, 26
    ctx->pc = 0x12d668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
    // 0x12d66c: 0x451825  or          $v1, $v0, $a1
    ctx->pc = 0x12d66cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x12d670: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x12d670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x12d674: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x12d674u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x12d678: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x12d678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x12d67c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x12d67cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12d680: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x12d680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12d684: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12d684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12d688: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x12d688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x12d68c: 0xfe020038  sd          $v0, 0x38($s0)
    ctx->pc = 0x12d68cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 2));
label_12d690:
    // 0x12d690: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x12d690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x12d694: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x12d694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x12d698: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x12d698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x12d69c: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x12d69cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x12d6a0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12D6A0u;
    {
        const bool branch_taken_0x12d6a0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x12d6a0) {
            ctx->pc = 0x12D6B4u;
            goto label_12d6b4;
        }
    }
    ctx->pc = 0x12D6A8u;
    // 0x12d6a8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x12D6A8u;
    {
        const bool branch_taken_0x12d6a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d6a8) {
            ctx->pc = 0x12D6B4u;
            goto label_12d6b4;
        }
    }
    ctx->pc = 0x12D6B0u;
    // 0x12d6b0: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x12d6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
label_12d6b4:
    // 0x12d6b4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D6B4u;
    {
        const bool branch_taken_0x12d6b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d6b4) {
            ctx->pc = 0x12D6D0u;
            goto label_12d6d0;
        }
    }
    ctx->pc = 0x12D6BCu;
    // 0x12d6bc: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x12d6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12d6c0: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x12d6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12d6c4: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x12d6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x12d6c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12d6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12d6cc: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x12d6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_12d6d0:
    // 0x12d6d0: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x12d6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x12d6d4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x12d6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x12d6d8: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x12D6D8u;
    SET_GPR_U32(ctx, 31, 0x12D6E0u);
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D6E0u; }
        if (ctx->pc != 0x12D6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D6E0u; }
        if (ctx->pc != 0x12D6E0u) { return; }
    }
    ctx->pc = 0x12D6E0u;
label_12d6e0:
    // 0x12d6e0: 0xa6130002  sh          $s3, 0x2($s0)
    ctx->pc = 0x12d6e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 19));
    // 0x12d6e4: 0xa6170004  sh          $s7, 0x4($s0)
    ctx->pc = 0x12d6e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 23));
    // 0x12d6e8: 0xa6120006  sh          $s2, 0x6($s0)
    ctx->pc = 0x12d6e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 18));
    // 0x12d6ec: 0xa6160000  sh          $s6, 0x0($s0)
    ctx->pc = 0x12d6ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 22));
    // 0x12d6f0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x12d6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x12d6f4: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x12d6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x12d6f8: 0x24020261  addiu       $v0, $zero, 0x261
    ctx->pc = 0x12d6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 609));
    // 0x12d6fc: 0xfe020040  sd          $v0, 0x40($s0)
    ctx->pc = 0x12d6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 2));
    // 0x12d700: 0x1a400022  blez        $s2, . + 4 + (0x22 << 2)
    ctx->pc = 0x12D700u;
    {
        const bool branch_taken_0x12d700 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x12d700) {
            ctx->pc = 0x12D78Cu;
            goto label_12d78c;
        }
    }
    ctx->pc = 0x12D708u;
    // 0x12d708: 0x1a20001a  blez        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x12D708u;
    {
        const bool branch_taken_0x12d708 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x12d708) {
            ctx->pc = 0x12D774u;
            goto label_12d774;
        }
    }
    ctx->pc = 0x12D710u;
    // 0x12d710: 0x2402ff88  addiu       $v0, $zero, -0x78
    ctx->pc = 0x12d710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967176));
    // 0x12d714: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x12d714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12d718: 0x24020368  addiu       $v0, $zero, 0x368
    ctx->pc = 0x12d718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 872));
    // 0x12d71c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12d71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12d720: 0xfe020040  sd          $v0, 0x40($s0)
    ctx->pc = 0x12d720u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 2));
    // 0x12d724: 0xdfa200e0  ld          $v0, 0xE0($sp)
    ctx->pc = 0x12d724u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x12d728: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x12D728u;
    {
        const bool branch_taken_0x12d728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d728) {
            ctx->pc = 0x12D78Cu;
            goto label_12d78c;
        }
    }
    ctx->pc = 0x12D730u;
    // 0x12d730: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x12d730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x12d734: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x12d734u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x12d738: 0x216fc  dsll32      $v0, $v0, 27
    ctx->pc = 0x12d738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 27));
    // 0x12d73c: 0x217be  dsrl32      $v0, $v0, 30
    ctx->pc = 0x12d73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 30));
    // 0x12d740: 0x21cf8  dsll        $v1, $v0, 19
    ctx->pc = 0x12d740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 19);
    // 0x12d744: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x12d744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x12d748: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x12d748u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x12d74c: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x12d74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
    // 0x12d750: 0x34420360  ori         $v0, $v0, 0x360
    ctx->pc = 0x12d750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)864);
    // 0x12d754: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x12d754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12d758: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x12d758u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12d75c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x12d75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x12d760: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12d760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12d764: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12d764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12d768: 0xfe020040  sd          $v0, 0x40($s0)
    ctx->pc = 0x12d768u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 2));
    // 0x12d76c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12D76Cu;
    {
        const bool branch_taken_0x12d76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d76c) {
            ctx->pc = 0x12D78Cu;
            goto label_12d78c;
        }
    }
    ctx->pc = 0x12D774u;
label_12d774:
    // 0x12d774: 0x24030260  addiu       $v1, $zero, 0x260
    ctx->pc = 0x12d774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x12d778: 0xfe030040  sd          $v1, 0x40($s0)
    ctx->pc = 0x12d778u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 3));
    // 0x12d77c: 0xdfa200e0  ld          $v0, 0xE0($sp)
    ctx->pc = 0x12d77cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x12d780: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x12D780u;
    {
        const bool branch_taken_0x12d780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d780) {
            ctx->pc = 0x12D78Cu;
            goto label_12d78c;
        }
    }
    ctx->pc = 0x12D788u;
    // 0x12d788: 0xfe030040  sd          $v1, 0x40($s0)
    ctx->pc = 0x12d788u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 3));
label_12d78c:
    // 0x12d78c: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x12d78cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x12d790: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12d790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d794: 0xc04b1c8  jal         func_12C720
    ctx->pc = 0x12D794u;
    SET_GPR_U32(ctx, 31, 0x12D79Cu);
    ctx->pc = 0x12C720u;
    if (runtime->hasFunction(0x12C720u)) {
        auto targetFn = runtime->lookupFunction(0x12C720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D79Cu; }
        if (ctx->pc != 0x12D79Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Add__15mgCTextureBlockFP10mgCTexture_0x12c720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D79Cu; }
        if (ctx->pc != 0x12D79Cu) { return; }
    }
    ctx->pc = 0x12D79Cu;
label_12d79c:
    // 0x12d79c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12d79cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d7a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12d7a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d7a4: 0xc04b330  jal         func_12CCC0
    ctx->pc = 0x12D7A4u;
    SET_GPR_U32(ctx, 31, 0x12D7ACu);
    ctx->pc = 0x12CCC0u;
    if (runtime->hasFunction(0x12CCC0u)) {
        auto targetFn = runtime->lookupFunction(0x12CCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D7ACu; }
        if (ctx->pc != 0x12D7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddHash__17mgCTextureManagerFP10mgCTexture_0x12ccc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D7ACu; }
        if (ctx->pc != 0x12D7ACu) { return; }
    }
    ctx->pc = 0x12D7ACu;
label_12d7ac:
    // 0x12d7ac: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x12d7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x12d7b0: 0x16c2001f  bne         $s6, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x12D7B0u;
    {
        const bool branch_taken_0x12d7b0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x12d7b0) {
            ctx->pc = 0x12D830u;
            goto label_12d830;
        }
    }
    ctx->pc = 0x12D7B8u;
    // 0x12d7b8: 0x8ea60004  lw          $a2, 0x4($s5)
    ctx->pc = 0x12d7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x12d7bc: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x12d7bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x12d7c0: 0x28410009  slti        $at, $v0, 0x9
    ctx->pc = 0x12d7c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x12d7c4: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x12D7C4u;
    {
        const bool branch_taken_0x12d7c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d7c4) {
            ctx->pc = 0x12D80Cu;
            goto label_12d80c;
        }
    }
    ctx->pc = 0x12D7CCu;
    // 0x12d7cc: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x12d7ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x12d7d0: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x12d7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x12d7d4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x12d7d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x12d7d8: 0xde050038  ld          $a1, 0x38($s0)
    ctx->pc = 0x12d7d8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x12d7dc: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x12d7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x12d7e0: 0x2217c  dsll32      $a0, $v0, 5
    ctx->pc = 0x12d7e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 5));
    // 0x12d7e4: 0x3c02fff8  lui         $v0, 0xFFF8
    ctx->pc = 0x12d7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65528 << 16));
    // 0x12d7e8: 0x3442001f  ori         $v0, $v0, 0x1F
    ctx->pc = 0x12d7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
    // 0x12d7ec: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x12d7ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12d7f0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x12d7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x12d7f4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x12d7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x12d7f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12d7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12d7fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12d7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12d800: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x12d800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x12d804: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x12d804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x12d808: 0xfe020038  sd          $v0, 0x38($s0)
    ctx->pc = 0x12d808u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 2));
label_12d80c:
    // 0x12d80c: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x12d80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x12d810: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x12d810u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x12d814: 0x96040038  lhu         $a0, 0x38($s0)
    ctx->pc = 0x12d814u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x12d818: 0x30c33fff  andi        $v1, $a2, 0x3FFF
    ctx->pc = 0x12d818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x12d81c: 0x2402c000  addiu       $v0, $zero, -0x4000
    ctx->pc = 0x12d81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x12d820: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x12d820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x12d824: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12d824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12d828: 0xa6020038  sh          $v0, 0x38($s0)
    ctx->pc = 0x12d828u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 56), (uint16_t)GPR_U32(ctx, 2));
    // 0x12d82c: 0xaea60004  sw          $a2, 0x4($s5)
    ctx->pc = 0x12d82cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 6));
label_12d830:
    // 0x12d830: 0xc05047c  jal         func_1411F0
    ctx->pc = 0x12D830u;
    SET_GPR_U32(ctx, 31, 0x12D838u);
    ctx->pc = 0x1411F0u;
    if (runtime->hasFunction(0x1411F0u)) {
        auto targetFn = runtime->lookupFunction(0x1411F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D838u; }
        if (ctx->pc != 0x12D838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetPerformanceMeterFlag__Fv_0x1411f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D838u; }
        if (ctx->pc != 0x12D838u) { return; }
    }
    ctx->pc = 0x12D838u;
label_12d838:
    // 0x12d838: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12D838u;
    {
        const bool branch_taken_0x12d838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d838) {
            ctx->pc = 0x12D85Cu;
            goto label_12d85c;
        }
    }
    ctx->pc = 0x12D840u;
    // 0x12d840: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x12d840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x12d844: 0x248424e0  addiu       $a0, $a0, 0x24E0
    ctx->pc = 0x12d844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9440));
    // 0x12d848: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x12d848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d84c: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x12d84cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x12d850: 0x8e070028  lw          $a3, 0x28($s0)
    ctx->pc = 0x12d850u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x12d854: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x12D854u;
    SET_GPR_U32(ctx, 31, 0x12D85Cu);
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D85Cu; }
        if (ctx->pc != 0x12D85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D85Cu; }
        if (ctx->pc != 0x12D85Cu) { return; }
    }
    ctx->pc = 0x12D85Cu;
label_12d85c:
    // 0x12d85c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12d85cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12d860:
    // 0x12d860: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x12d860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d864: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x12d864u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12d868: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x12d868u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12d86c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x12d86cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12d870: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x12d870u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12d874: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x12d874u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12d878: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12d878u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12d87c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12d87cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12d880: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12d880u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12d884: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12d884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d888: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x12d888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x12d88c: 0x3e00008  jr          $ra
    ctx->pc = 0x12D88Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12D894u;
}
