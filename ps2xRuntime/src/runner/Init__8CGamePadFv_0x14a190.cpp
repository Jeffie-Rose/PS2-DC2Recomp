#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Init__8CGamePadFv
// Address: 0x14a190 - 0x14a38c
void Init__8CGamePadFv_0x14a190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__8CGamePadFv_0x14a190");
#endif

    switch (ctx->pc) {
        case 0x14a1bcu: goto label_14a1bc;
        case 0x14a1c4u: goto label_14a1c4;
        case 0x14a1e4u: goto label_14a1e4;
        case 0x14a204u: goto label_14a204;
        case 0x14a270u: goto label_14a270;
        case 0x14a310u: goto label_14a310;
        case 0x14a324u: goto label_14a324;
        case 0x14a334u: goto label_14a334;
        case 0x14a33cu: goto label_14a33c;
        case 0x14a350u: goto label_14a350;
        case 0x14a364u: goto label_14a364;
        case 0x14a374u: goto label_14a374;
        case 0x14a37cu: goto label_14a37c;
        default: break;
    }

    ctx->pc = 0x14a190u;

    // 0x14a190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14a190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14a194: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14a194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a198: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14a198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14a19c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14a19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14a1a0: 0xac80045c  sw          $zero, 0x45C($a0)
    ctx->pc = 0x14a1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1116), GPR_U32(ctx, 0));
    // 0x14a1a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14a1a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a1a8: 0xac800460  sw          $zero, 0x460($a0)
    ctx->pc = 0x14a1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1120), GPR_U32(ctx, 0));
    // 0x14a1ac: 0xac820468  sw          $v0, 0x468($a0)
    ctx->pc = 0x14a1acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1128), GPR_U32(ctx, 2));
    // 0x14a1b0: 0xac80046c  sw          $zero, 0x46C($a0)
    ctx->pc = 0x14a1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1132), GPR_U32(ctx, 0));
    // 0x14a1b4: 0xac800470  sw          $zero, 0x470($a0)
    ctx->pc = 0x14a1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1136), GPR_U32(ctx, 0));
    // 0x14a1b8: 0xac800474  sw          $zero, 0x474($a0)
    ctx->pc = 0x14a1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1140), GPR_U32(ctx, 0));
label_14a1bc:
    // 0x14a1bc: 0xc040cc0  jal         func_103300
    ctx->pc = 0x14A1BCu;
    SET_GPR_U32(ctx, 31, 0x14A1C4u);
    ctx->pc = 0x14A1C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A1BCu;
            // 0x14a1c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103300u;
    if (runtime->hasFunction(0x103300u)) {
        auto targetFn = runtime->lookupFunction(0x103300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A1C4u; }
        if (ctx->pc != 0x14A1C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x103300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A1C4u; }
        if (ctx->pc != 0x14A1C4u) { return; }
    }
    ctx->pc = 0x14A1C4u;
label_14a1c4:
    // 0x14a1c4: 0x0  nop
    ctx->pc = 0x14a1c4u;
    // NOP
    // 0x14a1c8: 0x0  nop
    ctx->pc = 0x14a1c8u;
    // NOP
    // 0x14a1cc: 0x0  nop
    ctx->pc = 0x14a1ccu;
    // NOP
    // 0x14a1d0: 0x0  nop
    ctx->pc = 0x14a1d0u;
    // NOP
    // 0x14a1d4: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x14A1D4u;
    {
        const bool branch_taken_0x14a1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a1d4) {
            ctx->pc = 0x14A1BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14a1bc;
        }
    }
    ctx->pc = 0x14A1DCu;
    // 0x14a1dc: 0xc04844a  jal         func_121128
    ctx->pc = 0x14A1DCu;
    SET_GPR_U32(ctx, 31, 0x14A1E4u);
    ctx->pc = 0x14A1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A1DCu;
            // 0x14a1e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (runtime->hasFunction(0x121128u)) {
        auto targetFn = runtime->lookupFunction(0x121128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A1E4u; }
        if (ctx->pc != 0x14A1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePadInit_0x121128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A1E4u; }
        if (ctx->pc != 0x14A1E4u) { return; }
    }
    ctx->pc = 0x14A1E4u;
label_14a1e4:
    // 0x14a1e4: 0xae000134  sw          $zero, 0x134($s0)
    ctx->pc = 0x14a1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
    // 0x14a1e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14a1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a1ec: 0xae000138  sw          $zero, 0x138($s0)
    ctx->pc = 0x14a1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 0));
    // 0x14a1f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14a1f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a1f4: 0xae00013c  sw          $zero, 0x13C($s0)
    ctx->pc = 0x14a1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 0));
    // 0x14a1f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x14a1f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a1fc: 0xae000140  sw          $zero, 0x140($s0)
    ctx->pc = 0x14a1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
    // 0x14a200: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x14a200u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14a204:
    // 0x14a204: 0x2075021  addu        $t2, $s0, $a3
    ctx->pc = 0x14a204u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x14a208: 0x2081021  addu        $v0, $s0, $t0
    ctx->pc = 0x14a208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x14a20c: 0xad400018  sw          $zero, 0x18($t2)
    ctx->pc = 0x14a20cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 24), GPR_U32(ctx, 0));
    // 0x14a210: 0x1481821  addu        $v1, $t2, $t0
    ctx->pc = 0x14a210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x14a214: 0xad400004  sw          $zero, 0x4($t2)
    ctx->pc = 0x14a214u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 0));
    // 0x14a218: 0x2095821  addu        $t3, $s0, $t1
    ctx->pc = 0x14a218u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x14a21c: 0xad400010  sw          $zero, 0x10($t2)
    ctx->pc = 0x14a21cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 0));
    // 0x14a220: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14a220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a224: 0xad400014  sw          $zero, 0x14($t2)
    ctx->pc = 0x14a224u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 0));
    // 0x14a228: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14a228u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a22c: 0xad400008  sw          $zero, 0x8($t2)
    ctx->pc = 0x14a22cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 0));
    // 0x14a230: 0xad40000c  sw          $zero, 0xC($t2)
    ctx->pc = 0x14a230u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 0));
    // 0x14a234: 0xa140002c  sb          $zero, 0x2C($t2)
    ctx->pc = 0x14a234u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x14a238: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x14a238u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x14a23c: 0xa140002d  sb          $zero, 0x2D($t2)
    ctx->pc = 0x14a23cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 45), (uint8_t)GPR_U32(ctx, 0));
    // 0x14a240: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x14a240u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x14a244: 0xa140002e  sb          $zero, 0x2E($t2)
    ctx->pc = 0x14a244u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 46), (uint8_t)GPR_U32(ctx, 0));
    // 0x14a248: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x14a248u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x14a24c: 0xa140002f  sb          $zero, 0x2F($t2)
    ctx->pc = 0x14a24cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 47), (uint8_t)GPR_U32(ctx, 0));
    // 0x14a250: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x14a250u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x14a254: 0xa1400030  sb          $zero, 0x30($t2)
    ctx->pc = 0x14a254u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x14a258: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x14a258u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x14a25c: 0xa1400031  sb          $zero, 0x31($t2)
    ctx->pc = 0x14a25cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 49), (uint8_t)GPR_U32(ctx, 0));
    // 0x14a260: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x14a260u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x14a264: 0xac400454  sw          $zero, 0x454($v0)
    ctx->pc = 0x14a264u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1108), GPR_U32(ctx, 0));
    // 0x14a268: 0xad600144  sw          $zero, 0x144($t3)
    ctx->pc = 0x14a268u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 324), GPR_U32(ctx, 0));
    // 0x14a26c: 0xad600148  sw          $zero, 0x148($t3)
    ctx->pc = 0x14a26cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 328), GPR_U32(ctx, 0));
label_14a270:
    // 0x14a270: 0x1661821  addu        $v1, $t3, $a2
    ctx->pc = 0x14a270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
    // 0x14a274: 0xac60014c  sw          $zero, 0x14C($v1)
    ctx->pc = 0x14a274u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 332), GPR_U32(ctx, 0));
    // 0x14a278: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x14a278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x14a27c: 0xac60024c  sw          $zero, 0x24C($v1)
    ctx->pc = 0x14a27cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 588), GPR_U32(ctx, 0));
    // 0x14a280: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x14a280u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x14a284: 0xac6001cc  sw          $zero, 0x1CC($v1)
    ctx->pc = 0x14a284u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 460), GPR_U32(ctx, 0));
    // 0x14a288: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x14a288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x14a28c: 0xac600150  sw          $zero, 0x150($v1)
    ctx->pc = 0x14a28cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 336), GPR_U32(ctx, 0));
    // 0x14a290: 0xac600250  sw          $zero, 0x250($v1)
    ctx->pc = 0x14a290u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 0));
    // 0x14a294: 0xac6001d0  sw          $zero, 0x1D0($v1)
    ctx->pc = 0x14a294u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 464), GPR_U32(ctx, 0));
    // 0x14a298: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x14a298u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x14a29c: 0xac600254  sw          $zero, 0x254($v1)
    ctx->pc = 0x14a29cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 0));
    // 0x14a2a0: 0xac6001d4  sw          $zero, 0x1D4($v1)
    ctx->pc = 0x14a2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 468), GPR_U32(ctx, 0));
    // 0x14a2a4: 0xac600158  sw          $zero, 0x158($v1)
    ctx->pc = 0x14a2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 344), GPR_U32(ctx, 0));
    // 0x14a2a8: 0xac600258  sw          $zero, 0x258($v1)
    ctx->pc = 0x14a2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 600), GPR_U32(ctx, 0));
    // 0x14a2ac: 0xac6001d8  sw          $zero, 0x1D8($v1)
    ctx->pc = 0x14a2acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 472), GPR_U32(ctx, 0));
    // 0x14a2b0: 0xac60015c  sw          $zero, 0x15C($v1)
    ctx->pc = 0x14a2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 348), GPR_U32(ctx, 0));
    // 0x14a2b4: 0xac60025c  sw          $zero, 0x25C($v1)
    ctx->pc = 0x14a2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 604), GPR_U32(ctx, 0));
    // 0x14a2b8: 0xac6001dc  sw          $zero, 0x1DC($v1)
    ctx->pc = 0x14a2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 476), GPR_U32(ctx, 0));
    // 0x14a2bc: 0xac600160  sw          $zero, 0x160($v1)
    ctx->pc = 0x14a2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 352), GPR_U32(ctx, 0));
    // 0x14a2c0: 0xac600260  sw          $zero, 0x260($v1)
    ctx->pc = 0x14a2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 608), GPR_U32(ctx, 0));
    // 0x14a2c4: 0xac6001e0  sw          $zero, 0x1E0($v1)
    ctx->pc = 0x14a2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 480), GPR_U32(ctx, 0));
    // 0x14a2c8: 0xac600164  sw          $zero, 0x164($v1)
    ctx->pc = 0x14a2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 356), GPR_U32(ctx, 0));
    // 0x14a2cc: 0xac600264  sw          $zero, 0x264($v1)
    ctx->pc = 0x14a2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 612), GPR_U32(ctx, 0));
    // 0x14a2d0: 0xac6001e4  sw          $zero, 0x1E4($v1)
    ctx->pc = 0x14a2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 484), GPR_U32(ctx, 0));
    // 0x14a2d4: 0xac600168  sw          $zero, 0x168($v1)
    ctx->pc = 0x14a2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 360), GPR_U32(ctx, 0));
    // 0x14a2d8: 0xac600268  sw          $zero, 0x268($v1)
    ctx->pc = 0x14a2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 616), GPR_U32(ctx, 0));
    // 0x14a2dc: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x14A2DCu;
    {
        const bool branch_taken_0x14a2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A2DCu;
            // 0x14a2e0: 0xac6001e8  sw          $zero, 0x1E8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 488), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a2dc) {
            ctx->pc = 0x14A270u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14a270;
        }
    }
    ctx->pc = 0x14A2E4u;
    // 0x14a2e4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14a2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14a2e8: 0x24e7004c  addiu       $a3, $a3, 0x4C
    ctx->pc = 0x14a2e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 76));
    // 0x14a2ec: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x14a2ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x14a2f0: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x14a2f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x14a2f4: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x14A2F4u;
    {
        const bool branch_taken_0x14a2f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A2F4u;
            // 0x14a2f8: 0x25290188  addiu       $t1, $t1, 0x188 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 392));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a2f4) {
            ctx->pc = 0x14A204u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14a204;
        }
    }
    ctx->pc = 0x14A2FCu;
    // 0x14a2fc: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x14a2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x14a300: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14a300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a304: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14a304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a308: 0xc0484e2  jal         func_121388
    ctx->pc = 0x14A308u;
    SET_GPR_U32(ctx, 31, 0x14A310u);
    ctx->pc = 0x14A30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A308u;
            // 0x14a30c: 0x24c6b1c0  addiu       $a2, $a2, -0x4E40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121388u;
    if (runtime->hasFunction(0x121388u)) {
        auto targetFn = runtime->lookupFunction(0x121388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A310u; }
        if (ctx->pc != 0x14A310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePadPortOpen_0x121388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A310u; }
        if (ctx->pc != 0x14A310u) { return; }
    }
    ctx->pc = 0x14A310u;
label_14a310:
    // 0x14a310: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14A310u;
    {
        const bool branch_taken_0x14a310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A310u;
            // 0x14a314: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a310) {
            ctx->pc = 0x14A32Cu;
            goto label_14a32c;
        }
    }
    ctx->pc = 0x14A318u;
    // 0x14a318: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x14a318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x14a31c: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x14A31Cu;
    SET_GPR_U32(ctx, 31, 0x14A324u);
    ctx->pc = 0x14A320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A31Cu;
            // 0x14a320: 0x24842850  addiu       $a0, $a0, 0x2850 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A324u; }
        if (ctx->pc != 0x14A324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A324u; }
        if (ctx->pc != 0x14A324u) { return; }
    }
    ctx->pc = 0x14A324u;
label_14a324:
    // 0x14a324: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x14A324u;
    {
        const bool branch_taken_0x14a324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A324u;
            // 0x14a328: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a324) {
            ctx->pc = 0x14A380u;
            goto label_14a380;
        }
    }
    ctx->pc = 0x14A32Cu;
label_14a32c:
    // 0x14a32c: 0xc040cc0  jal         func_103300
    ctx->pc = 0x14A32Cu;
    SET_GPR_U32(ctx, 31, 0x14A334u);
    ctx->pc = 0x103300u;
    if (runtime->hasFunction(0x103300u)) {
        auto targetFn = runtime->lookupFunction(0x103300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A334u; }
        if (ctx->pc != 0x14A334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x103300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A334u; }
        if (ctx->pc != 0x14A334u) { return; }
    }
    ctx->pc = 0x14A334u;
label_14a334:
    // 0x14a334: 0xc040cc0  jal         func_103300
    ctx->pc = 0x14A334u;
    SET_GPR_U32(ctx, 31, 0x14A33Cu);
    ctx->pc = 0x14A338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A334u;
            // 0x14a338: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103300u;
    if (runtime->hasFunction(0x103300u)) {
        auto targetFn = runtime->lookupFunction(0x103300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A33Cu; }
        if (ctx->pc != 0x14A33Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x103300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A33Cu; }
        if (ctx->pc != 0x14A33Cu) { return; }
    }
    ctx->pc = 0x14A33Cu;
label_14a33c:
    // 0x14a33c: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x14a33cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x14a340: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14a340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a344: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14a344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a348: 0xc0484e2  jal         func_121388
    ctx->pc = 0x14A348u;
    SET_GPR_U32(ctx, 31, 0x14A350u);
    ctx->pc = 0x14A34Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A348u;
            // 0x14a34c: 0x24c6b5c0  addiu       $a2, $a2, -0x4A40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121388u;
    if (runtime->hasFunction(0x121388u)) {
        auto targetFn = runtime->lookupFunction(0x121388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A350u; }
        if (ctx->pc != 0x14A350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePadPortOpen_0x121388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A350u; }
        if (ctx->pc != 0x14A350u) { return; }
    }
    ctx->pc = 0x14A350u;
label_14a350:
    // 0x14a350: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14A350u;
    {
        const bool branch_taken_0x14a350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A350u;
            // 0x14a354: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a350) {
            ctx->pc = 0x14A36Cu;
            goto label_14a36c;
        }
    }
    ctx->pc = 0x14A358u;
    // 0x14a358: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x14a358u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x14a35c: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x14A35Cu;
    SET_GPR_U32(ctx, 31, 0x14A364u);
    ctx->pc = 0x14A360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A35Cu;
            // 0x14a360: 0x24842850  addiu       $a0, $a0, 0x2850 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A364u; }
        if (ctx->pc != 0x14A364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A364u; }
        if (ctx->pc != 0x14A364u) { return; }
    }
    ctx->pc = 0x14A364u;
label_14a364:
    // 0x14a364: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14A364u;
    {
        const bool branch_taken_0x14a364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a364) {
            ctx->pc = 0x14A37Cu;
            goto label_14a37c;
        }
    }
    ctx->pc = 0x14A36Cu;
label_14a36c:
    // 0x14a36c: 0xc040cc0  jal         func_103300
    ctx->pc = 0x14A36Cu;
    SET_GPR_U32(ctx, 31, 0x14A374u);
    ctx->pc = 0x103300u;
    if (runtime->hasFunction(0x103300u)) {
        auto targetFn = runtime->lookupFunction(0x103300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A374u; }
        if (ctx->pc != 0x14A374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x103300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A374u; }
        if (ctx->pc != 0x14A374u) { return; }
    }
    ctx->pc = 0x14A374u;
label_14a374:
    // 0x14a374: 0xc040cc0  jal         func_103300
    ctx->pc = 0x14A374u;
    SET_GPR_U32(ctx, 31, 0x14A37Cu);
    ctx->pc = 0x14A378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A374u;
            // 0x14a378: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103300u;
    if (runtime->hasFunction(0x103300u)) {
        auto targetFn = runtime->lookupFunction(0x103300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A37Cu; }
        if (ctx->pc != 0x14A37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x103300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A37Cu; }
        if (ctx->pc != 0x14A37Cu) { return; }
    }
    ctx->pc = 0x14A37Cu;
label_14a37c:
    // 0x14a37c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14a37cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_14a380:
    // 0x14a380: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14a380u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a384: 0x3e00008  jr          $ra
    ctx->pc = 0x14A384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A384u;
            // 0x14a388: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14A38Cu;
}
