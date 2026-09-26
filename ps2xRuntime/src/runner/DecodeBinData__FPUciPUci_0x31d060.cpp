#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DecodeBinData__FPUciPUci
// Address: 0x31d060 - 0x31d234
void DecodeBinData__FPUciPUci_0x31d060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DecodeBinData__FPUciPUci_0x31d060");
#endif

    switch (ctx->pc) {
        case 0x31d0c0u: goto label_31d0c0;
        case 0x31d15cu: goto label_31d15c;
        case 0x31d164u: goto label_31d164;
        case 0x31d1ccu: goto label_31d1cc;
        case 0x31d1ecu: goto label_31d1ec;
        default: break;
    }

    ctx->pc = 0x31d060u;

    // 0x31d060: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x31d060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x31d064: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x31d064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x31d068: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x31d068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x31d06c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x31d06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x31d070: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x31d070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x31d074: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31d074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x31d078: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31d078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31d07c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31d07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31d080: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31d080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31d084: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x31d084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x31d088: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x31d088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x31d08c: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x31d08cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x31d090: 0xafa700b0  sw          $a3, 0xB0($sp)
    ctx->pc = 0x31d090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 7));
    // 0x31d094: 0x3c02014a  lui         $v0, 0x14A
    ctx->pc = 0x31d094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)330 << 16));
    // 0x31d098: 0x344276e0  ori         $v0, $v0, 0x76E0
    ctx->pc = 0x31d098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30432);
    // 0x31d09c: 0xaf828688  sw          $v0, -0x7978($gp)
    ctx->pc = 0x31d09cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936200), GPR_U32(ctx, 2));
    // 0x31d0a0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x31d0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31d0a4: 0x2443fffe  addiu       $v1, $v0, -0x2
    ctx->pc = 0x31d0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x31d0a8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x31d0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31d0ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31d0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31d0b0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x31d0b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31d0b4: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x31d0b4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31d0b8: 0xc0c73a0  jal         func_31CE80
    ctx->pc = 0x31D0B8u;
    SET_GPR_U32(ctx, 31, 0x31D0C0u);
    ctx->pc = 0x31CE80u;
    if (runtime->hasFunction(0x31CE80u)) {
        auto targetFn = runtime->lookupFunction(0x31CE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D0C0u; }
        if (ctx->pc != 0x31D0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        random__Fv_0x31ce80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D0C0u; }
        if (ctx->pc != 0x31D0C0u) { return; }
    }
    ctx->pc = 0x31D0C0u;
label_31d0c0:
    // 0x31d0c0: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x31d0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31d0c4: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x31d0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x31d0c8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x31d0c8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x31d0cc: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x31D0CCu;
    {
        const bool branch_taken_0x31d0cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31d0cc) {
            ctx->pc = 0x31D0D8u;
            goto label_31d0d8;
        }
    }
    ctx->pc = 0x31D0D4u;
    // 0x31d0d4: 0x1cd  break       0, 7
    ctx->pc = 0x31d0d4u;
    runtime->handleBreak(rdram, ctx);
label_31d0d8:
    // 0x31d0d8: 0x9810  mfhi        $s3
    ctx->pc = 0x31d0d8u;
    SET_GPR_U64(ctx, 19, ctx->hi);
    // 0x31d0dc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x31d0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31d0e0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x31d0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x31d0e4: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x31d0e4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31d0e8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x31d0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31d0ec: 0x2443fffe  addiu       $v1, $v0, -0x2
    ctx->pc = 0x31d0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x31d0f0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x31d0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31d0f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31d0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31d0f8: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x31d0f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x31d0fc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x31d0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31d100: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x31d100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x31d104: 0xa0540000  sb          $s4, 0x0($v0)
    ctx->pc = 0x31d104u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 20));
    // 0x31d108: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x31d108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31d10c: 0x2443fffe  addiu       $v1, $v0, -0x2
    ctx->pc = 0x31d10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x31d110: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x31d110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31d114: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31d114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31d118: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x31d118u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31d11c: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x31d11cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31d120: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x31d120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31d124: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x31d124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x31d128: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x31d128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31d12c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31d12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31d130: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x31d130u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31d134: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31d134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31d138: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x31d138u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x31d13c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x31d13cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x31d140: 0x3c020588  lui         $v0, 0x588
    ctx->pc = 0x31d140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1416 << 16));
    // 0x31d144: 0x34428f27  ori         $v0, $v0, 0x8F27
    ctx->pc = 0x31d144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36647);
    // 0x31d148: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x31d148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x31d14c: 0xaf828688  sw          $v0, -0x7978($gp)
    ctx->pc = 0x31d14cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936200), GPR_U32(ctx, 2));
    // 0x31d150: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x31d150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d154: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x31D154u;
    {
        const bool branch_taken_0x31d154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d154) {
            ctx->pc = 0x31D1A4u;
            goto label_31d1a4;
        }
    }
    ctx->pc = 0x31D15Cu;
label_31d15c:
    // 0x31d15c: 0xc0c73a0  jal         func_31CE80
    ctx->pc = 0x31D15Cu;
    SET_GPR_U32(ctx, 31, 0x31D164u);
    ctx->pc = 0x31CE80u;
    if (runtime->hasFunction(0x31CE80u)) {
        auto targetFn = runtime->lookupFunction(0x31CE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D164u; }
        if (ctx->pc != 0x31D164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        random__Fv_0x31ce80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D164u; }
        if (ctx->pc != 0x31D164u) { return; }
    }
    ctx->pc = 0x31D164u;
label_31d164:
    // 0x31d164: 0x21602  srl         $v0, $v0, 24
    ctx->pc = 0x31d164u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x31d168: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31d168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31d16c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x31d16cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31d170: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x31d170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31d174: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x31d174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x31d178: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x31d178u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31d17c: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x31d17cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x31d180: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x31d180u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x31d184: 0x11163c  dsll32      $v0, $s1, 24
    ctx->pc = 0x31d184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 24));
    // 0x31d188: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x31d188u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x31d18c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x31d18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x31d190: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x31d190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31d194: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x31d194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31d198: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x31d198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x31d19c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x31d19cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x31d1a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x31d1a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_31d1a4:
    // 0x31d1a4: 0x0  nop
    ctx->pc = 0x31d1a4u;
    // NOP
    // 0x31d1a8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x31d1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31d1ac: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x31d1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x31d1b0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x31d1b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x31d1b4: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x31D1B4u;
    {
        const bool branch_taken_0x31d1b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31d1b4) {
            ctx->pc = 0x31D15Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31d15c;
        }
    }
    ctx->pc = 0x31D1BCu;
    // 0x31d1bc: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x31d1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x31d1c0: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x31d1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x31d1c4: 0xc0c7370  jal         func_31CDC0
    ctx->pc = 0x31D1C4u;
    SET_GPR_U32(ctx, 31, 0x31D1CCu);
    ctx->pc = 0x31CDC0u;
    if (runtime->hasFunction(0x31CDC0u)) {
        auto targetFn = runtime->lookupFunction(0x31CDC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D1CCu; }
        if (ctx->pc != 0x31D1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCRC__FPUci_0x31cdc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D1CCu; }
        if (ctx->pc != 0x31D1CCu) { return; }
    }
    ctx->pc = 0x31D1CCu;
label_31d1cc:
    // 0x31d1cc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x31d1ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d1d0: 0x2559026  xor         $s2, $s2, $s5
    ctx->pc = 0x31d1d0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 21));
    // 0x31d1d4: 0x3a5262d3  xori        $s2, $s2, 0x62D3
    ctx->pc = 0x31d1d4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)25299);
    // 0x31d1d8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x31d1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31d1dc: 0x2445fffe  addiu       $a1, $v0, -0x2
    ctx->pc = 0x31d1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x31d1e0: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x31d1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31d1e4: 0xc0c7370  jal         func_31CDC0
    ctx->pc = 0x31D1E4u;
    SET_GPR_U32(ctx, 31, 0x31D1ECu);
    ctx->pc = 0x31CDC0u;
    if (runtime->hasFunction(0x31CDC0u)) {
        auto targetFn = runtime->lookupFunction(0x31CDC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D1ECu; }
        if (ctx->pc != 0x31D1ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCRC__FPUci_0x31cdc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D1ECu; }
        if (ctx->pc != 0x31D1ECu) { return; }
    }
    ctx->pc = 0x31D1ECu;
label_31d1ec:
    // 0x31d1ec: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x31d1ecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d1f0: 0x12560004  beq         $s2, $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x31D1F0u;
    {
        const bool branch_taken_0x31d1f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 22));
        if (branch_taken_0x31d1f0) {
            ctx->pc = 0x31D204u;
            goto label_31d204;
        }
    }
    ctx->pc = 0x31D1F8u;
    // 0x31d1f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31d1f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d1fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31D1FCu;
    {
        const bool branch_taken_0x31d1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d1fc) {
            ctx->pc = 0x31D208u;
            goto label_31d208;
        }
    }
    ctx->pc = 0x31D204u;
label_31d204:
    // 0x31d204: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31d204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31d208:
    // 0x31d208: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x31d208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31d20c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x31d20cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31d210: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x31d210u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31d214: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x31d214u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31d218: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31d218u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31d21c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31d21cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31d220: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31d220u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31d224: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31d224u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31d228: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x31d228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x31d22c: 0x3e00008  jr          $ra
    ctx->pc = 0x31D22Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31D234u;
}
