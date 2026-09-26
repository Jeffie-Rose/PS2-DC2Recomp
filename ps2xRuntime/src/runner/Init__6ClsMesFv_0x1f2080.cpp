#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Init__6ClsMesFv
// Address: 0x1f2080 - 0x1f2338
void Init__6ClsMesFv_0x1f2080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__6ClsMesFv_0x1f2080");
#endif

    switch (ctx->pc) {
        case 0x1f20b8u: goto label_1f20b8;
        case 0x1f2108u: goto label_1f2108;
        case 0x1f212cu: goto label_1f212c;
        case 0x1f2160u: goto label_1f2160;
        case 0x1f2174u: goto label_1f2174;
        case 0x1f2190u: goto label_1f2190;
        case 0x1f21ccu: goto label_1f21cc;
        case 0x1f22b0u: goto label_1f22b0;
        default: break;
    }

    ctx->pc = 0x1f2080u;

    // 0x1f2080: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f2080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f2084: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1f2084u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2088: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f2088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f208c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f208cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2090: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f2090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f2094: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f2094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f2098: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f2098u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f209c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f209cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f20a0: 0xac8000b4  sw          $zero, 0xB4($a0)
    ctx->pc = 0x1f20a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 0));
    // 0x1f20a4: 0xac8000d4  sw          $zero, 0xD4($a0)
    ctx->pc = 0x1f20a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 0));
    // 0x1f20a8: 0xac8000d8  sw          $zero, 0xD8($a0)
    ctx->pc = 0x1f20a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 0));
    // 0x1f20ac: 0xac8000dc  sw          $zero, 0xDC($a0)
    ctx->pc = 0x1f20acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 0));
    // 0x1f20b0: 0xac8000e0  sw          $zero, 0xE0($a0)
    ctx->pc = 0x1f20b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 0));
    // 0x1f20b4: 0xac8000e4  sw          $zero, 0xE4($a0)
    ctx->pc = 0x1f20b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 0));
label_1f20b8:
    // 0x1f20b8: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x1f20b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1f20bc: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1f20bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1f20c0: 0xac8000e8  sw          $zero, 0xE8($a0)
    ctx->pc = 0x1f20c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 0));
    // 0x1f20c4: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x1f20c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1f20c8: 0xac8000ec  sw          $zero, 0xEC($a0)
    ctx->pc = 0x1f20c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 0));
    // 0x1f20cc: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1f20ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1f20d0: 0xac8000f0  sw          $zero, 0xF0($a0)
    ctx->pc = 0x1f20d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 0));
    // 0x1f20d4: 0xac8000f4  sw          $zero, 0xF4($a0)
    ctx->pc = 0x1f20d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 0));
    // 0x1f20d8: 0xac8000f8  sw          $zero, 0xF8($a0)
    ctx->pc = 0x1f20d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 0));
    // 0x1f20dc: 0xac8000fc  sw          $zero, 0xFC($a0)
    ctx->pc = 0x1f20dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 252), GPR_U32(ctx, 0));
    // 0x1f20e0: 0xac800100  sw          $zero, 0x100($a0)
    ctx->pc = 0x1f20e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 0));
    // 0x1f20e4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1F20E4u;
    {
        const bool branch_taken_0x1f20e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F20E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F20E4u;
            // 0x1f20e8: 0xac800104  sw          $zero, 0x104($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f20e4) {
            ctx->pc = 0x1F20B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f20b8;
        }
    }
    ctx->pc = 0x1F20ECu;
    // 0x1f20ec: 0xae400128  sw          $zero, 0x128($s2)
    ctx->pc = 0x1f20ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 296), GPR_U32(ctx, 0));
    // 0x1f20f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f20f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f20f4: 0xae40012c  sw          $zero, 0x12C($s2)
    ctx->pc = 0x1f20f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 300), GPR_U32(ctx, 0));
    // 0x1f20f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f20f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f20fc: 0xae400188  sw          $zero, 0x188($s2)
    ctx->pc = 0x1f20fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 392), GPR_U32(ctx, 0));
    // 0x1f2100: 0xc0547dc  jal         func_151F70
    ctx->pc = 0x1F2100u;
    SET_GPR_U32(ctx, 31, 0x1F2108u);
    ctx->pc = 0x1F2104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2100u;
            // 0x1f2104: 0xae42018c  sw          $v0, 0x18C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151F70u;
    if (runtime->hasFunction(0x151F70u)) {
        auto targetFn = runtime->lookupFunction(0x151F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2108u; }
        if (ctx->pc != 0x1F2108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawSpeedDef__6ClsMesFv_0x151f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2108u; }
        if (ctx->pc != 0x1F2108u) { return; }
    }
    ctx->pc = 0x1F2108u;
label_1f2108:
    // 0x1f2108: 0xe64001b8  swc1        $f0, 0x1B8($s2)
    ctx->pc = 0x1f2108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 440), bits); }
    // 0x1f210c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f210cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2110: 0xae4001c0  sw          $zero, 0x1C0($s2)
    ctx->pc = 0x1f2110u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 448), GPR_U32(ctx, 0));
    // 0x1f2114: 0xae4001cc  sw          $zero, 0x1CC($s2)
    ctx->pc = 0x1f2114u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 460), GPR_U32(ctx, 0));
    // 0x1f2118: 0xae4001d0  sw          $zero, 0x1D0($s2)
    ctx->pc = 0x1f2118u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 464), GPR_U32(ctx, 0));
    // 0x1f211c: 0xae4001d4  sw          $zero, 0x1D4($s2)
    ctx->pc = 0x1f211cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 468), GPR_U32(ctx, 0));
    // 0x1f2120: 0xae4001d8  sw          $zero, 0x1D8($s2)
    ctx->pc = 0x1f2120u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 472), GPR_U32(ctx, 0));
    // 0x1f2124: 0xc0557f0  jal         func_155FC0
    ctx->pc = 0x1F2124u;
    SET_GPR_U32(ctx, 31, 0x1F212Cu);
    ctx->pc = 0x1F2128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2124u;
            // 0x1f2128: 0xae4001dc  sw          $zero, 0x1DC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 476), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155FC0u;
    if (runtime->hasFunction(0x155FC0u)) {
        auto targetFn = runtime->lookupFunction(0x155FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F212Cu; }
        if (ctx->pc != 0x1F212Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMesWinTbl__6ClsMesFv_0x155fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F212Cu; }
        if (ctx->pc != 0x1F212Cu) { return; }
    }
    ctx->pc = 0x1F212Cu;
label_1f212c:
    // 0x1f212c: 0x8e4517d0  lw          $a1, 0x17D0($s2)
    ctx->pc = 0x1f212cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6096)));
    // 0x1f2130: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1f2130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1f2134: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f2134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f2138: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1f2138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f213c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f213cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2140: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f2140u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2144: 0xae4517d4  sw          $a1, 0x17D4($s2)
    ctx->pc = 0x1f2144u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6100), GPR_U32(ctx, 5));
    // 0x1f2148: 0xae4017d8  sw          $zero, 0x17D8($s2)
    ctx->pc = 0x1f2148u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6104), GPR_U32(ctx, 0));
    // 0x1f214c: 0xae4017dc  sw          $zero, 0x17DC($s2)
    ctx->pc = 0x1f214cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6108), GPR_U32(ctx, 0));
    // 0x1f2150: 0xae4417e0  sw          $a0, 0x17E0($s2)
    ctx->pc = 0x1f2150u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6112), GPR_U32(ctx, 4));
    // 0x1f2154: 0xae4317e4  sw          $v1, 0x17E4($s2)
    ctx->pc = 0x1f2154u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6116), GPR_U32(ctx, 3));
    // 0x1f2158: 0xae4017e8  sw          $zero, 0x17E8($s2)
    ctx->pc = 0x1f2158u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6120), GPR_U32(ctx, 0));
    // 0x1f215c: 0xa2421800  sb          $v0, 0x1800($s2)
    ctx->pc = 0x1f215cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 6144), (uint8_t)GPR_U32(ctx, 2));
label_1f2160:
    // 0x1f2160: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x1f2160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1f2164: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f2164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2168: 0x24441801  addiu       $a0, $v0, 0x1801
    ctx->pc = 0x1f2168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
    // 0x1f216c: 0xc049c86  jal         func_127218
    ctx->pc = 0x1F216Cu;
    SET_GPR_U32(ctx, 31, 0x1F2174u);
    ctx->pc = 0x1F2170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F216Cu;
            // 0x1f2170: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2174u; }
        if (ctx->pc != 0x1F2174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2174u; }
        if (ctx->pc != 0x1F2174u) { return; }
    }
    ctx->pc = 0x1F2174u;
label_1f2174:
    // 0x1f2174: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f2174u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f2178: 0x2a030010  slti        $v1, $s0, 0x10
    ctx->pc = 0x1f2178u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1f217c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F217Cu;
    {
        const bool branch_taken_0x1f217c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F217Cu;
            // 0x1f2180: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f217c) {
            ctx->pc = 0x1F2160u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f2160;
        }
    }
    ctx->pc = 0x1F2184u;
    // 0x1f2184: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f2184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2188: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f2188u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f218c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1f218cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f2190:
    // 0x1f2190: 0x2463821  addu        $a3, $s2, $a2
    ctx->pc = 0x1f2190u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1f2194: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1f2194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1f2198: 0xace41a04  sw          $a0, 0x1A04($a3)
    ctx->pc = 0x1f2198u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6660), GPR_U32(ctx, 4));
    // 0x1f219c: 0x28a30010  slti        $v1, $a1, 0x10
    ctx->pc = 0x1f219cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1f21a0: 0xace41a08  sw          $a0, 0x1A08($a3)
    ctx->pc = 0x1f21a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6664), GPR_U32(ctx, 4));
    // 0x1f21a4: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x1f21a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x1f21a8: 0xace41a0c  sw          $a0, 0x1A0C($a3)
    ctx->pc = 0x1f21a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6668), GPR_U32(ctx, 4));
    // 0x1f21ac: 0xace41a10  sw          $a0, 0x1A10($a3)
    ctx->pc = 0x1f21acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6672), GPR_U32(ctx, 4));
    // 0x1f21b0: 0xace41a14  sw          $a0, 0x1A14($a3)
    ctx->pc = 0x1f21b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6676), GPR_U32(ctx, 4));
    // 0x1f21b4: 0xace41a18  sw          $a0, 0x1A18($a3)
    ctx->pc = 0x1f21b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6680), GPR_U32(ctx, 4));
    // 0x1f21b8: 0xace41a1c  sw          $a0, 0x1A1C($a3)
    ctx->pc = 0x1f21b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6684), GPR_U32(ctx, 4));
    // 0x1f21bc: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1F21BCu;
    {
        const bool branch_taken_0x1f21bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F21C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F21BCu;
            // 0x1f21c0: 0xace41a20  sw          $a0, 0x1A20($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 6688), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f21bc) {
            ctx->pc = 0x1F2190u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f2190;
        }
    }
    ctx->pc = 0x1F21C4u;
    // 0x1f21c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f21c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f21c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f21c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f21cc:
    // 0x1f21cc: 0x2453021  addu        $a2, $s2, $a1
    ctx->pc = 0x1f21ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1f21d0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1f21d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1f21d4: 0xacc01a44  sw          $zero, 0x1A44($a2)
    ctx->pc = 0x1f21d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6724), GPR_U32(ctx, 0));
    // 0x1f21d8: 0x28830010  slti        $v1, $a0, 0x10
    ctx->pc = 0x1f21d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1f21dc: 0xacc01a84  sw          $zero, 0x1A84($a2)
    ctx->pc = 0x1f21dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6788), GPR_U32(ctx, 0));
    // 0x1f21e0: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1f21e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1f21e4: 0xacc01a48  sw          $zero, 0x1A48($a2)
    ctx->pc = 0x1f21e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6728), GPR_U32(ctx, 0));
    // 0x1f21e8: 0xacc01a88  sw          $zero, 0x1A88($a2)
    ctx->pc = 0x1f21e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6792), GPR_U32(ctx, 0));
    // 0x1f21ec: 0xacc01a4c  sw          $zero, 0x1A4C($a2)
    ctx->pc = 0x1f21ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6732), GPR_U32(ctx, 0));
    // 0x1f21f0: 0xacc01a8c  sw          $zero, 0x1A8C($a2)
    ctx->pc = 0x1f21f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6796), GPR_U32(ctx, 0));
    // 0x1f21f4: 0xacc01a50  sw          $zero, 0x1A50($a2)
    ctx->pc = 0x1f21f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6736), GPR_U32(ctx, 0));
    // 0x1f21f8: 0xacc01a90  sw          $zero, 0x1A90($a2)
    ctx->pc = 0x1f21f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6800), GPR_U32(ctx, 0));
    // 0x1f21fc: 0xacc01a54  sw          $zero, 0x1A54($a2)
    ctx->pc = 0x1f21fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6740), GPR_U32(ctx, 0));
    // 0x1f2200: 0xacc01a94  sw          $zero, 0x1A94($a2)
    ctx->pc = 0x1f2200u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6804), GPR_U32(ctx, 0));
    // 0x1f2204: 0xacc01a58  sw          $zero, 0x1A58($a2)
    ctx->pc = 0x1f2204u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6744), GPR_U32(ctx, 0));
    // 0x1f2208: 0xacc01a98  sw          $zero, 0x1A98($a2)
    ctx->pc = 0x1f2208u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6808), GPR_U32(ctx, 0));
    // 0x1f220c: 0xacc01a5c  sw          $zero, 0x1A5C($a2)
    ctx->pc = 0x1f220cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6748), GPR_U32(ctx, 0));
    // 0x1f2210: 0xacc01a9c  sw          $zero, 0x1A9C($a2)
    ctx->pc = 0x1f2210u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6812), GPR_U32(ctx, 0));
    // 0x1f2214: 0xacc01a60  sw          $zero, 0x1A60($a2)
    ctx->pc = 0x1f2214u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6752), GPR_U32(ctx, 0));
    // 0x1f2218: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1F2218u;
    {
        const bool branch_taken_0x1f2218 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F221Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2218u;
            // 0x1f221c: 0xacc01aa0  sw          $zero, 0x1AA0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 6816), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2218) {
            ctx->pc = 0x1F21CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f21cc;
        }
    }
    ctx->pc = 0x1F2220u;
    // 0x1f2220: 0xae401ac4  sw          $zero, 0x1AC4($s2)
    ctx->pc = 0x1f2220u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6852), GPR_U32(ctx, 0));
    // 0x1f2224: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f2224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2228: 0xae401ac8  sw          $zero, 0x1AC8($s2)
    ctx->pc = 0x1f2228u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6856), GPR_U32(ctx, 0));
    // 0x1f222c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1f222cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f2230: 0xae431acc  sw          $v1, 0x1ACC($s2)
    ctx->pc = 0x1f2230u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6860), GPR_U32(ctx, 3));
    // 0x1f2234: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f2234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2238: 0xae401ad0  sw          $zero, 0x1AD0($s2)
    ctx->pc = 0x1f2238u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6864), GPR_U32(ctx, 0));
    // 0x1f223c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f223cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2240: 0xae401ad4  sw          $zero, 0x1AD4($s2)
    ctx->pc = 0x1f2240u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6868), GPR_U32(ctx, 0));
    // 0x1f2244: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f2244u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2248: 0xae401ad8  sw          $zero, 0x1AD8($s2)
    ctx->pc = 0x1f2248u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6872), GPR_U32(ctx, 0));
    // 0x1f224c: 0xae441adc  sw          $a0, 0x1ADC($s2)
    ctx->pc = 0x1f224cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6876), GPR_U32(ctx, 4));
    // 0x1f2250: 0xae441ae0  sw          $a0, 0x1AE0($s2)
    ctx->pc = 0x1f2250u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6880), GPR_U32(ctx, 4));
    // 0x1f2254: 0xae441ae4  sw          $a0, 0x1AE4($s2)
    ctx->pc = 0x1f2254u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6884), GPR_U32(ctx, 4));
    // 0x1f2258: 0xae401ae8  sw          $zero, 0x1AE8($s2)
    ctx->pc = 0x1f2258u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6888), GPR_U32(ctx, 0));
    // 0x1f225c: 0xae401aec  sw          $zero, 0x1AEC($s2)
    ctx->pc = 0x1f225cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6892), GPR_U32(ctx, 0));
    // 0x1f2260: 0xae401af0  sw          $zero, 0x1AF0($s2)
    ctx->pc = 0x1f2260u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6896), GPR_U32(ctx, 0));
    // 0x1f2264: 0xae401af4  sw          $zero, 0x1AF4($s2)
    ctx->pc = 0x1f2264u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6900), GPR_U32(ctx, 0));
    // 0x1f2268: 0xae401af8  sw          $zero, 0x1AF8($s2)
    ctx->pc = 0x1f2268u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6904), GPR_U32(ctx, 0));
    // 0x1f226c: 0xae401afc  sw          $zero, 0x1AFC($s2)
    ctx->pc = 0x1f226cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6908), GPR_U32(ctx, 0));
    // 0x1f2270: 0xae401b00  sw          $zero, 0x1B00($s2)
    ctx->pc = 0x1f2270u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6912), GPR_U32(ctx, 0));
    // 0x1f2274: 0xae441b04  sw          $a0, 0x1B04($s2)
    ctx->pc = 0x1f2274u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6916), GPR_U32(ctx, 4));
    // 0x1f2278: 0xae441b08  sw          $a0, 0x1B08($s2)
    ctx->pc = 0x1f2278u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6920), GPR_U32(ctx, 4));
    // 0x1f227c: 0xae441b0c  sw          $a0, 0x1B0C($s2)
    ctx->pc = 0x1f227cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6924), GPR_U32(ctx, 4));
    // 0x1f2280: 0xae441b10  sw          $a0, 0x1B10($s2)
    ctx->pc = 0x1f2280u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6928), GPR_U32(ctx, 4));
    // 0x1f2284: 0xae401b14  sw          $zero, 0x1B14($s2)
    ctx->pc = 0x1f2284u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6932), GPR_U32(ctx, 0));
    // 0x1f2288: 0xae401b18  sw          $zero, 0x1B18($s2)
    ctx->pc = 0x1f2288u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6936), GPR_U32(ctx, 0));
    // 0x1f228c: 0xae401b1c  sw          $zero, 0x1B1C($s2)
    ctx->pc = 0x1f228cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6940), GPR_U32(ctx, 0));
    // 0x1f2290: 0xae401b20  sw          $zero, 0x1B20($s2)
    ctx->pc = 0x1f2290u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6944), GPR_U32(ctx, 0));
    // 0x1f2294: 0xae401b24  sw          $zero, 0x1B24($s2)
    ctx->pc = 0x1f2294u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6948), GPR_U32(ctx, 0));
    // 0x1f2298: 0xae401b28  sw          $zero, 0x1B28($s2)
    ctx->pc = 0x1f2298u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6952), GPR_U32(ctx, 0));
    // 0x1f229c: 0xae401b30  sw          $zero, 0x1B30($s2)
    ctx->pc = 0x1f229cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6960), GPR_U32(ctx, 0));
    // 0x1f22a0: 0xae401b34  sw          $zero, 0x1B34($s2)
    ctx->pc = 0x1f22a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6964), GPR_U32(ctx, 0));
    // 0x1f22a4: 0xae401b3c  sw          $zero, 0x1B3C($s2)
    ctx->pc = 0x1f22a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6972), GPR_U32(ctx, 0));
    // 0x1f22a8: 0xae401b38  sw          $zero, 0x1B38($s2)
    ctx->pc = 0x1f22a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6968), GPR_U32(ctx, 0));
    // 0x1f22ac: 0xae401b40  sw          $zero, 0x1B40($s2)
    ctx->pc = 0x1f22acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6976), GPR_U32(ctx, 0));
label_1f22b0:
    // 0x1f22b0: 0x2464021  addu        $t0, $s2, $a2
    ctx->pc = 0x1f22b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1f22b4: 0x2471821  addu        $v1, $s2, $a3
    ctx->pc = 0x1f22b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x1f22b8: 0xad001b44  sw          $zero, 0x1B44($t0)
    ctx->pc = 0x1f22b8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 6980), GPR_U32(ctx, 0));
    // 0x1f22bc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f22bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f22c0: 0xac601b94  sw          $zero, 0x1B94($v1)
    ctx->pc = 0x1f22c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7060), GPR_U32(ctx, 0));
    // 0x1f22c4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1f22c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1f22c8: 0xac601b98  sw          $zero, 0x1B98($v1)
    ctx->pc = 0x1f22c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7064), GPR_U32(ctx, 0));
    // 0x1f22cc: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x1f22ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x1f22d0: 0xad001c34  sw          $zero, 0x1C34($t0)
    ctx->pc = 0x1f22d0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7220), GPR_U32(ctx, 0));
    // 0x1f22d4: 0x28a30014  slti        $v1, $a1, 0x14
    ctx->pc = 0x1f22d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x1f22d8: 0xad041c84  sw          $a0, 0x1C84($t0)
    ctx->pc = 0x1f22d8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7300), GPR_U32(ctx, 4));
    // 0x1f22dc: 0xad001cd4  sw          $zero, 0x1CD4($t0)
    ctx->pc = 0x1f22dcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7380), GPR_U32(ctx, 0));
    // 0x1f22e0: 0xad001d24  sw          $zero, 0x1D24($t0)
    ctx->pc = 0x1f22e0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7460), GPR_U32(ctx, 0));
    // 0x1f22e4: 0xad001d74  sw          $zero, 0x1D74($t0)
    ctx->pc = 0x1f22e4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7540), GPR_U32(ctx, 0));
    // 0x1f22e8: 0xad001dc4  sw          $zero, 0x1DC4($t0)
    ctx->pc = 0x1f22e8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7620), GPR_U32(ctx, 0));
    // 0x1f22ec: 0xad001e14  sw          $zero, 0x1E14($t0)
    ctx->pc = 0x1f22ecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7700), GPR_U32(ctx, 0));
    // 0x1f22f0: 0xad041e64  sw          $a0, 0x1E64($t0)
    ctx->pc = 0x1f22f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7780), GPR_U32(ctx, 4));
    // 0x1f22f4: 0xad001eb4  sw          $zero, 0x1EB4($t0)
    ctx->pc = 0x1f22f4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7860), GPR_U32(ctx, 0));
    // 0x1f22f8: 0xad001f04  sw          $zero, 0x1F04($t0)
    ctx->pc = 0x1f22f8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7940), GPR_U32(ctx, 0));
    // 0x1f22fc: 0xad001f54  sw          $zero, 0x1F54($t0)
    ctx->pc = 0x1f22fcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8020), GPR_U32(ctx, 0));
    // 0x1f2300: 0xad041fa4  sw          $a0, 0x1FA4($t0)
    ctx->pc = 0x1f2300u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8100), GPR_U32(ctx, 4));
    // 0x1f2304: 0xad041ff4  sw          $a0, 0x1FF4($t0)
    ctx->pc = 0x1f2304u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8180), GPR_U32(ctx, 4));
    // 0x1f2308: 0xad002044  sw          $zero, 0x2044($t0)
    ctx->pc = 0x1f2308u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8260), GPR_U32(ctx, 0));
    // 0x1f230c: 0xad002094  sw          $zero, 0x2094($t0)
    ctx->pc = 0x1f230cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8340), GPR_U32(ctx, 0));
    // 0x1f2310: 0xad0020e4  sw          $zero, 0x20E4($t0)
    ctx->pc = 0x1f2310u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8420), GPR_U32(ctx, 0));
    // 0x1f2314: 0xad002134  sw          $zero, 0x2134($t0)
    ctx->pc = 0x1f2314u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8500), GPR_U32(ctx, 0));
    // 0x1f2318: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1F2318u;
    {
        const bool branch_taken_0x1f2318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F231Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2318u;
            // 0x1f231c: 0xad002184  sw          $zero, 0x2184($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8580), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2318) {
            ctx->pc = 0x1F22B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f22b0;
        }
    }
    ctx->pc = 0x1F2320u;
    // 0x1f2320: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f2320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f2324: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f2324u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f2328: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f2328u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f232c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f232cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f2330: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2330u;
            // 0x1f2334: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F2338u;
}
