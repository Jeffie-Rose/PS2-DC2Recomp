#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _doMC
// Address: 0x108988 - 0x108ba4
void _doMC_0x108988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_doMC_0x108988");
#endif

    switch (ctx->pc) {
        case 0x108988u: goto label_108988;
        case 0x10898cu: goto label_10898c;
        case 0x108990u: goto label_108990;
        case 0x108994u: goto label_108994;
        case 0x108998u: goto label_108998;
        case 0x10899cu: goto label_10899c;
        case 0x1089a0u: goto label_1089a0;
        case 0x1089a4u: goto label_1089a4;
        case 0x1089a8u: goto label_1089a8;
        case 0x1089acu: goto label_1089ac;
        case 0x1089b0u: goto label_1089b0;
        case 0x1089b4u: goto label_1089b4;
        case 0x1089b8u: goto label_1089b8;
        case 0x1089bcu: goto label_1089bc;
        case 0x1089c0u: goto label_1089c0;
        case 0x1089c4u: goto label_1089c4;
        case 0x1089c8u: goto label_1089c8;
        case 0x1089ccu: goto label_1089cc;
        case 0x1089d0u: goto label_1089d0;
        case 0x1089d4u: goto label_1089d4;
        case 0x1089d8u: goto label_1089d8;
        case 0x1089dcu: goto label_1089dc;
        case 0x1089e0u: goto label_1089e0;
        case 0x1089e4u: goto label_1089e4;
        case 0x1089e8u: goto label_1089e8;
        case 0x1089ecu: goto label_1089ec;
        case 0x1089f0u: goto label_1089f0;
        case 0x1089f4u: goto label_1089f4;
        case 0x1089f8u: goto label_1089f8;
        case 0x1089fcu: goto label_1089fc;
        case 0x108a00u: goto label_108a00;
        case 0x108a04u: goto label_108a04;
        case 0x108a08u: goto label_108a08;
        case 0x108a0cu: goto label_108a0c;
        case 0x108a10u: goto label_108a10;
        case 0x108a14u: goto label_108a14;
        case 0x108a18u: goto label_108a18;
        case 0x108a1cu: goto label_108a1c;
        case 0x108a20u: goto label_108a20;
        case 0x108a24u: goto label_108a24;
        case 0x108a28u: goto label_108a28;
        case 0x108a2cu: goto label_108a2c;
        case 0x108a30u: goto label_108a30;
        case 0x108a34u: goto label_108a34;
        case 0x108a38u: goto label_108a38;
        case 0x108a3cu: goto label_108a3c;
        case 0x108a40u: goto label_108a40;
        case 0x108a44u: goto label_108a44;
        case 0x108a48u: goto label_108a48;
        case 0x108a4cu: goto label_108a4c;
        case 0x108a50u: goto label_108a50;
        case 0x108a54u: goto label_108a54;
        case 0x108a58u: goto label_108a58;
        case 0x108a5cu: goto label_108a5c;
        case 0x108a60u: goto label_108a60;
        case 0x108a64u: goto label_108a64;
        case 0x108a68u: goto label_108a68;
        case 0x108a6cu: goto label_108a6c;
        case 0x108a70u: goto label_108a70;
        case 0x108a74u: goto label_108a74;
        case 0x108a78u: goto label_108a78;
        case 0x108a7cu: goto label_108a7c;
        case 0x108a80u: goto label_108a80;
        case 0x108a84u: goto label_108a84;
        case 0x108a88u: goto label_108a88;
        case 0x108a8cu: goto label_108a8c;
        case 0x108a90u: goto label_108a90;
        case 0x108a94u: goto label_108a94;
        case 0x108a98u: goto label_108a98;
        case 0x108a9cu: goto label_108a9c;
        case 0x108aa0u: goto label_108aa0;
        case 0x108aa4u: goto label_108aa4;
        case 0x108aa8u: goto label_108aa8;
        case 0x108aacu: goto label_108aac;
        case 0x108ab0u: goto label_108ab0;
        case 0x108ab4u: goto label_108ab4;
        case 0x108ab8u: goto label_108ab8;
        case 0x108abcu: goto label_108abc;
        case 0x108ac0u: goto label_108ac0;
        case 0x108ac4u: goto label_108ac4;
        case 0x108ac8u: goto label_108ac8;
        case 0x108accu: goto label_108acc;
        case 0x108ad0u: goto label_108ad0;
        case 0x108ad4u: goto label_108ad4;
        case 0x108ad8u: goto label_108ad8;
        case 0x108adcu: goto label_108adc;
        case 0x108ae0u: goto label_108ae0;
        case 0x108ae4u: goto label_108ae4;
        case 0x108ae8u: goto label_108ae8;
        case 0x108aecu: goto label_108aec;
        case 0x108af0u: goto label_108af0;
        case 0x108af4u: goto label_108af4;
        case 0x108af8u: goto label_108af8;
        case 0x108afcu: goto label_108afc;
        case 0x108b00u: goto label_108b00;
        case 0x108b04u: goto label_108b04;
        case 0x108b08u: goto label_108b08;
        case 0x108b0cu: goto label_108b0c;
        case 0x108b10u: goto label_108b10;
        case 0x108b14u: goto label_108b14;
        case 0x108b18u: goto label_108b18;
        case 0x108b1cu: goto label_108b1c;
        case 0x108b20u: goto label_108b20;
        case 0x108b24u: goto label_108b24;
        case 0x108b28u: goto label_108b28;
        case 0x108b2cu: goto label_108b2c;
        case 0x108b30u: goto label_108b30;
        case 0x108b34u: goto label_108b34;
        case 0x108b38u: goto label_108b38;
        case 0x108b3cu: goto label_108b3c;
        case 0x108b40u: goto label_108b40;
        case 0x108b44u: goto label_108b44;
        case 0x108b48u: goto label_108b48;
        case 0x108b4cu: goto label_108b4c;
        case 0x108b50u: goto label_108b50;
        case 0x108b54u: goto label_108b54;
        case 0x108b58u: goto label_108b58;
        case 0x108b5cu: goto label_108b5c;
        case 0x108b60u: goto label_108b60;
        case 0x108b64u: goto label_108b64;
        case 0x108b68u: goto label_108b68;
        case 0x108b6cu: goto label_108b6c;
        case 0x108b70u: goto label_108b70;
        case 0x108b74u: goto label_108b74;
        case 0x108b78u: goto label_108b78;
        case 0x108b7cu: goto label_108b7c;
        case 0x108b80u: goto label_108b80;
        case 0x108b84u: goto label_108b84;
        case 0x108b88u: goto label_108b88;
        case 0x108b8cu: goto label_108b8c;
        case 0x108b90u: goto label_108b90;
        case 0x108b94u: goto label_108b94;
        case 0x108b98u: goto label_108b98;
        case 0x108b9cu: goto label_108b9c;
        case 0x108ba0u: goto label_108ba0;
        default: break;
    }

    ctx->pc = 0x108988u;

label_108988:
    // 0x108988: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x108988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_10898c:
    // 0x10898c: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x10898cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_108990:
    // 0x108990: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x108990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_108994:
    // 0x108994: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x108994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_108998:
    // 0x108998: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x108998u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_10899c:
    // 0x10899c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x10899cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_1089a0:
    // 0x1089a0: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x1089a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_1089a4:
    // 0x1089a4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1089a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1089a8:
    // 0x1089a8: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x1089a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_1089ac:
    // 0x1089ac: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1089acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_1089b0:
    // 0x1089b0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1089b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_1089b4:
    // 0x1089b4: 0x2851021  addu        $v0, $s4, $a1
    ctx->pc = 0x1089b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_1089b8:
    // 0x1089b8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1089b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_1089bc:
    // 0x1089bc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1089bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1089c0:
    // 0x1089c0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1089c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1089c4:
    // 0x1089c4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1089c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1089c8:
    // 0x1089c8: 0x8c4306c8  lw          $v1, 0x6C8($v0)
    ctx->pc = 0x1089c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1736)));
label_1089cc:
    // 0x1089cc: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_1089d0:
    if (ctx->pc == 0x1089D0u) {
        ctx->pc = 0x1089D0u;
            // 0x1089d0: 0x268206bc  addiu       $v0, $s4, 0x6BC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1724));
        ctx->pc = 0x1089D4u;
        goto label_1089d4;
    }
    ctx->pc = 0x1089CCu;
    {
        const bool branch_taken_0x1089cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1089D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1089CCu;
            // 0x1089d0: 0x268206bc  addiu       $v0, $s4, 0x6BC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1724));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1089cc) {
            ctx->pc = 0x108A6Cu;
            goto label_108a6c;
        }
    }
    ctx->pc = 0x1089D4u;
label_1089d4:
    // 0x1089d4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1089d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_1089d8:
    // 0x1089d8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1089d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1089dc:
    // 0x1089dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1089dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1089e0:
    // 0x1089e0: 0x18600026  blez        $v1, . + 4 + (0x26 << 2)
label_1089e4:
    if (ctx->pc == 0x1089E4u) {
        ctx->pc = 0x1089E4u;
            // 0x1089e4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1089E8u;
        goto label_1089e8;
    }
    ctx->pc = 0x1089E0u;
    {
        const bool branch_taken_0x1089e0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1089E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1089E0u;
            // 0x1089e4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1089e0) {
            ctx->pc = 0x108A7Cu;
            goto label_108a7c;
        }
    }
    ctx->pc = 0x1089E8u;
label_1089e8:
    // 0x1089e8: 0x268306c0  addiu       $v1, $s4, 0x6C0
    ctx->pc = 0x1089e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1728));
label_1089ec:
    // 0x1089ec: 0x269705b8  addiu       $s7, $s4, 0x5B8
    ctx->pc = 0x1089ecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 1464));
label_1089f0:
    // 0x1089f0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1089f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_1089f4:
    // 0x1089f4: 0x269605c8  addiu       $s6, $s4, 0x5C8
    ctx->pc = 0x1089f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 1480));
label_1089f8:
    // 0x1089f8: 0x269e06b8  addiu       $fp, $s4, 0x6B8
    ctx->pc = 0x1089f8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 1720));
label_1089fc:
    // 0x1089fc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1089fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_108a00:
    // 0x108a00: 0x24110140  addiu       $s1, $zero, 0x140
    ctx->pc = 0x108a00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_108a04:
    // 0x108a04: 0x2413001c  addiu       $s3, $zero, 0x1C
    ctx->pc = 0x108a04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_108a08:
    // 0x108a08: 0x158080  sll         $s0, $s5, 2
    ctx->pc = 0x108a08u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_108a0c:
    // 0x108a0c: 0x518818  mult        $s1, $v0, $s1
    ctx->pc = 0x108a0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_108a10:
    // 0x108a10: 0x72b39818  mult1       $s3, $s5, $s3
    ctx->pc = 0x108a10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_108a14:
    // 0x108a14: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x108a14u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_108a18:
    // 0x108a18: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x108a18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_108a1c:
    // 0x108a1c: 0x26320590  addiu       $s2, $s1, 0x590
    ctx->pc = 0x108a1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1424));
label_108a20:
    // 0x108a20: 0x2f01021  addu        $v0, $s7, $s0
    ctx->pc = 0x108a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
label_108a24:
    // 0x108a24: 0x2929021  addu        $s2, $s4, $s2
    ctx->pc = 0x108a24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_108a28:
    // 0x108a28: 0x26640048  addiu       $a0, $s3, 0x48
    ctx->pc = 0x108a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
label_108a2c:
    // 0x108a2c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x108a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_108a30:
    // 0x108a30: 0x60f809  jalr        $v1
label_108a34:
    if (ctx->pc == 0x108A34u) {
        ctx->pc = 0x108A34u;
            // 0x108a34: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->pc = 0x108A38u;
        goto label_108a38;
    }
    ctx->pc = 0x108A30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x108A38u);
        ctx->pc = 0x108A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108A30u;
            // 0x108a34: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x108A38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x108A38u; }
            if (ctx->pc != 0x108A38u) { return; }
        }
        }
    }
    ctx->pc = 0x108A38u;
label_108a38:
    // 0x108a38: 0x2d08021  addu        $s0, $s6, $s0
    ctx->pc = 0x108a38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_108a3c:
    // 0x108a3c: 0x267300b8  addiu       $s3, $s3, 0xB8
    ctx->pc = 0x108a3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 184));
label_108a40:
    // 0x108a40: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x108a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_108a44:
    // 0x108a44: 0x40f809  jalr        $v0
label_108a48:
    if (ctx->pc == 0x108A48u) {
        ctx->pc = 0x108A48u;
            // 0x108a48: 0x2532021  addu        $a0, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->pc = 0x108A4Cu;
        goto label_108a4c;
    }
    ctx->pc = 0x108A44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x108A4Cu);
        ctx->pc = 0x108A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108A44u;
            // 0x108a48: 0x2532021  addu        $a0, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x108A4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x108A4Cu; }
            if (ctx->pc != 0x108A4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x108A4Cu;
label_108a4c:
    // 0x108a4c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x108a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_108a50:
    // 0x108a50: 0x718821  addu        $s1, $v1, $s1
    ctx->pc = 0x108a50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_108a54:
    // 0x108a54: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x108a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_108a58:
    // 0x108a58: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x108a58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_108a5c:
    // 0x108a5c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_108a60:
    if (ctx->pc == 0x108A60u) {
        ctx->pc = 0x108A60u;
            // 0x108a60: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x108A64u;
        goto label_108a64;
    }
    ctx->pc = 0x108A5Cu;
    {
        const bool branch_taken_0x108a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108A5Cu;
            // 0x108a60: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108a5c) {
            ctx->pc = 0x108A00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_108a00;
        }
    }
    ctx->pc = 0x108A64u;
label_108a64:
    // 0x108a64: 0x10000009  b           . + 4 + (0x9 << 2)
label_108a68:
    if (ctx->pc == 0x108A68u) {
        ctx->pc = 0x108A68u;
            // 0x108a68: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x108A6Cu;
        goto label_108a6c;
    }
    ctx->pc = 0x108A64u;
    {
        const bool branch_taken_0x108a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108A64u;
            // 0x108a68: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108a64) {
            ctx->pc = 0x108A8Cu;
            goto label_108a8c;
        }
    }
    ctx->pc = 0x108A6Cu;
label_108a6c:
    // 0x108a6c: 0x268206c0  addiu       $v0, $s4, 0x6C0
    ctx->pc = 0x108a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1728));
label_108a70:
    // 0x108a70: 0x269e06b8  addiu       $fp, $s4, 0x6B8
    ctx->pc = 0x108a70u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 1720));
label_108a74:
    // 0x108a74: 0x10000004  b           . + 4 + (0x4 << 2)
label_108a78:
    if (ctx->pc == 0x108A78u) {
        ctx->pc = 0x108A78u;
            // 0x108a78: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x108A7Cu;
        goto label_108a7c;
    }
    ctx->pc = 0x108A74u;
    {
        const bool branch_taken_0x108a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108A74u;
            // 0x108a78: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108a74) {
            ctx->pc = 0x108A88u;
            goto label_108a88;
        }
    }
    ctx->pc = 0x108A7Cu;
label_108a7c:
    // 0x108a7c: 0x268306c0  addiu       $v1, $s4, 0x6C0
    ctx->pc = 0x108a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1728));
label_108a80:
    // 0x108a80: 0x269e06b8  addiu       $fp, $s4, 0x6B8
    ctx->pc = 0x108a80u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 1720));
label_108a84:
    // 0x108a84: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x108a84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_108a88:
    // 0x108a88: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x108a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_108a8c:
    // 0x108a8c: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x108a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_108a90:
    // 0x108a90: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x108a90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_108a94:
    // 0x108a94: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x108a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_108a98:
    // 0x108a98: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x108a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_108a9c:
    // 0x108a9c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x108a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_108aa0:
    // 0x108aa0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_108aa4:
    if (ctx->pc == 0x108AA4u) {
        ctx->pc = 0x108AA4u;
            // 0x108aa4: 0x2841021  addu        $v0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->pc = 0x108AA8u;
        goto label_108aa8;
    }
    ctx->pc = 0x108AA0u;
    {
        const bool branch_taken_0x108aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108AA0u;
            // 0x108aa4: 0x2841021  addu        $v0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108aa0) {
            ctx->pc = 0x108AC0u;
            goto label_108ac0;
        }
    }
    ctx->pc = 0x108AA8u;
label_108aa8:
    // 0x108aa8: 0x8c4306cc  lw          $v1, 0x6CC($v0)
    ctx->pc = 0x108aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1740)));
label_108aac:
    // 0x108aac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_108ab0:
    if (ctx->pc == 0x108AB0u) {
        ctx->pc = 0x108AB0u;
            // 0x108ab0: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->pc = 0x108AB4u;
        goto label_108ab4;
    }
    ctx->pc = 0x108AACu;
    {
        const bool branch_taken_0x108aac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x108AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108AACu;
            // 0x108ab0: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108aac) {
            ctx->pc = 0x108AC0u;
            goto label_108ac0;
        }
    }
    ctx->pc = 0x108AB4u;
label_108ab4:
    // 0x108ab4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x108ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_108ab8:
    // 0x108ab8: 0xc043b64  jal         func_10ED90
label_108abc:
    if (ctx->pc == 0x108ABCu) {
        ctx->pc = 0x108ABCu;
            // 0x108abc: 0x24a505f0  addiu       $a1, $a1, 0x5F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1520));
        ctx->pc = 0x108AC0u;
        goto label_108ac0;
    }
    ctx->pc = 0x108AB8u;
    SET_GPR_U32(ctx, 31, 0x108AC0u);
    ctx->pc = 0x108ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108AB8u;
            // 0x108abc: 0x24a505f0  addiu       $a1, $a1, 0x5F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10ED90u;
    if (runtime->hasFunction(0x10ED90u)) {
        auto targetFn = runtime->lookupFunction(0x10ED90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108AC0u; }
        if (ctx->pc != 0x108AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x10ed90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108AC0u; }
        if (ctx->pc != 0x108AC0u) { return; }
    }
    ctx->pc = 0x108AC0u;
label_108ac0:
    // 0x108ac0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x108ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_108ac4:
    // 0x108ac4: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x108ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_108ac8:
    // 0x108ac8: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x108ac8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_108acc:
    // 0x108acc: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x108accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_108ad0:
    // 0x108ad0: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x108ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_108ad4:
    // 0x108ad4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x108ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_108ad8:
    // 0x108ad8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_108adc:
    if (ctx->pc == 0x108ADCu) {
        ctx->pc = 0x108ADCu;
            // 0x108adc: 0x2851021  addu        $v0, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->pc = 0x108AE0u;
        goto label_108ae0;
    }
    ctx->pc = 0x108AD8u;
    {
        const bool branch_taken_0x108ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108AD8u;
            // 0x108adc: 0x2851021  addu        $v0, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108ad8) {
            ctx->pc = 0x108B20u;
            goto label_108b20;
        }
    }
    ctx->pc = 0x108AE0u;
label_108ae0:
    // 0x108ae0: 0x3c51021  addu        $v0, $fp, $a1
    ctx->pc = 0x108ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
label_108ae4:
    // 0x108ae4: 0x2851821  addu        $v1, $s4, $a1
    ctx->pc = 0x108ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_108ae8:
    // 0x108ae8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x108ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_108aec:
    // 0x108aec: 0x8c650594  lw          $a1, 0x594($v1)
    ctx->pc = 0x108aecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1428)));
label_108af0:
    // 0x108af0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x108af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_108af4:
    // 0x108af4: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x108af4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_108af8:
    // 0x108af8: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x108af8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_108afc:
    // 0x108afc: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x108afcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_108b00:
    // 0x108b00: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x108b00u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_108b04:
    // 0x108b04: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x108b04u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_108b08:
    // 0x108b08: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x108b08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_108b0c:
    // 0x108b0c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x108b0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_108b10:
    // 0x108b10: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x108b10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_108b14:
    // 0x108b14: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x108b14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_108b18:
    // 0x108b18: 0x804263e  j           func_1098F8
label_108b1c:
    if (ctx->pc == 0x108B1Cu) {
        ctx->pc = 0x108B1Cu;
            // 0x108b1c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x108B20u;
        goto label_108b20;
    }
    ctx->pc = 0x108B18u;
    ctx->pc = 0x108B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108B18u;
            // 0x108b1c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1098F8u;
    if (runtime->hasFunction(0x1098F8u)) {
        auto targetFn = runtime->lookupFunction(0x1098F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        _copyRefImage_0x1098f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x108B20u;
label_108b20:
    // 0x108b20: 0x8c4306cc  lw          $v1, 0x6CC($v0)
    ctx->pc = 0x108b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1740)));
label_108b24:
    // 0x108b24: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_108b28:
    if (ctx->pc == 0x108B28u) {
        ctx->pc = 0x108B28u;
            // 0x108b28: 0x3c51021  addu        $v0, $fp, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
        ctx->pc = 0x108B2Cu;
        goto label_108b2c;
    }
    ctx->pc = 0x108B24u;
    {
        const bool branch_taken_0x108b24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x108B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108B24u;
            // 0x108b28: 0x3c51021  addu        $v0, $fp, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108b24) {
            ctx->pc = 0x108B64u;
            goto label_108b64;
        }
    }
    ctx->pc = 0x108B2Cu;
label_108b2c:
    // 0x108b2c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x108b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_108b30:
    // 0x108b30: 0x8e85081c  lw          $a1, 0x81C($s4)
    ctx->pc = 0x108b30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2076)));
label_108b34:
    // 0x108b34: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x108b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_108b38:
    // 0x108b38: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x108b38u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_108b3c:
    // 0x108b3c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x108b3cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_108b40:
    // 0x108b40: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x108b40u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_108b44:
    // 0x108b44: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x108b44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_108b48:
    // 0x108b48: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x108b48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_108b4c:
    // 0x108b4c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x108b4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_108b50:
    // 0x108b50: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x108b50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_108b54:
    // 0x108b54: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x108b54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_108b58:
    // 0x108b58: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x108b58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_108b5c:
    // 0x108b5c: 0x804263e  j           func_1098F8
label_108b60:
    if (ctx->pc == 0x108B60u) {
        ctx->pc = 0x108B60u;
            // 0x108b60: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x108B64u;
        goto label_108b64;
    }
    ctx->pc = 0x108B5Cu;
    ctx->pc = 0x108B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108B5Cu;
            // 0x108b60: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1098F8u;
    if (runtime->hasFunction(0x1098F8u)) {
        auto targetFn = runtime->lookupFunction(0x1098F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        _copyRefImage_0x1098f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x108B64u;
label_108b64:
    // 0x108b64: 0x2851821  addu        $v1, $s4, $a1
    ctx->pc = 0x108b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_108b68:
    // 0x108b68: 0x8e85081c  lw          $a1, 0x81C($s4)
    ctx->pc = 0x108b68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2076)));
label_108b6c:
    // 0x108b6c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x108b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_108b70:
    // 0x108b70: 0x8c660594  lw          $a2, 0x594($v1)
    ctx->pc = 0x108b70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1428)));
label_108b74:
    // 0x108b74: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x108b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_108b78:
    // 0x108b78: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x108b78u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_108b7c:
    // 0x108b7c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x108b7cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_108b80:
    // 0x108b80: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x108b80u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_108b84:
    // 0x108b84: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x108b84u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_108b88:
    // 0x108b88: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x108b88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_108b8c:
    // 0x108b8c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x108b8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_108b90:
    // 0x108b90: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x108b90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_108b94:
    // 0x108b94: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x108b94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_108b98:
    // 0x108b98: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x108b98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_108b9c:
    // 0x108b9c: 0x8042626  j           func_109898
label_108ba0:
    if (ctx->pc == 0x108BA0u) {
        ctx->pc = 0x108BA0u;
            // 0x108ba0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x108BA4u;
        goto label_fallthrough_0x108b9c;
    }
    ctx->pc = 0x108B9Cu;
    ctx->pc = 0x108BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108B9Cu;
            // 0x108ba0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109898u;
    if (runtime->hasFunction(0x109898u)) {
        auto targetFn = runtime->lookupFunction(0x109898u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        _copyAddRefImage_0x109898(rdram, ctx, runtime); return;
    }
label_fallthrough_0x108b9c:
    ctx->pc = 0x108BA4u;
}
