#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Preset__6ClsMesFi
// Address: 0x152ed0 - 0x153368
void Preset__6ClsMesFi_0x152ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Preset__6ClsMesFi_0x152ed0");
#endif

    switch (ctx->pc) {
        case 0x152f10u: goto label_152f10;
        case 0x152f60u: goto label_152f60;
        case 0x152f84u: goto label_152f84;
        case 0x152fb8u: goto label_152fb8;
        case 0x152fccu: goto label_152fcc;
        case 0x152fe8u: goto label_152fe8;
        case 0x153024u: goto label_153024;
        case 0x153108u: goto label_153108;
        case 0x1531acu: goto label_1531ac;
        case 0x1531f8u: goto label_1531f8;
        case 0x15326cu: goto label_15326c;
        case 0x153298u: goto label_153298;
        case 0x1532b4u: goto label_1532b4;
        case 0x1532e8u: goto label_1532e8;
        case 0x153324u: goto label_153324;
        default: break;
    }

    ctx->pc = 0x152ed0u;

    // 0x152ed0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x152ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x152ed4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x152ed4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152ed8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x152ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x152edc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x152edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x152ee0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x152ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x152ee4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x152ee4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152ee8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x152ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x152eec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x152eecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152ef0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x152ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x152ef4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x152ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152ef8: 0xac8000b4  sw          $zero, 0xB4($a0)
    ctx->pc = 0x152ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 0));
    // 0x152efc: 0xac8000d4  sw          $zero, 0xD4($a0)
    ctx->pc = 0x152efcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 0));
    // 0x152f00: 0xac8000d8  sw          $zero, 0xD8($a0)
    ctx->pc = 0x152f00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 0));
    // 0x152f04: 0xac8000dc  sw          $zero, 0xDC($a0)
    ctx->pc = 0x152f04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 0));
    // 0x152f08: 0xac8000e0  sw          $zero, 0xE0($a0)
    ctx->pc = 0x152f08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 0));
    // 0x152f0c: 0xac8000e4  sw          $zero, 0xE4($a0)
    ctx->pc = 0x152f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 0));
label_152f10:
    // 0x152f10: 0x2652021  addu        $a0, $s3, $a1
    ctx->pc = 0x152f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x152f14: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x152f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x152f18: 0xac8000e8  sw          $zero, 0xE8($a0)
    ctx->pc = 0x152f18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 0));
    // 0x152f1c: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x152f1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x152f20: 0xac8000ec  sw          $zero, 0xEC($a0)
    ctx->pc = 0x152f20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 0));
    // 0x152f24: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x152f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x152f28: 0xac8000f0  sw          $zero, 0xF0($a0)
    ctx->pc = 0x152f28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 0));
    // 0x152f2c: 0xac8000f4  sw          $zero, 0xF4($a0)
    ctx->pc = 0x152f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 0));
    // 0x152f30: 0xac8000f8  sw          $zero, 0xF8($a0)
    ctx->pc = 0x152f30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 0));
    // 0x152f34: 0xac8000fc  sw          $zero, 0xFC($a0)
    ctx->pc = 0x152f34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 252), GPR_U32(ctx, 0));
    // 0x152f38: 0xac800100  sw          $zero, 0x100($a0)
    ctx->pc = 0x152f38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 0));
    // 0x152f3c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x152F3Cu;
    {
        const bool branch_taken_0x152f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152F3Cu;
            // 0x152f40: 0xac800104  sw          $zero, 0x104($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152f3c) {
            ctx->pc = 0x152F10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_152f10;
        }
    }
    ctx->pc = 0x152F44u;
    // 0x152f44: 0xae600128  sw          $zero, 0x128($s3)
    ctx->pc = 0x152f44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 296), GPR_U32(ctx, 0));
    // 0x152f48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x152f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152f4c: 0xae60012c  sw          $zero, 0x12C($s3)
    ctx->pc = 0x152f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 300), GPR_U32(ctx, 0));
    // 0x152f50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x152f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152f54: 0xae600188  sw          $zero, 0x188($s3)
    ctx->pc = 0x152f54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 392), GPR_U32(ctx, 0));
    // 0x152f58: 0xc0547dc  jal         func_151F70
    ctx->pc = 0x152F58u;
    SET_GPR_U32(ctx, 31, 0x152F60u);
    ctx->pc = 0x152F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152F58u;
            // 0x152f5c: 0xae62018c  sw          $v0, 0x18C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151F70u;
    if (runtime->hasFunction(0x151F70u)) {
        auto targetFn = runtime->lookupFunction(0x151F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152F60u; }
        if (ctx->pc != 0x152F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawSpeedDef__6ClsMesFv_0x151f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152F60u; }
        if (ctx->pc != 0x152F60u) { return; }
    }
    ctx->pc = 0x152F60u;
label_152f60:
    // 0x152f60: 0xe66001b8  swc1        $f0, 0x1B8($s3)
    ctx->pc = 0x152f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 440), bits); }
    // 0x152f64: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x152f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152f68: 0xae6001c0  sw          $zero, 0x1C0($s3)
    ctx->pc = 0x152f68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 448), GPR_U32(ctx, 0));
    // 0x152f6c: 0xae6001cc  sw          $zero, 0x1CC($s3)
    ctx->pc = 0x152f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 460), GPR_U32(ctx, 0));
    // 0x152f70: 0xae6001d0  sw          $zero, 0x1D0($s3)
    ctx->pc = 0x152f70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 464), GPR_U32(ctx, 0));
    // 0x152f74: 0xae6001d4  sw          $zero, 0x1D4($s3)
    ctx->pc = 0x152f74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 468), GPR_U32(ctx, 0));
    // 0x152f78: 0xae6001d8  sw          $zero, 0x1D8($s3)
    ctx->pc = 0x152f78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 472), GPR_U32(ctx, 0));
    // 0x152f7c: 0xc0557f0  jal         func_155FC0
    ctx->pc = 0x152F7Cu;
    SET_GPR_U32(ctx, 31, 0x152F84u);
    ctx->pc = 0x152F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152F7Cu;
            // 0x152f80: 0xae6001dc  sw          $zero, 0x1DC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 476), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155FC0u;
    if (runtime->hasFunction(0x155FC0u)) {
        auto targetFn = runtime->lookupFunction(0x155FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152F84u; }
        if (ctx->pc != 0x152F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMesWinTbl__6ClsMesFv_0x155fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152F84u; }
        if (ctx->pc != 0x152F84u) { return; }
    }
    ctx->pc = 0x152F84u;
label_152f84:
    // 0x152f84: 0x8e6517d0  lw          $a1, 0x17D0($s3)
    ctx->pc = 0x152f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6096)));
    // 0x152f88: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x152f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x152f8c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x152f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x152f90: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x152f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x152f94: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x152f94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152f98: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x152f98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152f9c: 0xae6517d4  sw          $a1, 0x17D4($s3)
    ctx->pc = 0x152f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6100), GPR_U32(ctx, 5));
    // 0x152fa0: 0xae6017d8  sw          $zero, 0x17D8($s3)
    ctx->pc = 0x152fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6104), GPR_U32(ctx, 0));
    // 0x152fa4: 0xae6017dc  sw          $zero, 0x17DC($s3)
    ctx->pc = 0x152fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6108), GPR_U32(ctx, 0));
    // 0x152fa8: 0xae6417e0  sw          $a0, 0x17E0($s3)
    ctx->pc = 0x152fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6112), GPR_U32(ctx, 4));
    // 0x152fac: 0xae6317e4  sw          $v1, 0x17E4($s3)
    ctx->pc = 0x152facu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6116), GPR_U32(ctx, 3));
    // 0x152fb0: 0xae6017e8  sw          $zero, 0x17E8($s3)
    ctx->pc = 0x152fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6120), GPR_U32(ctx, 0));
    // 0x152fb4: 0xa2621800  sb          $v0, 0x1800($s3)
    ctx->pc = 0x152fb4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 6144), (uint8_t)GPR_U32(ctx, 2));
label_152fb8:
    // 0x152fb8: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x152fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x152fbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x152fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152fc0: 0x24441801  addiu       $a0, $v0, 0x1801
    ctx->pc = 0x152fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
    // 0x152fc4: 0xc049c86  jal         func_127218
    ctx->pc = 0x152FC4u;
    SET_GPR_U32(ctx, 31, 0x152FCCu);
    ctx->pc = 0x152FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152FC4u;
            // 0x152fc8: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152FCCu; }
        if (ctx->pc != 0x152FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152FCCu; }
        if (ctx->pc != 0x152FCCu) { return; }
    }
    ctx->pc = 0x152FCCu;
label_152fcc:
    // 0x152fcc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x152fccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x152fd0: 0x2a030010  slti        $v1, $s0, 0x10
    ctx->pc = 0x152fd0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x152fd4: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x152FD4u;
    {
        const bool branch_taken_0x152fd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x152FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152FD4u;
            // 0x152fd8: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152fd4) {
            ctx->pc = 0x152FB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_152fb8;
        }
    }
    ctx->pc = 0x152FDCu;
    // 0x152fdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x152fdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152fe0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x152fe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152fe4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x152fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_152fe8:
    // 0x152fe8: 0x2663821  addu        $a3, $s3, $a2
    ctx->pc = 0x152fe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x152fec: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x152fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x152ff0: 0xace41a04  sw          $a0, 0x1A04($a3)
    ctx->pc = 0x152ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6660), GPR_U32(ctx, 4));
    // 0x152ff4: 0x28a30010  slti        $v1, $a1, 0x10
    ctx->pc = 0x152ff4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x152ff8: 0xace41a08  sw          $a0, 0x1A08($a3)
    ctx->pc = 0x152ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6664), GPR_U32(ctx, 4));
    // 0x152ffc: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x152ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x153000: 0xace41a0c  sw          $a0, 0x1A0C($a3)
    ctx->pc = 0x153000u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6668), GPR_U32(ctx, 4));
    // 0x153004: 0xace41a10  sw          $a0, 0x1A10($a3)
    ctx->pc = 0x153004u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6672), GPR_U32(ctx, 4));
    // 0x153008: 0xace41a14  sw          $a0, 0x1A14($a3)
    ctx->pc = 0x153008u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6676), GPR_U32(ctx, 4));
    // 0x15300c: 0xace41a18  sw          $a0, 0x1A18($a3)
    ctx->pc = 0x15300cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6680), GPR_U32(ctx, 4));
    // 0x153010: 0xace41a1c  sw          $a0, 0x1A1C($a3)
    ctx->pc = 0x153010u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6684), GPR_U32(ctx, 4));
    // 0x153014: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x153014u;
    {
        const bool branch_taken_0x153014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x153018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153014u;
            // 0x153018: 0xace41a20  sw          $a0, 0x1A20($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 6688), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153014) {
            ctx->pc = 0x152FE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_152fe8;
        }
    }
    ctx->pc = 0x15301Cu;
    // 0x15301c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15301cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153020: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x153020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_153024:
    // 0x153024: 0x2653021  addu        $a2, $s3, $a1
    ctx->pc = 0x153024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x153028: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x153028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x15302c: 0xacc01a44  sw          $zero, 0x1A44($a2)
    ctx->pc = 0x15302cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6724), GPR_U32(ctx, 0));
    // 0x153030: 0x28830010  slti        $v1, $a0, 0x10
    ctx->pc = 0x153030u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x153034: 0xacc01a84  sw          $zero, 0x1A84($a2)
    ctx->pc = 0x153034u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6788), GPR_U32(ctx, 0));
    // 0x153038: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x153038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x15303c: 0xacc01a48  sw          $zero, 0x1A48($a2)
    ctx->pc = 0x15303cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6728), GPR_U32(ctx, 0));
    // 0x153040: 0xacc01a88  sw          $zero, 0x1A88($a2)
    ctx->pc = 0x153040u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6792), GPR_U32(ctx, 0));
    // 0x153044: 0xacc01a4c  sw          $zero, 0x1A4C($a2)
    ctx->pc = 0x153044u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6732), GPR_U32(ctx, 0));
    // 0x153048: 0xacc01a8c  sw          $zero, 0x1A8C($a2)
    ctx->pc = 0x153048u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6796), GPR_U32(ctx, 0));
    // 0x15304c: 0xacc01a50  sw          $zero, 0x1A50($a2)
    ctx->pc = 0x15304cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6736), GPR_U32(ctx, 0));
    // 0x153050: 0xacc01a90  sw          $zero, 0x1A90($a2)
    ctx->pc = 0x153050u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6800), GPR_U32(ctx, 0));
    // 0x153054: 0xacc01a54  sw          $zero, 0x1A54($a2)
    ctx->pc = 0x153054u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6740), GPR_U32(ctx, 0));
    // 0x153058: 0xacc01a94  sw          $zero, 0x1A94($a2)
    ctx->pc = 0x153058u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6804), GPR_U32(ctx, 0));
    // 0x15305c: 0xacc01a58  sw          $zero, 0x1A58($a2)
    ctx->pc = 0x15305cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6744), GPR_U32(ctx, 0));
    // 0x153060: 0xacc01a98  sw          $zero, 0x1A98($a2)
    ctx->pc = 0x153060u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6808), GPR_U32(ctx, 0));
    // 0x153064: 0xacc01a5c  sw          $zero, 0x1A5C($a2)
    ctx->pc = 0x153064u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6748), GPR_U32(ctx, 0));
    // 0x153068: 0xacc01a9c  sw          $zero, 0x1A9C($a2)
    ctx->pc = 0x153068u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6812), GPR_U32(ctx, 0));
    // 0x15306c: 0xacc01a60  sw          $zero, 0x1A60($a2)
    ctx->pc = 0x15306cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6752), GPR_U32(ctx, 0));
    // 0x153070: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x153070u;
    {
        const bool branch_taken_0x153070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x153074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153070u;
            // 0x153074: 0xacc01aa0  sw          $zero, 0x1AA0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 6816), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153070) {
            ctx->pc = 0x153024u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_153024;
        }
    }
    ctx->pc = 0x153078u;
    // 0x153078: 0xae601ac4  sw          $zero, 0x1AC4($s3)
    ctx->pc = 0x153078u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6852), GPR_U32(ctx, 0));
    // 0x15307c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15307cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153080: 0xae601ac8  sw          $zero, 0x1AC8($s3)
    ctx->pc = 0x153080u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6856), GPR_U32(ctx, 0));
    // 0x153084: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x153084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x153088: 0xae631acc  sw          $v1, 0x1ACC($s3)
    ctx->pc = 0x153088u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6860), GPR_U32(ctx, 3));
    // 0x15308c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15308cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153090: 0xae601ad0  sw          $zero, 0x1AD0($s3)
    ctx->pc = 0x153090u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6864), GPR_U32(ctx, 0));
    // 0x153094: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x153094u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153098: 0xae601ad4  sw          $zero, 0x1AD4($s3)
    ctx->pc = 0x153098u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6868), GPR_U32(ctx, 0));
    // 0x15309c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15309cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1530a0: 0xae601ad8  sw          $zero, 0x1AD8($s3)
    ctx->pc = 0x1530a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6872), GPR_U32(ctx, 0));
    // 0x1530a4: 0xae641adc  sw          $a0, 0x1ADC($s3)
    ctx->pc = 0x1530a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6876), GPR_U32(ctx, 4));
    // 0x1530a8: 0xae641ae0  sw          $a0, 0x1AE0($s3)
    ctx->pc = 0x1530a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6880), GPR_U32(ctx, 4));
    // 0x1530ac: 0xae641ae4  sw          $a0, 0x1AE4($s3)
    ctx->pc = 0x1530acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6884), GPR_U32(ctx, 4));
    // 0x1530b0: 0xae601ae8  sw          $zero, 0x1AE8($s3)
    ctx->pc = 0x1530b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6888), GPR_U32(ctx, 0));
    // 0x1530b4: 0xae601aec  sw          $zero, 0x1AEC($s3)
    ctx->pc = 0x1530b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6892), GPR_U32(ctx, 0));
    // 0x1530b8: 0xae601af0  sw          $zero, 0x1AF0($s3)
    ctx->pc = 0x1530b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6896), GPR_U32(ctx, 0));
    // 0x1530bc: 0xae601af4  sw          $zero, 0x1AF4($s3)
    ctx->pc = 0x1530bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6900), GPR_U32(ctx, 0));
    // 0x1530c0: 0xae601af8  sw          $zero, 0x1AF8($s3)
    ctx->pc = 0x1530c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6904), GPR_U32(ctx, 0));
    // 0x1530c4: 0xae601afc  sw          $zero, 0x1AFC($s3)
    ctx->pc = 0x1530c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6908), GPR_U32(ctx, 0));
    // 0x1530c8: 0xae601b00  sw          $zero, 0x1B00($s3)
    ctx->pc = 0x1530c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6912), GPR_U32(ctx, 0));
    // 0x1530cc: 0xae641b04  sw          $a0, 0x1B04($s3)
    ctx->pc = 0x1530ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6916), GPR_U32(ctx, 4));
    // 0x1530d0: 0xae641b08  sw          $a0, 0x1B08($s3)
    ctx->pc = 0x1530d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6920), GPR_U32(ctx, 4));
    // 0x1530d4: 0xae641b0c  sw          $a0, 0x1B0C($s3)
    ctx->pc = 0x1530d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6924), GPR_U32(ctx, 4));
    // 0x1530d8: 0xae641b10  sw          $a0, 0x1B10($s3)
    ctx->pc = 0x1530d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6928), GPR_U32(ctx, 4));
    // 0x1530dc: 0xae601b14  sw          $zero, 0x1B14($s3)
    ctx->pc = 0x1530dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6932), GPR_U32(ctx, 0));
    // 0x1530e0: 0xae601b18  sw          $zero, 0x1B18($s3)
    ctx->pc = 0x1530e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6936), GPR_U32(ctx, 0));
    // 0x1530e4: 0xae601b1c  sw          $zero, 0x1B1C($s3)
    ctx->pc = 0x1530e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6940), GPR_U32(ctx, 0));
    // 0x1530e8: 0xae601b20  sw          $zero, 0x1B20($s3)
    ctx->pc = 0x1530e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6944), GPR_U32(ctx, 0));
    // 0x1530ec: 0xae601b24  sw          $zero, 0x1B24($s3)
    ctx->pc = 0x1530ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6948), GPR_U32(ctx, 0));
    // 0x1530f0: 0xae601b28  sw          $zero, 0x1B28($s3)
    ctx->pc = 0x1530f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6952), GPR_U32(ctx, 0));
    // 0x1530f4: 0xae601b30  sw          $zero, 0x1B30($s3)
    ctx->pc = 0x1530f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6960), GPR_U32(ctx, 0));
    // 0x1530f8: 0xae601b34  sw          $zero, 0x1B34($s3)
    ctx->pc = 0x1530f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6964), GPR_U32(ctx, 0));
    // 0x1530fc: 0xae601b3c  sw          $zero, 0x1B3C($s3)
    ctx->pc = 0x1530fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6972), GPR_U32(ctx, 0));
    // 0x153100: 0xae601b38  sw          $zero, 0x1B38($s3)
    ctx->pc = 0x153100u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6968), GPR_U32(ctx, 0));
    // 0x153104: 0xae601b40  sw          $zero, 0x1B40($s3)
    ctx->pc = 0x153104u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6976), GPR_U32(ctx, 0));
label_153108:
    // 0x153108: 0x2664021  addu        $t0, $s3, $a2
    ctx->pc = 0x153108u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x15310c: 0x2671821  addu        $v1, $s3, $a3
    ctx->pc = 0x15310cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x153110: 0xad001b44  sw          $zero, 0x1B44($t0)
    ctx->pc = 0x153110u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 6980), GPR_U32(ctx, 0));
    // 0x153114: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x153114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x153118: 0xac601b94  sw          $zero, 0x1B94($v1)
    ctx->pc = 0x153118u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7060), GPR_U32(ctx, 0));
    // 0x15311c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x15311cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x153120: 0xac601b98  sw          $zero, 0x1B98($v1)
    ctx->pc = 0x153120u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7064), GPR_U32(ctx, 0));
    // 0x153124: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x153124u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x153128: 0xad001c34  sw          $zero, 0x1C34($t0)
    ctx->pc = 0x153128u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7220), GPR_U32(ctx, 0));
    // 0x15312c: 0x28a30014  slti        $v1, $a1, 0x14
    ctx->pc = 0x15312cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x153130: 0xad041c84  sw          $a0, 0x1C84($t0)
    ctx->pc = 0x153130u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7300), GPR_U32(ctx, 4));
    // 0x153134: 0xad001cd4  sw          $zero, 0x1CD4($t0)
    ctx->pc = 0x153134u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7380), GPR_U32(ctx, 0));
    // 0x153138: 0xad001d24  sw          $zero, 0x1D24($t0)
    ctx->pc = 0x153138u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7460), GPR_U32(ctx, 0));
    // 0x15313c: 0xad001d74  sw          $zero, 0x1D74($t0)
    ctx->pc = 0x15313cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7540), GPR_U32(ctx, 0));
    // 0x153140: 0xad001dc4  sw          $zero, 0x1DC4($t0)
    ctx->pc = 0x153140u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7620), GPR_U32(ctx, 0));
    // 0x153144: 0xad001e14  sw          $zero, 0x1E14($t0)
    ctx->pc = 0x153144u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7700), GPR_U32(ctx, 0));
    // 0x153148: 0xad041e64  sw          $a0, 0x1E64($t0)
    ctx->pc = 0x153148u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7780), GPR_U32(ctx, 4));
    // 0x15314c: 0xad001eb4  sw          $zero, 0x1EB4($t0)
    ctx->pc = 0x15314cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7860), GPR_U32(ctx, 0));
    // 0x153150: 0xad001f04  sw          $zero, 0x1F04($t0)
    ctx->pc = 0x153150u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7940), GPR_U32(ctx, 0));
    // 0x153154: 0xad001f54  sw          $zero, 0x1F54($t0)
    ctx->pc = 0x153154u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8020), GPR_U32(ctx, 0));
    // 0x153158: 0xad041fa4  sw          $a0, 0x1FA4($t0)
    ctx->pc = 0x153158u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8100), GPR_U32(ctx, 4));
    // 0x15315c: 0xad041ff4  sw          $a0, 0x1FF4($t0)
    ctx->pc = 0x15315cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8180), GPR_U32(ctx, 4));
    // 0x153160: 0xad002044  sw          $zero, 0x2044($t0)
    ctx->pc = 0x153160u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8260), GPR_U32(ctx, 0));
    // 0x153164: 0xad002094  sw          $zero, 0x2094($t0)
    ctx->pc = 0x153164u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8340), GPR_U32(ctx, 0));
    // 0x153168: 0xad0020e4  sw          $zero, 0x20E4($t0)
    ctx->pc = 0x153168u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8420), GPR_U32(ctx, 0));
    // 0x15316c: 0xad002134  sw          $zero, 0x2134($t0)
    ctx->pc = 0x15316cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8500), GPR_U32(ctx, 0));
    // 0x153170: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x153170u;
    {
        const bool branch_taken_0x153170 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x153174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153170u;
            // 0x153174: 0xad002184  sw          $zero, 0x2184($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8580), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153170) {
            ctx->pc = 0x153108u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_153108;
        }
    }
    ctx->pc = 0x153178u;
    // 0x153178: 0x2e410007  sltiu       $at, $s2, 0x7
    ctx->pc = 0x153178u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x15317c: 0x10200073  beqz        $at, . + 4 + (0x73 << 2)
    ctx->pc = 0x15317Cu;
    {
        const bool branch_taken_0x15317c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x153180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15317Cu;
            // 0x153180: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15317c) {
            ctx->pc = 0x15334Cu;
            goto label_15334c;
        }
    }
    ctx->pc = 0x153184u;
    // 0x153184: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x153184u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x153188: 0x24842900  addiu       $a0, $a0, 0x2900
    ctx->pc = 0x153188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10496));
    // 0x15318c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15318cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x153190: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x153190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x153194: 0x600008  jr          $v1
    ctx->pc = 0x153194u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15319Cu: goto label_15319c;
            case 0x1531E0u: goto label_1531e0;
            case 0x153244u: goto label_153244;
            case 0x15327Cu: goto label_15327c;
            case 0x1532A8u: goto label_1532a8;
            case 0x1532DCu: goto label_1532dc;
            case 0x153318u: goto label_153318;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15319Cu;
label_15319c:
    // 0x15319c: 0x3c028068  lui         $v0, 0x8068
    ctx->pc = 0x15319cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32872 << 16));
    // 0x1531a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1531a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1531a4: 0xc054bb0  jal         func_152EC0
    ctx->pc = 0x1531A4u;
    SET_GPR_U32(ctx, 31, 0x1531ACu);
    ctx->pc = 0x1531A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1531A4u;
            // 0x1531a8: 0x34456a6b  ori         $a1, $v0, 0x6A6B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27243);
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EC0u;
    if (runtime->hasFunction(0x152EC0u)) {
        auto targetFn = runtime->lookupFunction(0x152EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1531ACu; }
        if (ctx->pc != 0x1531ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDefColor__6ClsMesFUi_0x152ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1531ACu; }
        if (ctx->pc != 0x1531ACu) { return; }
    }
    ctx->pc = 0x1531ACu;
label_1531ac:
    // 0x1531ac: 0xae601b18  sw          $zero, 0x1B18($s3)
    ctx->pc = 0x1531acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6936), GPR_U32(ctx, 0));
    // 0x1531b0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1531b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1531b4: 0xae6300b0  sw          $v1, 0xB0($s3)
    ctx->pc = 0x1531b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 176), GPR_U32(ctx, 3));
    // 0x1531b8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1531b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1531bc: 0xae6017f4  sw          $zero, 0x17F4($s3)
    ctx->pc = 0x1531bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6132), GPR_U32(ctx, 0));
    // 0x1531c0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1531c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1531c4: 0xae601af8  sw          $zero, 0x1AF8($s3)
    ctx->pc = 0x1531c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6904), GPR_U32(ctx, 0));
    // 0x1531c8: 0xae640190  sw          $a0, 0x190($s3)
    ctx->pc = 0x1531c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 400), GPR_U32(ctx, 4));
    // 0x1531cc: 0xae640194  sw          $a0, 0x194($s3)
    ctx->pc = 0x1531ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 404), GPR_U32(ctx, 4));
    // 0x1531d0: 0xae640198  sw          $a0, 0x198($s3)
    ctx->pc = 0x1531d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 408), GPR_U32(ctx, 4));
    // 0x1531d4: 0xae64019c  sw          $a0, 0x19C($s3)
    ctx->pc = 0x1531d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 412), GPR_U32(ctx, 4));
    // 0x1531d8: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x1531D8u;
    {
        const bool branch_taken_0x1531d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1531DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1531D8u;
            // 0x1531dc: 0xae6301b8  sw          $v1, 0x1B8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 440), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1531d8) {
            ctx->pc = 0x15334Cu;
            goto label_15334c;
        }
    }
    ctx->pc = 0x1531E0u;
label_1531e0:
    // 0x1531e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1531e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1531e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1531e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1531e8: 0xae620130  sw          $v0, 0x130($s3)
    ctx->pc = 0x1531e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 304), GPR_U32(ctx, 2));
    // 0x1531ec: 0x3c028020  lui         $v0, 0x8020
    ctx->pc = 0x1531ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32800 << 16));
    // 0x1531f0: 0xc054bb0  jal         func_152EC0
    ctx->pc = 0x1531F0u;
    SET_GPR_U32(ctx, 31, 0x1531F8u);
    ctx->pc = 0x1531F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1531F0u;
            // 0x1531f4: 0x34452020  ori         $a1, $v0, 0x2020 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EC0u;
    if (runtime->hasFunction(0x152EC0u)) {
        auto targetFn = runtime->lookupFunction(0x152EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1531F8u; }
        if (ctx->pc != 0x1531F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDefColor__6ClsMesFUi_0x152ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1531F8u; }
        if (ctx->pc != 0x1531F8u) { return; }
    }
    ctx->pc = 0x1531F8u;
label_1531f8:
    // 0x1531f8: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1531f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1531fc: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1531fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x153200: 0xae6400c0  sw          $a0, 0xC0($s3)
    ctx->pc = 0x153200u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 192), GPR_U32(ctx, 4));
    // 0x153204: 0xae6300c4  sw          $v1, 0xC4($s3)
    ctx->pc = 0x153204u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 196), GPR_U32(ctx, 3));
    // 0x153208: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x153208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x15320c: 0xae6400cc  sw          $a0, 0xCC($s3)
    ctx->pc = 0x15320cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 204), GPR_U32(ctx, 4));
    // 0x153210: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x153210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x153214: 0xae6300d0  sw          $v1, 0xD0($s3)
    ctx->pc = 0x153214u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 208), GPR_U32(ctx, 3));
    // 0x153218: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x153218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15321c: 0xae6001b8  sw          $zero, 0x1B8($s3)
    ctx->pc = 0x15321cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 440), GPR_U32(ctx, 0));
    // 0x153220: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x153220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x153224: 0xae6001bc  sw          $zero, 0x1BC($s3)
    ctx->pc = 0x153224u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 444), GPR_U32(ctx, 0));
    // 0x153228: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x153228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x15322c: 0xae6000b0  sw          $zero, 0xB0($s3)
    ctx->pc = 0x15322cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 176), GPR_U32(ctx, 0));
    // 0x153230: 0xae6417f4  sw          $a0, 0x17F4($s3)
    ctx->pc = 0x153230u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6132), GPR_U32(ctx, 4));
    // 0x153234: 0xae6017f8  sw          $zero, 0x17F8($s3)
    ctx->pc = 0x153234u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6136), GPR_U32(ctx, 0));
    // 0x153238: 0xae6017fc  sw          $zero, 0x17FC($s3)
    ctx->pc = 0x153238u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6140), GPR_U32(ctx, 0));
    // 0x15323c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x15323Cu;
    {
        const bool branch_taken_0x15323c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15323Cu;
            // 0x153240: 0xae630184  sw          $v1, 0x184($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 388), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15323c) {
            ctx->pc = 0x15334Cu;
            goto label_15334c;
        }
    }
    ctx->pc = 0x153244u;
label_153244:
    // 0x153244: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x153244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x153248: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x153248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15324c: 0x3445999a  ori         $a1, $v0, 0x999A
    ctx->pc = 0x15324cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x153250: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x153250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153254: 0xae6501b8  sw          $a1, 0x1B8($s3)
    ctx->pc = 0x153254u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 440), GPR_U32(ctx, 5));
    // 0x153258: 0x3c028020  lui         $v0, 0x8020
    ctx->pc = 0x153258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32800 << 16));
    // 0x15325c: 0xae6501bc  sw          $a1, 0x1BC($s3)
    ctx->pc = 0x15325cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 444), GPR_U32(ctx, 5));
    // 0x153260: 0x34452020  ori         $a1, $v0, 0x2020
    ctx->pc = 0x153260u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x153264: 0xc054bb0  jal         func_152EC0
    ctx->pc = 0x153264u;
    SET_GPR_U32(ctx, 31, 0x15326Cu);
    ctx->pc = 0x153268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153264u;
            // 0x153268: 0xae630130  sw          $v1, 0x130($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 304), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EC0u;
    if (runtime->hasFunction(0x152EC0u)) {
        auto targetFn = runtime->lookupFunction(0x152EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15326Cu; }
        if (ctx->pc != 0x15326Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDefColor__6ClsMesFUi_0x152ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15326Cu; }
        if (ctx->pc != 0x15326Cu) { return; }
    }
    ctx->pc = 0x15326Cu;
label_15326c:
    // 0x15326c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15326cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153270: 0xae6300b0  sw          $v1, 0xB0($s3)
    ctx->pc = 0x153270u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 176), GPR_U32(ctx, 3));
    // 0x153274: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x153274u;
    {
        const bool branch_taken_0x153274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153274u;
            // 0x153278: 0xae6317f4  sw          $v1, 0x17F4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 6132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153274) {
            ctx->pc = 0x15334Cu;
            goto label_15334c;
        }
    }
    ctx->pc = 0x15327Cu;
label_15327c:
    // 0x15327c: 0xae600130  sw          $zero, 0x130($s3)
    ctx->pc = 0x15327cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 304), GPR_U32(ctx, 0));
    // 0x153280: 0x3c028020  lui         $v0, 0x8020
    ctx->pc = 0x153280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32800 << 16));
    // 0x153284: 0xae6001b8  sw          $zero, 0x1B8($s3)
    ctx->pc = 0x153284u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 440), GPR_U32(ctx, 0));
    // 0x153288: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x153288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15328c: 0x34452020  ori         $a1, $v0, 0x2020
    ctx->pc = 0x15328cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x153290: 0xc054bb0  jal         func_152EC0
    ctx->pc = 0x153290u;
    SET_GPR_U32(ctx, 31, 0x153298u);
    ctx->pc = 0x153294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153290u;
            // 0x153294: 0xae6001bc  sw          $zero, 0x1BC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 444), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EC0u;
    if (runtime->hasFunction(0x152EC0u)) {
        auto targetFn = runtime->lookupFunction(0x152EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153298u; }
        if (ctx->pc != 0x153298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDefColor__6ClsMesFUi_0x152ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153298u; }
        if (ctx->pc != 0x153298u) { return; }
    }
    ctx->pc = 0x153298u;
label_153298:
    // 0x153298: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x153298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15329c: 0xae6300b0  sw          $v1, 0xB0($s3)
    ctx->pc = 0x15329cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 176), GPR_U32(ctx, 3));
    // 0x1532a0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1532A0u;
    {
        const bool branch_taken_0x1532a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1532A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1532A0u;
            // 0x1532a4: 0xae6017f4  sw          $zero, 0x17F4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 6132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1532a0) {
            ctx->pc = 0x15334Cu;
            goto label_15334c;
        }
    }
    ctx->pc = 0x1532A8u;
label_1532a8:
    // 0x1532a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1532a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1532ac: 0xc054cdc  jal         func_153370
    ctx->pc = 0x1532ACu;
    SET_GPR_U32(ctx, 31, 0x1532B4u);
    ctx->pc = 0x1532B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1532ACu;
            // 0x1532b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153370u;
    if (runtime->hasFunction(0x153370u)) {
        auto targetFn = runtime->lookupFunction(0x153370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1532B4u; }
        if (ctx->pc != 0x1532B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWindowMode__6ClsMesFi_0x153370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1532B4u; }
        if (ctx->pc != 0x1532B4u) { return; }
    }
    ctx->pc = 0x1532B4u;
label_1532b4:
    // 0x1532b4: 0xae6017f4  sw          $zero, 0x17F4($s3)
    ctx->pc = 0x1532b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6132), GPR_U32(ctx, 0));
    // 0x1532b8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1532b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1532bc: 0xae6001b8  sw          $zero, 0x1B8($s3)
    ctx->pc = 0x1532bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 440), GPR_U32(ctx, 0));
    // 0x1532c0: 0xae6001bc  sw          $zero, 0x1BC($s3)
    ctx->pc = 0x1532c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 444), GPR_U32(ctx, 0));
    // 0x1532c4: 0xae6017f8  sw          $zero, 0x17F8($s3)
    ctx->pc = 0x1532c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6136), GPR_U32(ctx, 0));
    // 0x1532c8: 0xae630190  sw          $v1, 0x190($s3)
    ctx->pc = 0x1532c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 400), GPR_U32(ctx, 3));
    // 0x1532cc: 0xae630194  sw          $v1, 0x194($s3)
    ctx->pc = 0x1532ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 404), GPR_U32(ctx, 3));
    // 0x1532d0: 0xae630198  sw          $v1, 0x198($s3)
    ctx->pc = 0x1532d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 408), GPR_U32(ctx, 3));
    // 0x1532d4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1532D4u;
    {
        const bool branch_taken_0x1532d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1532D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1532D4u;
            // 0x1532d8: 0xae63019c  sw          $v1, 0x19C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 412), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1532d4) {
            ctx->pc = 0x15334Cu;
            goto label_15334c;
        }
    }
    ctx->pc = 0x1532DCu;
label_1532dc:
    // 0x1532dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1532dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1532e0: 0xc054cdc  jal         func_153370
    ctx->pc = 0x1532E0u;
    SET_GPR_U32(ctx, 31, 0x1532E8u);
    ctx->pc = 0x1532E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1532E0u;
            // 0x1532e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153370u;
    if (runtime->hasFunction(0x153370u)) {
        auto targetFn = runtime->lookupFunction(0x153370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1532E8u; }
        if (ctx->pc != 0x1532E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWindowMode__6ClsMesFi_0x153370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1532E8u; }
        if (ctx->pc != 0x1532E8u) { return; }
    }
    ctx->pc = 0x1532E8u;
label_1532e8:
    // 0x1532e8: 0xae6017f4  sw          $zero, 0x17F4($s3)
    ctx->pc = 0x1532e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6132), GPR_U32(ctx, 0));
    // 0x1532ec: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1532ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1532f0: 0xae6001b8  sw          $zero, 0x1B8($s3)
    ctx->pc = 0x1532f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 440), GPR_U32(ctx, 0));
    // 0x1532f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1532f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1532f8: 0xae6001bc  sw          $zero, 0x1BC($s3)
    ctx->pc = 0x1532f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 444), GPR_U32(ctx, 0));
    // 0x1532fc: 0xae6017f8  sw          $zero, 0x17F8($s3)
    ctx->pc = 0x1532fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6136), GPR_U32(ctx, 0));
    // 0x153300: 0xae640190  sw          $a0, 0x190($s3)
    ctx->pc = 0x153300u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 400), GPR_U32(ctx, 4));
    // 0x153304: 0xae640194  sw          $a0, 0x194($s3)
    ctx->pc = 0x153304u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 404), GPR_U32(ctx, 4));
    // 0x153308: 0xae600198  sw          $zero, 0x198($s3)
    ctx->pc = 0x153308u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 408), GPR_U32(ctx, 0));
    // 0x15330c: 0xae60019c  sw          $zero, 0x19C($s3)
    ctx->pc = 0x15330cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 412), GPR_U32(ctx, 0));
    // 0x153310: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x153310u;
    {
        const bool branch_taken_0x153310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153310u;
            // 0x153314: 0xae6300b4  sw          $v1, 0xB4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 180), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153310) {
            ctx->pc = 0x15334Cu;
            goto label_15334c;
        }
    }
    ctx->pc = 0x153318u;
label_153318:
    // 0x153318: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x153318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15331c: 0xc054cdc  jal         func_153370
    ctx->pc = 0x15331Cu;
    SET_GPR_U32(ctx, 31, 0x153324u);
    ctx->pc = 0x153320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15331Cu;
            // 0x153320: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153370u;
    if (runtime->hasFunction(0x153370u)) {
        auto targetFn = runtime->lookupFunction(0x153370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153324u; }
        if (ctx->pc != 0x153324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWindowMode__6ClsMesFi_0x153370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153324u; }
        if (ctx->pc != 0x153324u) { return; }
    }
    ctx->pc = 0x153324u;
label_153324:
    // 0x153324: 0xae6017f4  sw          $zero, 0x17F4($s3)
    ctx->pc = 0x153324u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6132), GPR_U32(ctx, 0));
    // 0x153328: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x153328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15332c: 0xae6001b8  sw          $zero, 0x1B8($s3)
    ctx->pc = 0x15332cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 440), GPR_U32(ctx, 0));
    // 0x153330: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x153330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x153334: 0xae6001bc  sw          $zero, 0x1BC($s3)
    ctx->pc = 0x153334u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 444), GPR_U32(ctx, 0));
    // 0x153338: 0xae6400b0  sw          $a0, 0xB0($s3)
    ctx->pc = 0x153338u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 176), GPR_U32(ctx, 4));
    // 0x15333c: 0xae630190  sw          $v1, 0x190($s3)
    ctx->pc = 0x15333cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 400), GPR_U32(ctx, 3));
    // 0x153340: 0xae630194  sw          $v1, 0x194($s3)
    ctx->pc = 0x153340u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 404), GPR_U32(ctx, 3));
    // 0x153344: 0xae630198  sw          $v1, 0x198($s3)
    ctx->pc = 0x153344u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 408), GPR_U32(ctx, 3));
    // 0x153348: 0xae63019c  sw          $v1, 0x19C($s3)
    ctx->pc = 0x153348u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 412), GPR_U32(ctx, 3));
label_15334c:
    // 0x15334c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x15334cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x153350: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x153350u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x153354: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x153354u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153358: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x153358u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15335c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15335cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153360: 0x3e00008  jr          $ra
    ctx->pc = 0x153360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153360u;
            // 0x153364: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x153368u;
}
