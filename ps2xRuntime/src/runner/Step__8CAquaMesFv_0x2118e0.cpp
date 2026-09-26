#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__8CAquaMesFv
// Address: 0x2118e0 - 0x211a8c
void Step__8CAquaMesFv_0x2118e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__8CAquaMesFv_0x2118e0");
#endif

    switch (ctx->pc) {
        case 0x2118f8u: goto label_2118f8;
        case 0x21190cu: goto label_21190c;
        case 0x21193cu: goto label_21193c;
        case 0x211954u: goto label_211954;
        case 0x21196cu: goto label_21196c;
        case 0x211984u: goto label_211984;
        case 0x21199cu: goto label_21199c;
        case 0x2119ccu: goto label_2119cc;
        case 0x2119fcu: goto label_2119fc;
        default: break;
    }

    ctx->pc = 0x2118e0u;

    // 0x2118e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2118e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2118e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2118e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2118e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2118e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2118ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2118ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2118f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2118f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2118f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2118f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2118f8:
    // 0x2118f8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2118f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2118fc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2118FCu;
    {
        const bool branch_taken_0x2118fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2118fc) {
            ctx->pc = 0x21190Cu;
            goto label_21190c;
        }
    }
    ctx->pc = 0x211904u;
    // 0x211904: 0xc054ee8  jal         func_153BA0
    ctx->pc = 0x211904u;
    SET_GPR_U32(ctx, 31, 0x21190Cu);
    ctx->pc = 0x153BA0u;
    if (runtime->hasFunction(0x153BA0u)) {
        auto targetFn = runtime->lookupFunction(0x153BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21190Cu; }
        if (ctx->pc != 0x21190Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__6ClsMesFv_0x153ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21190Cu; }
        if (ctx->pc != 0x21190Cu) { return; }
    }
    ctx->pc = 0x21190Cu;
label_21190c:
    // 0x21190c: 0x0  nop
    ctx->pc = 0x21190cu;
    // NOP
    // 0x211910: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x211910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x211914: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x211914u;
    {
        const bool branch_taken_0x211914 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x211914) {
            ctx->pc = 0x21193Cu;
            goto label_21193c;
        }
    }
    ctx->pc = 0x21191Cu;
    // 0x21191c: 0x8c821ae4  lw          $v0, 0x1AE4($a0)
    ctx->pc = 0x21191cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6884)));
    // 0x211920: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x211920u;
    {
        const bool branch_taken_0x211920 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x211924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211920u;
            // 0x211924: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211920) {
            ctx->pc = 0x21192Cu;
            goto label_21192c;
        }
    }
    ctx->pc = 0x211928u;
    // 0x211928: 0xac801b00  sw          $zero, 0x1B00($a0)
    ctx->pc = 0x211928u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6912), GPR_U32(ctx, 0));
label_21192c:
    // 0x21192c: 0x0  nop
    ctx->pc = 0x21192cu;
    // NOP
    // 0x211930: 0xac831ae4  sw          $v1, 0x1AE4($a0)
    ctx->pc = 0x211930u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6884), GPR_U32(ctx, 3));
    // 0x211934: 0xc054ee8  jal         func_153BA0
    ctx->pc = 0x211934u;
    SET_GPR_U32(ctx, 31, 0x21193Cu);
    ctx->pc = 0x211938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211934u;
            // 0x211938: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153BA0u;
    if (runtime->hasFunction(0x153BA0u)) {
        auto targetFn = runtime->lookupFunction(0x153BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21193Cu; }
        if (ctx->pc != 0x21193Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__6ClsMesFv_0x153ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21193Cu; }
        if (ctx->pc != 0x21193Cu) { return; }
    }
    ctx->pc = 0x21193Cu;
label_21193c:
    // 0x21193c: 0x0  nop
    ctx->pc = 0x21193cu;
    // NOP
    // 0x211940: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x211940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x211944: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x211944u;
    {
        const bool branch_taken_0x211944 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x211944) {
            ctx->pc = 0x211954u;
            goto label_211954;
        }
    }
    ctx->pc = 0x21194Cu;
    // 0x21194c: 0xc054ee8  jal         func_153BA0
    ctx->pc = 0x21194Cu;
    SET_GPR_U32(ctx, 31, 0x211954u);
    ctx->pc = 0x153BA0u;
    if (runtime->hasFunction(0x153BA0u)) {
        auto targetFn = runtime->lookupFunction(0x153BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211954u; }
        if (ctx->pc != 0x211954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__6ClsMesFv_0x153ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211954u; }
        if (ctx->pc != 0x211954u) { return; }
    }
    ctx->pc = 0x211954u;
label_211954:
    // 0x211954: 0x0  nop
    ctx->pc = 0x211954u;
    // NOP
    // 0x211958: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x211958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x21195c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21195Cu;
    {
        const bool branch_taken_0x21195c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21195c) {
            ctx->pc = 0x21196Cu;
            goto label_21196c;
        }
    }
    ctx->pc = 0x211964u;
    // 0x211964: 0xc054ee8  jal         func_153BA0
    ctx->pc = 0x211964u;
    SET_GPR_U32(ctx, 31, 0x21196Cu);
    ctx->pc = 0x153BA0u;
    if (runtime->hasFunction(0x153BA0u)) {
        auto targetFn = runtime->lookupFunction(0x153BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21196Cu; }
        if (ctx->pc != 0x21196Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__6ClsMesFv_0x153ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21196Cu; }
        if (ctx->pc != 0x21196Cu) { return; }
    }
    ctx->pc = 0x21196Cu;
label_21196c:
    // 0x21196c: 0x0  nop
    ctx->pc = 0x21196cu;
    // NOP
    // 0x211970: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x211970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x211974: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x211974u;
    {
        const bool branch_taken_0x211974 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x211974) {
            ctx->pc = 0x211984u;
            goto label_211984;
        }
    }
    ctx->pc = 0x21197Cu;
    // 0x21197c: 0xc054ee8  jal         func_153BA0
    ctx->pc = 0x21197Cu;
    SET_GPR_U32(ctx, 31, 0x211984u);
    ctx->pc = 0x153BA0u;
    if (runtime->hasFunction(0x153BA0u)) {
        auto targetFn = runtime->lookupFunction(0x153BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211984u; }
        if (ctx->pc != 0x211984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__6ClsMesFv_0x153ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211984u; }
        if (ctx->pc != 0x211984u) { return; }
    }
    ctx->pc = 0x211984u;
label_211984:
    // 0x211984: 0x0  nop
    ctx->pc = 0x211984u;
    // NOP
    // 0x211988: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x211988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x21198c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21198Cu;
    {
        const bool branch_taken_0x21198c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21198c) {
            ctx->pc = 0x21199Cu;
            goto label_21199c;
        }
    }
    ctx->pc = 0x211994u;
    // 0x211994: 0xc054ee8  jal         func_153BA0
    ctx->pc = 0x211994u;
    SET_GPR_U32(ctx, 31, 0x21199Cu);
    ctx->pc = 0x153BA0u;
    if (runtime->hasFunction(0x153BA0u)) {
        auto targetFn = runtime->lookupFunction(0x153BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21199Cu; }
        if (ctx->pc != 0x21199Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__6ClsMesFv_0x153ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21199Cu; }
        if (ctx->pc != 0x21199Cu) { return; }
    }
    ctx->pc = 0x21199Cu;
label_21199c:
    // 0x21199c: 0x0  nop
    ctx->pc = 0x21199cu;
    // NOP
    // 0x2119a0: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x2119a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2119a4: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2119a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2119a8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2119A8u;
    {
        const bool branch_taken_0x2119a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2119a8) {
            ctx->pc = 0x2119B8u;
            goto label_2119b8;
        }
    }
    ctx->pc = 0x2119B0u;
    // 0x2119b0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2119b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2119b4: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x2119b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
label_2119b8:
    // 0x2119b8: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2119b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2119bc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2119BCu;
    {
        const bool branch_taken_0x2119bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2119bc) {
            ctx->pc = 0x2119CCu;
            goto label_2119cc;
        }
    }
    ctx->pc = 0x2119C4u;
    // 0x2119c4: 0xc054ee8  jal         func_153BA0
    ctx->pc = 0x2119C4u;
    SET_GPR_U32(ctx, 31, 0x2119CCu);
    ctx->pc = 0x153BA0u;
    if (runtime->hasFunction(0x153BA0u)) {
        auto targetFn = runtime->lookupFunction(0x153BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2119CCu; }
        if (ctx->pc != 0x2119CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__6ClsMesFv_0x153ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2119CCu; }
        if (ctx->pc != 0x2119CCu) { return; }
    }
    ctx->pc = 0x2119CCu;
label_2119cc:
    // 0x2119cc: 0x0  nop
    ctx->pc = 0x2119ccu;
    // NOP
    // 0x2119d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2119d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2119d4: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x2119d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2119d8: 0x1460ffc7  bnez        $v1, . + 4 + (-0x39 << 2)
    ctx->pc = 0x2119D8u;
    {
        const bool branch_taken_0x2119d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2119DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2119D8u;
            // 0x2119dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2119d8) {
            ctx->pc = 0x2118F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2118f8;
        }
    }
    ctx->pc = 0x2119E0u;
    // 0x2119e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2119e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2119e4: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2119e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x2119e8: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x2119e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2119ec: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x2119ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x2119f0: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x2119f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2119f4: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x2119f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2119f8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2119f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2119fc:
    // 0x2119fc: 0x2052021  addu        $a0, $s0, $a1
    ctx->pc = 0x2119fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x211a00: 0x92030019  lbu         $v1, 0x19($s0)
    ctx->pc = 0x211a00u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
    // 0x211a04: 0xc482001c  lwc1        $f2, 0x1C($a0)
    ctx->pc = 0x211a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x211a08: 0x24860024  addiu       $a2, $a0, 0x24
    ctx->pc = 0x211a08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x211a0c: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x211a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211a10: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x211A10u;
    {
        const bool branch_taken_0x211a10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x211A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211A10u;
            // 0x211a14: 0x46001141  sub.s       $f5, $f2, $f0 (Delay Slot)
        ctx->f[5] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x211a10) {
            ctx->pc = 0x211A3Cu;
            goto label_211a3c;
        }
    }
    ctx->pc = 0x211A18u;
    // 0x211a18: 0x46042834  c.lt.s      $f5, $f4
    ctx->pc = 0x211a18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x211a1c: 0x0  nop
    ctx->pc = 0x211a1cu;
    // NOP
    // 0x211a20: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x211A20u;
    {
        const bool branch_taken_0x211a20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x211A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211A20u;
            // 0x211a24: 0x46002806  mov.s       $f0, $f5 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x211a20) {
            ctx->pc = 0x211A2Cu;
            goto label_211a2c;
        }
    }
    ctx->pc = 0x211A28u;
    // 0x211a28: 0x46002807  neg.s       $f0, $f5
    ctx->pc = 0x211a28u;
    ctx->f[0] = FPU_NEG_S(ctx->f[5]);
label_211a2c:
    // 0x211a2c: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x211a2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x211a30: 0x0  nop
    ctx->pc = 0x211a30u;
    // NOP
    // 0x211a34: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x211A34u;
    {
        const bool branch_taken_0x211a34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x211a34) {
            ctx->pc = 0x211A48u;
            goto label_211a48;
        }
    }
    ctx->pc = 0x211A3Cu;
label_211a3c:
    // 0x211a3c: 0x0  nop
    ctx->pc = 0x211a3cu;
    // NOP
    // 0x211a40: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x211A40u;
    {
        const bool branch_taken_0x211a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211A40u;
            // 0x211a44: 0xe4c20000  swc1        $f2, 0x0($a2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x211a40) {
            ctx->pc = 0x211A58u;
            goto label_211a58;
        }
    }
    ctx->pc = 0x211A48u;
label_211a48:
    // 0x211a48: 0x46012803  div.s       $f0, $f5, $f1
    ctx->pc = 0x211a48u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[5], ctx->f[1]); }
    // 0x211a4c: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x211a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x211a50: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x211a50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x211a54: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x211a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_211a58:
    // 0x211a58: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x211a58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x211a5c: 0x28e30002  slti        $v1, $a3, 0x2
    ctx->pc = 0x211a5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x211a60: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x211A60u;
    {
        const bool branch_taken_0x211a60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x211A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211A60u;
            // 0x211a64: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211a60) {
            ctx->pc = 0x2119FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2119fc;
        }
    }
    ctx->pc = 0x211A68u;
    // 0x211a68: 0x92030019  lbu         $v1, 0x19($s0)
    ctx->pc = 0x211a68u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
    // 0x211a6c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x211A6Cu;
    {
        const bool branch_taken_0x211a6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x211a6c) {
            ctx->pc = 0x211A78u;
            goto label_211a78;
        }
    }
    ctx->pc = 0x211A74u;
    // 0x211a74: 0xa2000019  sb          $zero, 0x19($s0)
    ctx->pc = 0x211a74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 25), (uint8_t)GPR_U32(ctx, 0));
label_211a78:
    // 0x211a78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x211a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x211a7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x211a7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211a80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x211a80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211a84: 0x3e00008  jr          $ra
    ctx->pc = 0x211A84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211A84u;
            // 0x211a88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x211A8Cu;
}
