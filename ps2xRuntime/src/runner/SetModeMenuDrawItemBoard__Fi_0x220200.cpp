#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetModeMenuDrawItemBoard__Fi
// Address: 0x220200 - 0x220664
void SetModeMenuDrawItemBoard__Fi_0x220200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetModeMenuDrawItemBoard__Fi_0x220200");
#endif

    switch (ctx->pc) {
        case 0x22021cu: goto label_22021c;
        case 0x220224u: goto label_220224;
        case 0x220240u: goto label_220240;
        case 0x2202c8u: goto label_2202c8;
        case 0x2202f8u: goto label_2202f8;
        case 0x2203dcu: goto label_2203dc;
        case 0x220474u: goto label_220474;
        case 0x22050cu: goto label_22050c;
        case 0x220554u: goto label_220554;
        case 0x220568u: goto label_220568;
        case 0x220578u: goto label_220578;
        case 0x22058cu: goto label_22058c;
        case 0x2205e0u: goto label_2205e0;
        case 0x22062cu: goto label_22062c;
        default: break;
    }

    ctx->pc = 0x220200u;

    // 0x220200: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x220200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x220204: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x220204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x220208: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x220208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22020c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22020cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x220210: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x220210u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220214: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x220214u;
    SET_GPR_U32(ctx, 31, 0x22021Cu);
    ctx->pc = 0x220218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220214u;
            // 0x220218: 0xaf809348  sw          $zero, -0x6CB8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939464), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22021Cu; }
        if (ctx->pc != 0x22021Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22021Cu; }
        if (ctx->pc != 0x22021Cu) { return; }
    }
    ctx->pc = 0x22021Cu;
label_22021c:
    // 0x22021c: 0xc066e94  jal         func_19BA50
    ctx->pc = 0x22021Cu;
    SET_GPR_U32(ctx, 31, 0x220224u);
    ctx->pc = 0x220220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22021Cu;
            // 0x220220: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BA50u;
    if (runtime->hasFunction(0x19BA50u)) {
        auto targetFn = runtime->lookupFunction(0x19BA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220224u; }
        if (ctx->pc != 0x220224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowPartyMember__16CUserDataManagerFv_0x19ba50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220224u; }
        if (ctx->pc != 0x220224u) { return; }
    }
    ctx->pc = 0x220224u;
label_220224:
    // 0x220224: 0x16200035  bnez        $s1, . + 4 + (0x35 << 2)
    ctx->pc = 0x220224u;
    {
        const bool branch_taken_0x220224 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x220228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220224u;
            // 0x220228: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220224) {
            ctx->pc = 0x2202FCu;
            goto label_2202fc;
        }
    }
    ctx->pc = 0x22022Cu;
    // 0x22022c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22022cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220230: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x220230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220234: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x220234u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220238: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x220238u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x22023c: 0x2484cb70  addiu       $a0, $a0, -0x3490
    ctx->pc = 0x22023cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953840));
label_220240:
    // 0x220240: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x220240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x220244: 0x874821  addu        $t1, $a0, $a3
    ctx->pc = 0x220244u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x220248: 0x8c23d8d0  lw          $v1, -0x2730($at)
    ctx->pc = 0x220248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957264)));
    // 0x22024c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x22024cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x220250: 0x28c2008e  slti        $v0, $a2, 0x8E
    ctx->pc = 0x220250u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)142) ? 1 : 0);
    // 0x220254: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x220254u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x220258: 0x654021  addu        $t0, $v1, $a1
    ctx->pc = 0x220258u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x22025c: 0xad280000  sw          $t0, 0x0($t1)
    ctx->pc = 0x22025cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
    // 0x220260: 0x2503006c  addiu       $v1, $t0, 0x6C
    ctx->pc = 0x220260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 108));
    // 0x220264: 0xad230004  sw          $v1, 0x4($t1)
    ctx->pc = 0x220264u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 3));
    // 0x220268: 0x24a50360  addiu       $a1, $a1, 0x360
    ctx->pc = 0x220268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 864));
    // 0x22026c: 0x250300d8  addiu       $v1, $t0, 0xD8
    ctx->pc = 0x22026cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 216));
    // 0x220270: 0xad230008  sw          $v1, 0x8($t1)
    ctx->pc = 0x220270u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 3));
    // 0x220274: 0x25030144  addiu       $v1, $t0, 0x144
    ctx->pc = 0x220274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 324));
    // 0x220278: 0xad23000c  sw          $v1, 0xC($t1)
    ctx->pc = 0x220278u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 3));
    // 0x22027c: 0x250301b0  addiu       $v1, $t0, 0x1B0
    ctx->pc = 0x22027cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 432));
    // 0x220280: 0xad230010  sw          $v1, 0x10($t1)
    ctx->pc = 0x220280u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 3));
    // 0x220284: 0x2503021c  addiu       $v1, $t0, 0x21C
    ctx->pc = 0x220284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 540));
    // 0x220288: 0xad230014  sw          $v1, 0x14($t1)
    ctx->pc = 0x220288u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 3));
    // 0x22028c: 0x25030288  addiu       $v1, $t0, 0x288
    ctx->pc = 0x22028cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 648));
    // 0x220290: 0xad230018  sw          $v1, 0x18($t1)
    ctx->pc = 0x220290u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 3));
    // 0x220294: 0x250302f4  addiu       $v1, $t0, 0x2F4
    ctx->pc = 0x220294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 756));
    // 0x220298: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x220298u;
    {
        const bool branch_taken_0x220298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22029Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220298u;
            // 0x22029c: 0xad23001c  sw          $v1, 0x1C($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220298) {
            ctx->pc = 0x220240u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_220240;
        }
    }
    ctx->pc = 0x2202A0u;
    // 0x2202a0: 0x28c10096  slti        $at, $a2, 0x96
    ctx->pc = 0x2202a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x2202a4: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x2202A4u;
    {
        const bool branch_taken_0x2202a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2202A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2202A4u;
            // 0x2202a8: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2202a4) {
            ctx->pc = 0x2202F0u;
            goto label_2202f0;
        }
    }
    ctx->pc = 0x2202ACu;
    // 0x2202ac: 0x64080  sll         $t0, $a2, 2
    ctx->pc = 0x2202acu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2202b0: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x2202b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2202b4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2202b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2202b8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2202b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2202bc: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x2202bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2202c0: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2202c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x2202c4: 0x2484cb70  addiu       $a0, $a0, -0x3490
    ctx->pc = 0x2202c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953840));
label_2202c8:
    // 0x2202c8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2202c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2202cc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2202ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2202d0: 0x8c25d8d0  lw          $a1, -0x2730($at)
    ctx->pc = 0x2202d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957264)));
    // 0x2202d4: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x2202d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x2202d8: 0x28c20096  slti        $v0, $a2, 0x96
    ctx->pc = 0x2202d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x2202dc: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2202dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2202e0: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x2202e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2202e4: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x2202e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x2202e8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2202E8u;
    {
        const bool branch_taken_0x2202e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2202ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2202E8u;
            // 0x2202ec: 0x24e7006c  addiu       $a3, $a3, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2202e8) {
            ctx->pc = 0x2202C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2202c8;
        }
    }
    ctx->pc = 0x2202F0u;
label_2202f0:
    // 0x2202f0: 0xc068644  jal         func_1A1910
    ctx->pc = 0x2202F0u;
    SET_GPR_U32(ctx, 31, 0x2202F8u);
    ctx->pc = 0x2202F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2202F0u;
            // 0x2202f4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1910u;
    if (runtime->hasFunction(0x1A1910u)) {
        auto targetFn = runtime->lookupFunction(0x1A1910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2202F8u; }
        if (ctx->pc != 0x2202F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowBagMax__Fi_0x1a1910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2202F8u; }
        if (ctx->pc != 0x2202F8u) { return; }
    }
    ctx->pc = 0x2202F8u;
label_2202f8:
    // 0x2202f8: 0xaf829348  sw          $v0, -0x6CB8($gp)
    ctx->pc = 0x2202f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939464), GPR_U32(ctx, 2));
label_2202fc:
    // 0x2202fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2202fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x220300: 0x16220043  bne         $s1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x220300u;
    {
        const bool branch_taken_0x220300 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x220304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220300u;
            // 0x220304: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x220300) {
            ctx->pc = 0x220410u;
            goto label_220410;
        }
    }
    ctx->pc = 0x220308u;
    // 0x220308: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x220308u;
    {
        const bool branch_taken_0x220308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22030Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220308u;
            // 0x22030c: 0x32020002  andi        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x220308) {
            ctx->pc = 0x220364u;
            goto label_220364;
        }
    }
    ctx->pc = 0x220310u;
    // 0x220310: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x220310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x220314: 0x8f829348  lw          $v0, -0x6CB8($gp)
    ctx->pc = 0x220314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939464)));
    // 0x220318: 0x8c23d8c0  lw          $v1, -0x2740($at)
    ctx->pc = 0x220318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957248)));
    // 0x22031c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x22031cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x220320: 0x2484cb70  addiu       $a0, $a0, -0x3490
    ctx->pc = 0x220320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953840));
    // 0x220324: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x220324u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x220328: 0x24650170  addiu       $a1, $v1, 0x170
    ctx->pc = 0x220328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 368));
    // 0x22032c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x22032cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x220330: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x220330u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x220334: 0x246301dc  addiu       $v1, $v1, 0x1DC
    ctx->pc = 0x220334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 476));
    // 0x220338: 0x8f829348  lw          $v0, -0x6CB8($gp)
    ctx->pc = 0x220338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939464)));
    // 0x22033c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22033cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x220340: 0xaf829348  sw          $v0, -0x6CB8($gp)
    ctx->pc = 0x220340u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939464), GPR_U32(ctx, 2));
    // 0x220344: 0x8f829348  lw          $v0, -0x6CB8($gp)
    ctx->pc = 0x220344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939464)));
    // 0x220348: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x220348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22034c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x22034cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x220350: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x220350u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x220354: 0x8f829348  lw          $v0, -0x6CB8($gp)
    ctx->pc = 0x220354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939464)));
    // 0x220358: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x220358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22035c: 0xaf829348  sw          $v0, -0x6CB8($gp)
    ctx->pc = 0x22035cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939464), GPR_U32(ctx, 2));
    // 0x220360: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x220360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
label_220364:
    // 0x220364: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x220364u;
    {
        const bool branch_taken_0x220364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x220364) {
            ctx->pc = 0x2203BCu;
            goto label_2203bc;
        }
    }
    ctx->pc = 0x22036Cu;
    // 0x22036c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x22036cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x220370: 0x8f829348  lw          $v0, -0x6CB8($gp)
    ctx->pc = 0x220370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939464)));
    // 0x220374: 0x8c23d8c4  lw          $v1, -0x273C($at)
    ctx->pc = 0x220374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957252)));
    // 0x220378: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x220378u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x22037c: 0x2484cb70  addiu       $a0, $a0, -0x3490
    ctx->pc = 0x22037cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953840));
    // 0x220380: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x220380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x220384: 0x24650170  addiu       $a1, $v1, 0x170
    ctx->pc = 0x220384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 368));
    // 0x220388: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x220388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22038c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x22038cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x220390: 0x246301dc  addiu       $v1, $v1, 0x1DC
    ctx->pc = 0x220390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 476));
    // 0x220394: 0x8f829348  lw          $v0, -0x6CB8($gp)
    ctx->pc = 0x220394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939464)));
    // 0x220398: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x220398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22039c: 0xaf829348  sw          $v0, -0x6CB8($gp)
    ctx->pc = 0x22039cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939464), GPR_U32(ctx, 2));
    // 0x2203a0: 0x8f829348  lw          $v0, -0x6CB8($gp)
    ctx->pc = 0x2203a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939464)));
    // 0x2203a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2203a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2203a8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2203a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2203ac: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2203acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2203b0: 0x8f829348  lw          $v0, -0x6CB8($gp)
    ctx->pc = 0x2203b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939464)));
    // 0x2203b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2203b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2203b8: 0xaf829348  sw          $v0, -0x6CB8($gp)
    ctx->pc = 0x2203b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939464), GPR_U32(ctx, 2));
label_2203bc:
    // 0x2203bc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2203bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2203c0: 0x8f829348  lw          $v0, -0x6CB8($gp)
    ctx->pc = 0x2203c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939464)));
    // 0x2203c4: 0x8c25d8d0  lw          $a1, -0x2730($at)
    ctx->pc = 0x2203c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957264)));
    // 0x2203c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2203c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2203cc: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x2203ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2203d0: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x2203d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x2203d4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2203d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2203d8: 0x2463cb70  addiu       $v1, $v1, -0x3490
    ctx->pc = 0x2203d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953840));
label_2203dc:
    // 0x2203dc: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x2203dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2203e0: 0x14440006  bne         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2203E0u;
    {
        const bool branch_taken_0x2203e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2203E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2203E0u;
            // 0x2203e4: 0x661021  addu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2203e0) {
            ctx->pc = 0x2203FCu;
            goto label_2203fc;
        }
    }
    ctx->pc = 0x2203E8u;
    // 0x2203e8: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2203e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2203ec: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2203ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2203f0: 0x8f829348  lw          $v0, -0x6CB8($gp)
    ctx->pc = 0x2203f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939464)));
    // 0x2203f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2203f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2203f8: 0xaf829348  sw          $v0, -0x6CB8($gp)
    ctx->pc = 0x2203f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939464), GPR_U32(ctx, 2));
label_2203fc:
    // 0x2203fc: 0x0  nop
    ctx->pc = 0x2203fcu;
    // NOP
    // 0x220400: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x220400u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x220404: 0x28e20096  slti        $v0, $a3, 0x96
    ctx->pc = 0x220404u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x220408: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x220408u;
    {
        const bool branch_taken_0x220408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22040Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220408u;
            // 0x22040c: 0x24a5006c  addiu       $a1, $a1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220408) {
            ctx->pc = 0x2203DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2203dc;
        }
    }
    ctx->pc = 0x220410u;
label_220410:
    // 0x220410: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x220410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x220414: 0x16220024  bne         $s1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x220414u;
    {
        const bool branch_taken_0x220414 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x220418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220414u;
            // 0x220418: 0x32020004  andi        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x220414) {
            ctx->pc = 0x2204A8u;
            goto label_2204a8;
        }
    }
    ctx->pc = 0x22041Cu;
    // 0x22041c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x22041Cu;
    {
        const bool branch_taken_0x22041c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22041c) {
            ctx->pc = 0x220454u;
            goto label_220454;
        }
    }
    ctx->pc = 0x220424u;
    // 0x220424: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x220424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x220428: 0x8f839348  lw          $v1, -0x6CB8($gp)
    ctx->pc = 0x220428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939464)));
    // 0x22042c: 0x8c24d8c8  lw          $a0, -0x2738($at)
    ctx->pc = 0x22042cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957256)));
    // 0x220430: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x220430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x220434: 0x2442cb70  addiu       $v0, $v0, -0x3490
    ctx->pc = 0x220434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953840));
    // 0x220438: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x220438u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22043c: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x22043cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x220440: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x220440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x220444: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x220444u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x220448: 0x8f829348  lw          $v0, -0x6CB8($gp)
    ctx->pc = 0x220448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939464)));
    // 0x22044c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22044cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x220450: 0xaf829348  sw          $v0, -0x6CB8($gp)
    ctx->pc = 0x220450u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939464), GPR_U32(ctx, 2));
label_220454:
    // 0x220454: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x220454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x220458: 0x8f829348  lw          $v0, -0x6CB8($gp)
    ctx->pc = 0x220458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939464)));
    // 0x22045c: 0x8c26d8d0  lw          $a2, -0x2730($at)
    ctx->pc = 0x22045cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957264)));
    // 0x220460: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x220460u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220464: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x220464u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x220468: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x220468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x22046c: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x22046cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x220470: 0x2463cb70  addiu       $v1, $v1, -0x3490
    ctx->pc = 0x220470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953840));
label_220474:
    // 0x220474: 0x80c20004  lb          $v0, 0x4($a2)
    ctx->pc = 0x220474u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x220478: 0x14440006  bne         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x220478u;
    {
        const bool branch_taken_0x220478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x22047Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220478u;
            // 0x22047c: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220478) {
            ctx->pc = 0x220494u;
            goto label_220494;
        }
    }
    ctx->pc = 0x220480u;
    // 0x220480: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x220480u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x220484: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x220484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x220488: 0x8f829348  lw          $v0, -0x6CB8($gp)
    ctx->pc = 0x220488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939464)));
    // 0x22048c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22048cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x220490: 0xaf829348  sw          $v0, -0x6CB8($gp)
    ctx->pc = 0x220490u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939464), GPR_U32(ctx, 2));
label_220494:
    // 0x220494: 0x0  nop
    ctx->pc = 0x220494u;
    // NOP
    // 0x220498: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x220498u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x22049c: 0x28e20096  slti        $v0, $a3, 0x96
    ctx->pc = 0x22049cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x2204a0: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2204A0u;
    {
        const bool branch_taken_0x2204a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2204A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2204A0u;
            // 0x2204a4: 0x24c6006c  addiu       $a2, $a2, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2204a0) {
            ctx->pc = 0x220474u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_220474;
        }
    }
    ctx->pc = 0x2204A8u;
label_2204a8:
    // 0x2204a8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2204a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2204ac: 0x16220024  bne         $s1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2204ACu;
    {
        const bool branch_taken_0x2204ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2204B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2204ACu;
            // 0x2204b0: 0x32020004  andi        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2204ac) {
            ctx->pc = 0x220540u;
            goto label_220540;
        }
    }
    ctx->pc = 0x2204B4u;
    // 0x2204b4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2204B4u;
    {
        const bool branch_taken_0x2204b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2204b4) {
            ctx->pc = 0x2204ECu;
            goto label_2204ec;
        }
    }
    ctx->pc = 0x2204BCu;
    // 0x2204bc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2204bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2204c0: 0x8f839348  lw          $v1, -0x6CB8($gp)
    ctx->pc = 0x2204c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939464)));
    // 0x2204c4: 0x8c24d8c8  lw          $a0, -0x2738($at)
    ctx->pc = 0x2204c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957256)));
    // 0x2204c8: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x2204c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x2204cc: 0x2442cb70  addiu       $v0, $v0, -0x3490
    ctx->pc = 0x2204ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953840));
    // 0x2204d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2204d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2204d4: 0x24840108  addiu       $a0, $a0, 0x108
    ctx->pc = 0x2204d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 264));
    // 0x2204d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2204d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2204dc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2204dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2204e0: 0x8f829348  lw          $v0, -0x6CB8($gp)
    ctx->pc = 0x2204e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939464)));
    // 0x2204e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2204e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2204e8: 0xaf829348  sw          $v0, -0x6CB8($gp)
    ctx->pc = 0x2204e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939464), GPR_U32(ctx, 2));
label_2204ec:
    // 0x2204ec: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2204ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2204f0: 0x8f829348  lw          $v0, -0x6CB8($gp)
    ctx->pc = 0x2204f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939464)));
    // 0x2204f4: 0x8c26d8d0  lw          $a2, -0x2730($at)
    ctx->pc = 0x2204f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957264)));
    // 0x2204f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2204f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2204fc: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x2204fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x220500: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x220500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x220504: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x220504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x220508: 0x2463cb70  addiu       $v1, $v1, -0x3490
    ctx->pc = 0x220508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953840));
label_22050c:
    // 0x22050c: 0x80c20004  lb          $v0, 0x4($a2)
    ctx->pc = 0x22050cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x220510: 0x14440006  bne         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x220510u;
    {
        const bool branch_taken_0x220510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x220514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220510u;
            // 0x220514: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220510) {
            ctx->pc = 0x22052Cu;
            goto label_22052c;
        }
    }
    ctx->pc = 0x220518u;
    // 0x220518: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x220518u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x22051c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x22051cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x220520: 0x8f829348  lw          $v0, -0x6CB8($gp)
    ctx->pc = 0x220520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939464)));
    // 0x220524: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x220524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x220528: 0xaf829348  sw          $v0, -0x6CB8($gp)
    ctx->pc = 0x220528u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939464), GPR_U32(ctx, 2));
label_22052c:
    // 0x22052c: 0x0  nop
    ctx->pc = 0x22052cu;
    // NOP
    // 0x220530: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x220530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x220534: 0x28e20096  slti        $v0, $a3, 0x96
    ctx->pc = 0x220534u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x220538: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x220538u;
    {
        const bool branch_taken_0x220538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22053Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220538u;
            // 0x22053c: 0x24c6006c  addiu       $a2, $a2, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220538) {
            ctx->pc = 0x22050Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22050c;
        }
    }
    ctx->pc = 0x220540u;
label_220540:
    // 0x220540: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x220540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x220544: 0x16220032  bne         $s1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x220544u;
    {
        const bool branch_taken_0x220544 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x220548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220544u;
            // 0x220548: 0x24040135  addiu       $a0, $zero, 0x135 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 309));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220544) {
            ctx->pc = 0x220610u;
            goto label_220610;
        }
    }
    ctx->pc = 0x22054Cu;
    // 0x22054c: 0xc0684dc  jal         func_1A1370
    ctx->pc = 0x22054Cu;
    SET_GPR_U32(ctx, 31, 0x220554u);
    ctx->pc = 0x1A1370u;
    if (runtime->hasFunction(0x1A1370u)) {
        auto targetFn = runtime->lookupFunction(0x1A1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220554u; }
        if (ctx->pc != 0x220554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserItemHaveNum__Fi_0x1a1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220554u; }
        if (ctx->pc != 0x220554u) { return; }
    }
    ctx->pc = 0x220554u;
label_220554:
    // 0x220554: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x220554u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x220558: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x220558u;
    {
        const bool branch_taken_0x220558 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x220558) {
            ctx->pc = 0x2205C0u;
            goto label_2205c0;
        }
    }
    ctx->pc = 0x220560u;
    // 0x220560: 0xc065b18  jal         func_196C60
    ctx->pc = 0x220560u;
    SET_GPR_U32(ctx, 31, 0x220568u);
    ctx->pc = 0x196C60u;
    if (runtime->hasFunction(0x196C60u)) {
        auto targetFn = runtime->lookupFunction(0x196C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220568u; }
        if (ctx->pc != 0x220568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAquariumData__Fv_0x196c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220568u; }
        if (ctx->pc != 0x220568u) { return; }
    }
    ctx->pc = 0x220568u;
label_220568:
    // 0x220568: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x220568u;
    {
        const bool branch_taken_0x220568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22056Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220568u;
            // 0x22056c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220568) {
            ctx->pc = 0x2205C0u;
            goto label_2205c0;
        }
    }
    ctx->pc = 0x220570u;
    // 0x220570: 0xc066888  jal         func_19A220
    ctx->pc = 0x220570u;
    SET_GPR_U32(ctx, 31, 0x220578u);
    ctx->pc = 0x220574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220570u;
            // 0x220574: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A220u;
    if (runtime->hasFunction(0x19A220u)) {
        auto targetFn = runtime->lookupFunction(0x19A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220578u; }
        if (ctx->pc != 0x220578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAquariumFishTop__13CFishAquariumFi_0x19a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220578u; }
        if (ctx->pc != 0x220578u) { return; }
    }
    ctx->pc = 0x220578u;
label_220578:
    // 0x220578: 0x8f839348  lw          $v1, -0x6CB8($gp)
    ctx->pc = 0x220578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939464)));
    // 0x22057c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22057cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220580: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x220580u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x220584: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x220584u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x220588: 0x2484cb70  addiu       $a0, $a0, -0x3490
    ctx->pc = 0x220588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953840));
label_22058c:
    // 0x22058c: 0x84430002  lh          $v1, 0x2($v0)
    ctx->pc = 0x22058cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x220590: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x220590u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x220594: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x220594u;
    {
        const bool branch_taken_0x220594 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x220598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220594u;
            // 0x220598: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220594) {
            ctx->pc = 0x2205B0u;
            goto label_2205b0;
        }
    }
    ctx->pc = 0x22059Cu;
    // 0x22059c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x22059cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2205a0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2205a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2205a4: 0x8f839348  lw          $v1, -0x6CB8($gp)
    ctx->pc = 0x2205a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939464)));
    // 0x2205a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2205a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2205ac: 0xaf839348  sw          $v1, -0x6CB8($gp)
    ctx->pc = 0x2205acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939464), GPR_U32(ctx, 3));
label_2205b0:
    // 0x2205b0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2205b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2205b4: 0x28c30006  slti        $v1, $a2, 0x6
    ctx->pc = 0x2205b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2205b8: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2205B8u;
    {
        const bool branch_taken_0x2205b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2205BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2205B8u;
            // 0x2205bc: 0x2442006c  addiu       $v0, $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2205b8) {
            ctx->pc = 0x22058Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22058c;
        }
    }
    ctx->pc = 0x2205C0u;
label_2205c0:
    // 0x2205c0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2205c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2205c4: 0x8f829348  lw          $v0, -0x6CB8($gp)
    ctx->pc = 0x2205c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939464)));
    // 0x2205c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2205c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2205cc: 0x8c26d8d0  lw          $a2, -0x2730($at)
    ctx->pc = 0x2205ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957264)));
    // 0x2205d0: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x2205d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2205d4: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x2205d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x2205d8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2205d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2205dc: 0x2463cb70  addiu       $v1, $v1, -0x3490
    ctx->pc = 0x2205dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953840));
label_2205e0:
    // 0x2205e0: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x2205e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2205e4: 0x14440006  bne         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2205E4u;
    {
        const bool branch_taken_0x2205e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2205E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2205E4u;
            // 0x2205e8: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2205e4) {
            ctx->pc = 0x220600u;
            goto label_220600;
        }
    }
    ctx->pc = 0x2205ECu;
    // 0x2205ec: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x2205ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x2205f0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2205f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2205f4: 0x8f829348  lw          $v0, -0x6CB8($gp)
    ctx->pc = 0x2205f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939464)));
    // 0x2205f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2205f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2205fc: 0xaf829348  sw          $v0, -0x6CB8($gp)
    ctx->pc = 0x2205fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939464), GPR_U32(ctx, 2));
label_220600:
    // 0x220600: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x220600u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x220604: 0x28e20096  slti        $v0, $a3, 0x96
    ctx->pc = 0x220604u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x220608: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x220608u;
    {
        const bool branch_taken_0x220608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22060Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220608u;
            // 0x22060c: 0x24c6006c  addiu       $a2, $a2, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220608) {
            ctx->pc = 0x2205E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2205e0;
        }
    }
    ctx->pc = 0x220610u;
label_220610:
    // 0x220610: 0x8f829348  lw          $v0, -0x6CB8($gp)
    ctx->pc = 0x220610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939464)));
    // 0x220614: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x220614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220618: 0x28c10096  slti        $at, $a2, 0x96
    ctx->pc = 0x220618u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x22061c: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x22061Cu;
    {
        const bool branch_taken_0x22061c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x220620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22061Cu;
            // 0x220620: 0x62880  sll         $a1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22061c) {
            ctx->pc = 0x22064Cu;
            goto label_22064c;
        }
    }
    ctx->pc = 0x220624u;
    // 0x220624: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x220624u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x220628: 0x2484cb70  addiu       $a0, $a0, -0x3490
    ctx->pc = 0x220628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953840));
label_22062c:
    // 0x22062c: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x22062cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x220630: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x220630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x220634: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x220634u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x220638: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x220638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x22063c: 0x28c30096  slti        $v1, $a2, 0x96
    ctx->pc = 0x22063cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x220640: 0x0  nop
    ctx->pc = 0x220640u;
    // NOP
    // 0x220644: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x220644u;
    {
        const bool branch_taken_0x220644 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x220644) {
            ctx->pc = 0x22062Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22062c;
        }
    }
    ctx->pc = 0x22064Cu;
label_22064c:
    // 0x22064c: 0x0  nop
    ctx->pc = 0x22064cu;
    // NOP
    // 0x220650: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x220650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x220654: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x220654u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220658: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x220658u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22065c: 0x3e00008  jr          $ra
    ctx->pc = 0x22065Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22065Cu;
            // 0x220660: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x220664u;
}
