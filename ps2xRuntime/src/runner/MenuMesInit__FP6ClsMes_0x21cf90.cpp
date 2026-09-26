#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuMesInit__FP6ClsMes
// Address: 0x21cf90 - 0x21d2cc
void MenuMesInit__FP6ClsMes_0x21cf90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuMesInit__FP6ClsMes_0x21cf90");
#endif

    switch (ctx->pc) {
        case 0x21cfccu: goto label_21cfcc;
        case 0x21d01cu: goto label_21d01c;
        case 0x21d040u: goto label_21d040;
        case 0x21d074u: goto label_21d074;
        case 0x21d088u: goto label_21d088;
        case 0x21d0a4u: goto label_21d0a4;
        case 0x21d0e0u: goto label_21d0e0;
        case 0x21d1c4u: goto label_21d1c4;
        case 0x21d28cu: goto label_21d28c;
        default: break;
    }

    ctx->pc = 0x21cf90u;

    // 0x21cf90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21cf90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21cf94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x21cf94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x21cf98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21cf98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21cf9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21cf9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21cfa0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21cfa0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cfa4: 0x124000c3  beqz        $s2, . + 4 + (0xC3 << 2)
    ctx->pc = 0x21CFA4u;
    {
        const bool branch_taken_0x21cfa4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CFA4u;
            // 0x21cfa8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cfa4) {
            ctx->pc = 0x21D2B4u;
            goto label_21d2b4;
        }
    }
    ctx->pc = 0x21CFACu;
    // 0x21cfac: 0xae4000b4  sw          $zero, 0xB4($s2)
    ctx->pc = 0x21cfacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 0));
    // 0x21cfb0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x21cfb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cfb4: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x21cfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x21cfb8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21cfb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cfbc: 0xae4000d8  sw          $zero, 0xD8($s2)
    ctx->pc = 0x21cfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 0));
    // 0x21cfc0: 0xae4000dc  sw          $zero, 0xDC($s2)
    ctx->pc = 0x21cfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 0));
    // 0x21cfc4: 0xae4000e0  sw          $zero, 0xE0($s2)
    ctx->pc = 0x21cfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 0));
    // 0x21cfc8: 0xae4000e4  sw          $zero, 0xE4($s2)
    ctx->pc = 0x21cfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 0));
label_21cfcc:
    // 0x21cfcc: 0x2442821  addu        $a1, $s2, $a0
    ctx->pc = 0x21cfccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x21cfd0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x21cfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x21cfd4: 0xaca000e8  sw          $zero, 0xE8($a1)
    ctx->pc = 0x21cfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 232), GPR_U32(ctx, 0));
    // 0x21cfd8: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x21cfd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x21cfdc: 0xaca000ec  sw          $zero, 0xEC($a1)
    ctx->pc = 0x21cfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 236), GPR_U32(ctx, 0));
    // 0x21cfe0: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x21cfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x21cfe4: 0xaca000f0  sw          $zero, 0xF0($a1)
    ctx->pc = 0x21cfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 240), GPR_U32(ctx, 0));
    // 0x21cfe8: 0xaca000f4  sw          $zero, 0xF4($a1)
    ctx->pc = 0x21cfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 244), GPR_U32(ctx, 0));
    // 0x21cfec: 0xaca000f8  sw          $zero, 0xF8($a1)
    ctx->pc = 0x21cfecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 248), GPR_U32(ctx, 0));
    // 0x21cff0: 0xaca000fc  sw          $zero, 0xFC($a1)
    ctx->pc = 0x21cff0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 252), GPR_U32(ctx, 0));
    // 0x21cff4: 0xaca00100  sw          $zero, 0x100($a1)
    ctx->pc = 0x21cff4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 256), GPR_U32(ctx, 0));
    // 0x21cff8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x21CFF8u;
    {
        const bool branch_taken_0x21cff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CFF8u;
            // 0x21cffc: 0xaca00104  sw          $zero, 0x104($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 260), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cff8) {
            ctx->pc = 0x21CFCCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21cfcc;
        }
    }
    ctx->pc = 0x21D000u;
    // 0x21d000: 0xae400128  sw          $zero, 0x128($s2)
    ctx->pc = 0x21d000u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 296), GPR_U32(ctx, 0));
    // 0x21d004: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21d004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21d008: 0xae40012c  sw          $zero, 0x12C($s2)
    ctx->pc = 0x21d008u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 300), GPR_U32(ctx, 0));
    // 0x21d00c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21d00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d010: 0xae400188  sw          $zero, 0x188($s2)
    ctx->pc = 0x21d010u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 392), GPR_U32(ctx, 0));
    // 0x21d014: 0xc0547dc  jal         func_151F70
    ctx->pc = 0x21D014u;
    SET_GPR_U32(ctx, 31, 0x21D01Cu);
    ctx->pc = 0x21D018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D014u;
            // 0x21d018: 0xae42018c  sw          $v0, 0x18C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151F70u;
    if (runtime->hasFunction(0x151F70u)) {
        auto targetFn = runtime->lookupFunction(0x151F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D01Cu; }
        if (ctx->pc != 0x21D01Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawSpeedDef__6ClsMesFv_0x151f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D01Cu; }
        if (ctx->pc != 0x21D01Cu) { return; }
    }
    ctx->pc = 0x21D01Cu;
label_21d01c:
    // 0x21d01c: 0xe64001b8  swc1        $f0, 0x1B8($s2)
    ctx->pc = 0x21d01cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 440), bits); }
    // 0x21d020: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21d020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d024: 0xae4001c0  sw          $zero, 0x1C0($s2)
    ctx->pc = 0x21d024u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 448), GPR_U32(ctx, 0));
    // 0x21d028: 0xae4001cc  sw          $zero, 0x1CC($s2)
    ctx->pc = 0x21d028u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 460), GPR_U32(ctx, 0));
    // 0x21d02c: 0xae4001d0  sw          $zero, 0x1D0($s2)
    ctx->pc = 0x21d02cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 464), GPR_U32(ctx, 0));
    // 0x21d030: 0xae4001d4  sw          $zero, 0x1D4($s2)
    ctx->pc = 0x21d030u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 468), GPR_U32(ctx, 0));
    // 0x21d034: 0xae4001d8  sw          $zero, 0x1D8($s2)
    ctx->pc = 0x21d034u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 472), GPR_U32(ctx, 0));
    // 0x21d038: 0xc0557f0  jal         func_155FC0
    ctx->pc = 0x21D038u;
    SET_GPR_U32(ctx, 31, 0x21D040u);
    ctx->pc = 0x21D03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D038u;
            // 0x21d03c: 0xae4001dc  sw          $zero, 0x1DC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 476), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155FC0u;
    if (runtime->hasFunction(0x155FC0u)) {
        auto targetFn = runtime->lookupFunction(0x155FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D040u; }
        if (ctx->pc != 0x21D040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMesWinTbl__6ClsMesFv_0x155fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D040u; }
        if (ctx->pc != 0x21D040u) { return; }
    }
    ctx->pc = 0x21D040u;
label_21d040:
    // 0x21d040: 0x8e4517d0  lw          $a1, 0x17D0($s2)
    ctx->pc = 0x21d040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6096)));
    // 0x21d044: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x21d044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x21d048: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x21d048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21d04c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x21d04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x21d050: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21d050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d054: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21d054u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d058: 0xae4517d4  sw          $a1, 0x17D4($s2)
    ctx->pc = 0x21d058u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6100), GPR_U32(ctx, 5));
    // 0x21d05c: 0xae4017d8  sw          $zero, 0x17D8($s2)
    ctx->pc = 0x21d05cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6104), GPR_U32(ctx, 0));
    // 0x21d060: 0xae4017dc  sw          $zero, 0x17DC($s2)
    ctx->pc = 0x21d060u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6108), GPR_U32(ctx, 0));
    // 0x21d064: 0xae4417e0  sw          $a0, 0x17E0($s2)
    ctx->pc = 0x21d064u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6112), GPR_U32(ctx, 4));
    // 0x21d068: 0xae4317e4  sw          $v1, 0x17E4($s2)
    ctx->pc = 0x21d068u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6116), GPR_U32(ctx, 3));
    // 0x21d06c: 0xae4017e8  sw          $zero, 0x17E8($s2)
    ctx->pc = 0x21d06cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6120), GPR_U32(ctx, 0));
    // 0x21d070: 0xa2421800  sb          $v0, 0x1800($s2)
    ctx->pc = 0x21d070u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 6144), (uint8_t)GPR_U32(ctx, 2));
label_21d074:
    // 0x21d074: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x21d074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x21d078: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21d078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d07c: 0x24441801  addiu       $a0, $v0, 0x1801
    ctx->pc = 0x21d07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
    // 0x21d080: 0xc049c86  jal         func_127218
    ctx->pc = 0x21D080u;
    SET_GPR_U32(ctx, 31, 0x21D088u);
    ctx->pc = 0x21D084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D080u;
            // 0x21d084: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D088u; }
        if (ctx->pc != 0x21D088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D088u; }
        if (ctx->pc != 0x21D088u) { return; }
    }
    ctx->pc = 0x21D088u;
label_21d088:
    // 0x21d088: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21d088u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21d08c: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x21d08cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x21d090: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21D090u;
    {
        const bool branch_taken_0x21d090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D090u;
            // 0x21d094: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d090) {
            ctx->pc = 0x21D074u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21d074;
        }
    }
    ctx->pc = 0x21D098u;
    // 0x21d098: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21d098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d09c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21d09cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d0a0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x21d0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_21d0a4:
    // 0x21d0a4: 0x2453021  addu        $a2, $s2, $a1
    ctx->pc = 0x21d0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x21d0a8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x21d0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x21d0ac: 0xacc31a04  sw          $v1, 0x1A04($a2)
    ctx->pc = 0x21d0acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6660), GPR_U32(ctx, 3));
    // 0x21d0b0: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x21d0b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x21d0b4: 0xacc31a08  sw          $v1, 0x1A08($a2)
    ctx->pc = 0x21d0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6664), GPR_U32(ctx, 3));
    // 0x21d0b8: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x21d0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x21d0bc: 0xacc31a0c  sw          $v1, 0x1A0C($a2)
    ctx->pc = 0x21d0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6668), GPR_U32(ctx, 3));
    // 0x21d0c0: 0xacc31a10  sw          $v1, 0x1A10($a2)
    ctx->pc = 0x21d0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6672), GPR_U32(ctx, 3));
    // 0x21d0c4: 0xacc31a14  sw          $v1, 0x1A14($a2)
    ctx->pc = 0x21d0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6676), GPR_U32(ctx, 3));
    // 0x21d0c8: 0xacc31a18  sw          $v1, 0x1A18($a2)
    ctx->pc = 0x21d0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6680), GPR_U32(ctx, 3));
    // 0x21d0cc: 0xacc31a1c  sw          $v1, 0x1A1C($a2)
    ctx->pc = 0x21d0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6684), GPR_U32(ctx, 3));
    // 0x21d0d0: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x21D0D0u;
    {
        const bool branch_taken_0x21d0d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D0D0u;
            // 0x21d0d4: 0xacc31a20  sw          $v1, 0x1A20($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 6688), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d0d0) {
            ctx->pc = 0x21D0A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21d0a4;
        }
    }
    ctx->pc = 0x21D0D8u;
    // 0x21d0d8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x21d0d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d0dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21d0dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d0e0:
    // 0x21d0e0: 0x2442821  addu        $a1, $s2, $a0
    ctx->pc = 0x21d0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x21d0e4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x21d0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x21d0e8: 0xaca01a44  sw          $zero, 0x1A44($a1)
    ctx->pc = 0x21d0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6724), GPR_U32(ctx, 0));
    // 0x21d0ec: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x21d0ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x21d0f0: 0xaca01a84  sw          $zero, 0x1A84($a1)
    ctx->pc = 0x21d0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6788), GPR_U32(ctx, 0));
    // 0x21d0f4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x21d0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x21d0f8: 0xaca01a48  sw          $zero, 0x1A48($a1)
    ctx->pc = 0x21d0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6728), GPR_U32(ctx, 0));
    // 0x21d0fc: 0xaca01a88  sw          $zero, 0x1A88($a1)
    ctx->pc = 0x21d0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6792), GPR_U32(ctx, 0));
    // 0x21d100: 0xaca01a4c  sw          $zero, 0x1A4C($a1)
    ctx->pc = 0x21d100u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6732), GPR_U32(ctx, 0));
    // 0x21d104: 0xaca01a8c  sw          $zero, 0x1A8C($a1)
    ctx->pc = 0x21d104u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6796), GPR_U32(ctx, 0));
    // 0x21d108: 0xaca01a50  sw          $zero, 0x1A50($a1)
    ctx->pc = 0x21d108u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6736), GPR_U32(ctx, 0));
    // 0x21d10c: 0xaca01a90  sw          $zero, 0x1A90($a1)
    ctx->pc = 0x21d10cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6800), GPR_U32(ctx, 0));
    // 0x21d110: 0xaca01a54  sw          $zero, 0x1A54($a1)
    ctx->pc = 0x21d110u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6740), GPR_U32(ctx, 0));
    // 0x21d114: 0xaca01a94  sw          $zero, 0x1A94($a1)
    ctx->pc = 0x21d114u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6804), GPR_U32(ctx, 0));
    // 0x21d118: 0xaca01a58  sw          $zero, 0x1A58($a1)
    ctx->pc = 0x21d118u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6744), GPR_U32(ctx, 0));
    // 0x21d11c: 0xaca01a98  sw          $zero, 0x1A98($a1)
    ctx->pc = 0x21d11cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6808), GPR_U32(ctx, 0));
    // 0x21d120: 0xaca01a5c  sw          $zero, 0x1A5C($a1)
    ctx->pc = 0x21d120u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6748), GPR_U32(ctx, 0));
    // 0x21d124: 0xaca01a9c  sw          $zero, 0x1A9C($a1)
    ctx->pc = 0x21d124u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6812), GPR_U32(ctx, 0));
    // 0x21d128: 0xaca01a60  sw          $zero, 0x1A60($a1)
    ctx->pc = 0x21d128u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6752), GPR_U32(ctx, 0));
    // 0x21d12c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x21D12Cu;
    {
        const bool branch_taken_0x21d12c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D12Cu;
            // 0x21d130: 0xaca01aa0  sw          $zero, 0x1AA0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 6816), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d12c) {
            ctx->pc = 0x21D0E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21d0e0;
        }
    }
    ctx->pc = 0x21D134u;
    // 0x21d134: 0xae401ac4  sw          $zero, 0x1AC4($s2)
    ctx->pc = 0x21d134u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6852), GPR_U32(ctx, 0));
    // 0x21d138: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21d138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21d13c: 0xae401ac8  sw          $zero, 0x1AC8($s2)
    ctx->pc = 0x21d13cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6856), GPR_U32(ctx, 0));
    // 0x21d140: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x21d140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21d144: 0xae421acc  sw          $v0, 0x1ACC($s2)
    ctx->pc = 0x21d144u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6860), GPR_U32(ctx, 2));
    // 0x21d148: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x21d148u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d14c: 0xae401ad0  sw          $zero, 0x1AD0($s2)
    ctx->pc = 0x21d14cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6864), GPR_U32(ctx, 0));
    // 0x21d150: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21d150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d154: 0xae401ad4  sw          $zero, 0x1AD4($s2)
    ctx->pc = 0x21d154u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6868), GPR_U32(ctx, 0));
    // 0x21d158: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21d158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d15c: 0xae401ad8  sw          $zero, 0x1AD8($s2)
    ctx->pc = 0x21d15cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6872), GPR_U32(ctx, 0));
    // 0x21d160: 0xae461adc  sw          $a2, 0x1ADC($s2)
    ctx->pc = 0x21d160u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6876), GPR_U32(ctx, 6));
    // 0x21d164: 0xae461ae0  sw          $a2, 0x1AE0($s2)
    ctx->pc = 0x21d164u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6880), GPR_U32(ctx, 6));
    // 0x21d168: 0xae461ae4  sw          $a2, 0x1AE4($s2)
    ctx->pc = 0x21d168u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6884), GPR_U32(ctx, 6));
    // 0x21d16c: 0xae401ae8  sw          $zero, 0x1AE8($s2)
    ctx->pc = 0x21d16cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6888), GPR_U32(ctx, 0));
    // 0x21d170: 0xae401aec  sw          $zero, 0x1AEC($s2)
    ctx->pc = 0x21d170u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6892), GPR_U32(ctx, 0));
    // 0x21d174: 0xae401af0  sw          $zero, 0x1AF0($s2)
    ctx->pc = 0x21d174u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6896), GPR_U32(ctx, 0));
    // 0x21d178: 0xae401af4  sw          $zero, 0x1AF4($s2)
    ctx->pc = 0x21d178u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6900), GPR_U32(ctx, 0));
    // 0x21d17c: 0xae401af8  sw          $zero, 0x1AF8($s2)
    ctx->pc = 0x21d17cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6904), GPR_U32(ctx, 0));
    // 0x21d180: 0xae401afc  sw          $zero, 0x1AFC($s2)
    ctx->pc = 0x21d180u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6908), GPR_U32(ctx, 0));
    // 0x21d184: 0xae401b00  sw          $zero, 0x1B00($s2)
    ctx->pc = 0x21d184u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6912), GPR_U32(ctx, 0));
    // 0x21d188: 0xae461b04  sw          $a2, 0x1B04($s2)
    ctx->pc = 0x21d188u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6916), GPR_U32(ctx, 6));
    // 0x21d18c: 0xae461b08  sw          $a2, 0x1B08($s2)
    ctx->pc = 0x21d18cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6920), GPR_U32(ctx, 6));
    // 0x21d190: 0xae461b0c  sw          $a2, 0x1B0C($s2)
    ctx->pc = 0x21d190u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6924), GPR_U32(ctx, 6));
    // 0x21d194: 0xae461b10  sw          $a2, 0x1B10($s2)
    ctx->pc = 0x21d194u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6928), GPR_U32(ctx, 6));
    // 0x21d198: 0xae401b14  sw          $zero, 0x1B14($s2)
    ctx->pc = 0x21d198u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6932), GPR_U32(ctx, 0));
    // 0x21d19c: 0xae401b18  sw          $zero, 0x1B18($s2)
    ctx->pc = 0x21d19cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6936), GPR_U32(ctx, 0));
    // 0x21d1a0: 0xae401b1c  sw          $zero, 0x1B1C($s2)
    ctx->pc = 0x21d1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6940), GPR_U32(ctx, 0));
    // 0x21d1a4: 0xae401b20  sw          $zero, 0x1B20($s2)
    ctx->pc = 0x21d1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6944), GPR_U32(ctx, 0));
    // 0x21d1a8: 0xae401b24  sw          $zero, 0x1B24($s2)
    ctx->pc = 0x21d1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6948), GPR_U32(ctx, 0));
    // 0x21d1ac: 0xae401b28  sw          $zero, 0x1B28($s2)
    ctx->pc = 0x21d1acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6952), GPR_U32(ctx, 0));
    // 0x21d1b0: 0xae401b30  sw          $zero, 0x1B30($s2)
    ctx->pc = 0x21d1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6960), GPR_U32(ctx, 0));
    // 0x21d1b4: 0xae401b34  sw          $zero, 0x1B34($s2)
    ctx->pc = 0x21d1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6964), GPR_U32(ctx, 0));
    // 0x21d1b8: 0xae401b3c  sw          $zero, 0x1B3C($s2)
    ctx->pc = 0x21d1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6972), GPR_U32(ctx, 0));
    // 0x21d1bc: 0xae401b38  sw          $zero, 0x1B38($s2)
    ctx->pc = 0x21d1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6968), GPR_U32(ctx, 0));
    // 0x21d1c0: 0xae401b40  sw          $zero, 0x1B40($s2)
    ctx->pc = 0x21d1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6976), GPR_U32(ctx, 0));
label_21d1c4:
    // 0x21d1c4: 0x2443821  addu        $a3, $s2, $a0
    ctx->pc = 0x21d1c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x21d1c8: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x21d1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x21d1cc: 0xace01b44  sw          $zero, 0x1B44($a3)
    ctx->pc = 0x21d1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6980), GPR_U32(ctx, 0));
    // 0x21d1d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21d1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21d1d4: 0xac401b94  sw          $zero, 0x1B94($v0)
    ctx->pc = 0x21d1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7060), GPR_U32(ctx, 0));
    // 0x21d1d8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x21d1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x21d1dc: 0xac401b98  sw          $zero, 0x1B98($v0)
    ctx->pc = 0x21d1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7064), GPR_U32(ctx, 0));
    // 0x21d1e0: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x21d1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x21d1e4: 0xace01c34  sw          $zero, 0x1C34($a3)
    ctx->pc = 0x21d1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7220), GPR_U32(ctx, 0));
    // 0x21d1e8: 0x28620014  slti        $v0, $v1, 0x14
    ctx->pc = 0x21d1e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x21d1ec: 0xace61c84  sw          $a2, 0x1C84($a3)
    ctx->pc = 0x21d1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7300), GPR_U32(ctx, 6));
    // 0x21d1f0: 0xace01cd4  sw          $zero, 0x1CD4($a3)
    ctx->pc = 0x21d1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7380), GPR_U32(ctx, 0));
    // 0x21d1f4: 0xace01d24  sw          $zero, 0x1D24($a3)
    ctx->pc = 0x21d1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7460), GPR_U32(ctx, 0));
    // 0x21d1f8: 0xace01d74  sw          $zero, 0x1D74($a3)
    ctx->pc = 0x21d1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7540), GPR_U32(ctx, 0));
    // 0x21d1fc: 0xace01dc4  sw          $zero, 0x1DC4($a3)
    ctx->pc = 0x21d1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7620), GPR_U32(ctx, 0));
    // 0x21d200: 0xace01e14  sw          $zero, 0x1E14($a3)
    ctx->pc = 0x21d200u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7700), GPR_U32(ctx, 0));
    // 0x21d204: 0xace61e64  sw          $a2, 0x1E64($a3)
    ctx->pc = 0x21d204u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7780), GPR_U32(ctx, 6));
    // 0x21d208: 0xace01eb4  sw          $zero, 0x1EB4($a3)
    ctx->pc = 0x21d208u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7860), GPR_U32(ctx, 0));
    // 0x21d20c: 0xace01f04  sw          $zero, 0x1F04($a3)
    ctx->pc = 0x21d20cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7940), GPR_U32(ctx, 0));
    // 0x21d210: 0xace01f54  sw          $zero, 0x1F54($a3)
    ctx->pc = 0x21d210u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8020), GPR_U32(ctx, 0));
    // 0x21d214: 0xace61fa4  sw          $a2, 0x1FA4($a3)
    ctx->pc = 0x21d214u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8100), GPR_U32(ctx, 6));
    // 0x21d218: 0xace61ff4  sw          $a2, 0x1FF4($a3)
    ctx->pc = 0x21d218u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8180), GPR_U32(ctx, 6));
    // 0x21d21c: 0xace02044  sw          $zero, 0x2044($a3)
    ctx->pc = 0x21d21cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8260), GPR_U32(ctx, 0));
    // 0x21d220: 0xace02094  sw          $zero, 0x2094($a3)
    ctx->pc = 0x21d220u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8340), GPR_U32(ctx, 0));
    // 0x21d224: 0xace020e4  sw          $zero, 0x20E4($a3)
    ctx->pc = 0x21d224u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8420), GPR_U32(ctx, 0));
    // 0x21d228: 0xace02134  sw          $zero, 0x2134($a3)
    ctx->pc = 0x21d228u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8500), GPR_U32(ctx, 0));
    // 0x21d22c: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x21D22Cu;
    {
        const bool branch_taken_0x21d22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D22Cu;
            // 0x21d230: 0xace02184  sw          $zero, 0x2184($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8580), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d22c) {
            ctx->pc = 0x21D1C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21d1c4;
        }
    }
    ctx->pc = 0x21D234u;
    // 0x21d234: 0xae460190  sw          $a2, 0x190($s2)
    ctx->pc = 0x21d234u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 400), GPR_U32(ctx, 6));
    // 0x21d238: 0x2402fff6  addiu       $v0, $zero, -0xA
    ctx->pc = 0x21d238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x21d23c: 0xae460194  sw          $a2, 0x194($s2)
    ctx->pc = 0x21d23cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 6));
    // 0x21d240: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x21d240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21d244: 0xae420198  sw          $v0, 0x198($s2)
    ctx->pc = 0x21d244u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 408), GPR_U32(ctx, 2));
    // 0x21d248: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x21d248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x21d24c: 0xae42019c  sw          $v0, 0x19C($s2)
    ctx->pc = 0x21d24cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 412), GPR_U32(ctx, 2));
    // 0x21d250: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21d250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d254: 0xae4601a0  sw          $a2, 0x1A0($s2)
    ctx->pc = 0x21d254u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 416), GPR_U32(ctx, 6));
    // 0x21d258: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x21d258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x21d25c: 0xae4601a4  sw          $a2, 0x1A4($s2)
    ctx->pc = 0x21d25cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 420), GPR_U32(ctx, 6));
    // 0x21d260: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x21d260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21d264: 0xae46014c  sw          $a2, 0x14C($s2)
    ctx->pc = 0x21d264u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 332), GPR_U32(ctx, 6));
    // 0x21d268: 0xae401acc  sw          $zero, 0x1ACC($s2)
    ctx->pc = 0x21d268u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6860), GPR_U32(ctx, 0));
    // 0x21d26c: 0xae4500d0  sw          $a1, 0xD0($s2)
    ctx->pc = 0x21d26cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 5));
    // 0x21d270: 0xae4001b8  sw          $zero, 0x1B8($s2)
    ctx->pc = 0x21d270u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 440), GPR_U32(ctx, 0));
    // 0x21d274: 0xae4001bc  sw          $zero, 0x1BC($s2)
    ctx->pc = 0x21d274u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 444), GPR_U32(ctx, 0));
    // 0x21d278: 0xae4017f4  sw          $zero, 0x17F4($s2)
    ctx->pc = 0x21d278u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6132), GPR_U32(ctx, 0));
    // 0x21d27c: 0xae400150  sw          $zero, 0x150($s2)
    ctx->pc = 0x21d27cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 336), GPR_U32(ctx, 0));
    // 0x21d280: 0xae430184  sw          $v1, 0x184($s2)
    ctx->pc = 0x21d280u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 388), GPR_U32(ctx, 3));
    // 0x21d284: 0xc054a98  jal         func_152A60
    ctx->pc = 0x21D284u;
    SET_GPR_U32(ctx, 31, 0x21D28Cu);
    ctx->pc = 0x21D288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D284u;
            // 0x21d288: 0xae4500b0  sw          $a1, 0xB0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152A60u;
    if (runtime->hasFunction(0x152A60u)) {
        auto targetFn = runtime->lookupFunction(0x152A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D28Cu; }
        if (ctx->pc != 0x21D28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHalfFontWPercent__6ClsMesFf_0x152a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D28Cu; }
        if (ctx->pc != 0x21D28Cu) { return; }
    }
    ctx->pc = 0x21D28Cu;
label_21d28c:
    // 0x21d28c: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x21d28cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x21d290: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x21d290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x21d294: 0xae4600c0  sw          $a2, 0xC0($s2)
    ctx->pc = 0x21d294u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 6));
    // 0x21d298: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21d298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21d29c: 0xae4500c4  sw          $a1, 0xC4($s2)
    ctx->pc = 0x21d29cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 5));
    // 0x21d2a0: 0x8f848ad0  lw          $a0, -0x7530($gp)
    ctx->pc = 0x21d2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x21d2a4: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21D2A4u;
    {
        const bool branch_taken_0x21d2a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21d2a4) {
            ctx->pc = 0x21D2B4u;
            goto label_21d2b4;
        }
    }
    ctx->pc = 0x21D2ACu;
    // 0x21d2ac: 0xae4600c0  sw          $a2, 0xC0($s2)
    ctx->pc = 0x21d2acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 6));
    // 0x21d2b0: 0xae4500c4  sw          $a1, 0xC4($s2)
    ctx->pc = 0x21d2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 5));
label_21d2b4:
    // 0x21d2b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x21d2b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21d2b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21d2b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21d2bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21d2bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d2c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21d2c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d2c4: 0x3e00008  jr          $ra
    ctx->pc = 0x21D2C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D2C4u;
            // 0x21d2c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21D2CCu;
}
