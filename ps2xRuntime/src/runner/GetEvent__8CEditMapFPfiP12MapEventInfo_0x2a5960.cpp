#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetEvent__8CEditMapFPfiP12MapEventInfo
// Address: 0x2a5960 - 0x2a5af8
void GetEvent__8CEditMapFPfiP12MapEventInfo_0x2a5960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetEvent__8CEditMapFPfiP12MapEventInfo_0x2a5960");
#endif

    switch (ctx->pc) {
        case 0x2a5960u: goto label_2a5960;
        case 0x2a5964u: goto label_2a5964;
        case 0x2a5968u: goto label_2a5968;
        case 0x2a596cu: goto label_2a596c;
        case 0x2a5970u: goto label_2a5970;
        case 0x2a5974u: goto label_2a5974;
        case 0x2a5978u: goto label_2a5978;
        case 0x2a597cu: goto label_2a597c;
        case 0x2a5980u: goto label_2a5980;
        case 0x2a5984u: goto label_2a5984;
        case 0x2a5988u: goto label_2a5988;
        case 0x2a598cu: goto label_2a598c;
        case 0x2a5990u: goto label_2a5990;
        case 0x2a5994u: goto label_2a5994;
        case 0x2a5998u: goto label_2a5998;
        case 0x2a599cu: goto label_2a599c;
        case 0x2a59a0u: goto label_2a59a0;
        case 0x2a59a4u: goto label_2a59a4;
        case 0x2a59a8u: goto label_2a59a8;
        case 0x2a59acu: goto label_2a59ac;
        case 0x2a59b0u: goto label_2a59b0;
        case 0x2a59b4u: goto label_2a59b4;
        case 0x2a59b8u: goto label_2a59b8;
        case 0x2a59bcu: goto label_2a59bc;
        case 0x2a59c0u: goto label_2a59c0;
        case 0x2a59c4u: goto label_2a59c4;
        case 0x2a59c8u: goto label_2a59c8;
        case 0x2a59ccu: goto label_2a59cc;
        case 0x2a59d0u: goto label_2a59d0;
        case 0x2a59d4u: goto label_2a59d4;
        case 0x2a59d8u: goto label_2a59d8;
        case 0x2a59dcu: goto label_2a59dc;
        case 0x2a59e0u: goto label_2a59e0;
        case 0x2a59e4u: goto label_2a59e4;
        case 0x2a59e8u: goto label_2a59e8;
        case 0x2a59ecu: goto label_2a59ec;
        case 0x2a59f0u: goto label_2a59f0;
        case 0x2a59f4u: goto label_2a59f4;
        case 0x2a59f8u: goto label_2a59f8;
        case 0x2a59fcu: goto label_2a59fc;
        case 0x2a5a00u: goto label_2a5a00;
        case 0x2a5a04u: goto label_2a5a04;
        case 0x2a5a08u: goto label_2a5a08;
        case 0x2a5a0cu: goto label_2a5a0c;
        case 0x2a5a10u: goto label_2a5a10;
        case 0x2a5a14u: goto label_2a5a14;
        case 0x2a5a18u: goto label_2a5a18;
        case 0x2a5a1cu: goto label_2a5a1c;
        case 0x2a5a20u: goto label_2a5a20;
        case 0x2a5a24u: goto label_2a5a24;
        case 0x2a5a28u: goto label_2a5a28;
        case 0x2a5a2cu: goto label_2a5a2c;
        case 0x2a5a30u: goto label_2a5a30;
        case 0x2a5a34u: goto label_2a5a34;
        case 0x2a5a38u: goto label_2a5a38;
        case 0x2a5a3cu: goto label_2a5a3c;
        case 0x2a5a40u: goto label_2a5a40;
        case 0x2a5a44u: goto label_2a5a44;
        case 0x2a5a48u: goto label_2a5a48;
        case 0x2a5a4cu: goto label_2a5a4c;
        case 0x2a5a50u: goto label_2a5a50;
        case 0x2a5a54u: goto label_2a5a54;
        case 0x2a5a58u: goto label_2a5a58;
        case 0x2a5a5cu: goto label_2a5a5c;
        case 0x2a5a60u: goto label_2a5a60;
        case 0x2a5a64u: goto label_2a5a64;
        case 0x2a5a68u: goto label_2a5a68;
        case 0x2a5a6cu: goto label_2a5a6c;
        case 0x2a5a70u: goto label_2a5a70;
        case 0x2a5a74u: goto label_2a5a74;
        case 0x2a5a78u: goto label_2a5a78;
        case 0x2a5a7cu: goto label_2a5a7c;
        case 0x2a5a80u: goto label_2a5a80;
        case 0x2a5a84u: goto label_2a5a84;
        case 0x2a5a88u: goto label_2a5a88;
        case 0x2a5a8cu: goto label_2a5a8c;
        case 0x2a5a90u: goto label_2a5a90;
        case 0x2a5a94u: goto label_2a5a94;
        case 0x2a5a98u: goto label_2a5a98;
        case 0x2a5a9cu: goto label_2a5a9c;
        case 0x2a5aa0u: goto label_2a5aa0;
        case 0x2a5aa4u: goto label_2a5aa4;
        case 0x2a5aa8u: goto label_2a5aa8;
        case 0x2a5aacu: goto label_2a5aac;
        case 0x2a5ab0u: goto label_2a5ab0;
        case 0x2a5ab4u: goto label_2a5ab4;
        case 0x2a5ab8u: goto label_2a5ab8;
        case 0x2a5abcu: goto label_2a5abc;
        case 0x2a5ac0u: goto label_2a5ac0;
        case 0x2a5ac4u: goto label_2a5ac4;
        case 0x2a5ac8u: goto label_2a5ac8;
        case 0x2a5accu: goto label_2a5acc;
        case 0x2a5ad0u: goto label_2a5ad0;
        case 0x2a5ad4u: goto label_2a5ad4;
        case 0x2a5ad8u: goto label_2a5ad8;
        case 0x2a5adcu: goto label_2a5adc;
        case 0x2a5ae0u: goto label_2a5ae0;
        case 0x2a5ae4u: goto label_2a5ae4;
        case 0x2a5ae8u: goto label_2a5ae8;
        case 0x2a5aecu: goto label_2a5aec;
        case 0x2a5af0u: goto label_2a5af0;
        case 0x2a5af4u: goto label_2a5af4;
        default: break;
    }

    ctx->pc = 0x2a5960u;

label_2a5960:
    // 0x2a5960: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2a5960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2a5964:
    // 0x2a5964: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2a5964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2a5968:
    // 0x2a5968: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2a5968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2a596c:
    // 0x2a596c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2a596cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2a5970:
    // 0x2a5970: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x2a5970u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a5974:
    // 0x2a5974: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2a5974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2a5978:
    // 0x2a5978: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2a5978u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2a597c:
    // 0x2a597c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2a597cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2a5980:
    // 0x2a5980: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2a5980u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a5984:
    // 0x2a5984: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a5984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2a5988:
    // 0x2a5988: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2a5988u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2a598c:
    // 0x2a598c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a598cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2a5990:
    // 0x2a5990: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a5990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2a5994:
    // 0x2a5994: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a5994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2a5998:
    // 0x2a5998: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
label_2a599c:
    if (ctx->pc == 0x2A599Cu) {
        ctx->pc = 0x2A599Cu;
            // 0x2a599c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x2A59A0u;
        goto label_2a59a0;
    }
    ctx->pc = 0x2A5998u;
    {
        const bool branch_taken_0x2a5998 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A599Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5998u;
            // 0x2a599c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5998) {
            ctx->pc = 0x2A59B8u;
            goto label_2a59b8;
        }
    }
    ctx->pc = 0x2A59A0u;
label_2a59a0:
    // 0x2a59a0: 0x26a40010  addiu       $a0, $s5, 0x10
    ctx->pc = 0x2a59a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_2a59a4:
    // 0x2a59a4: 0xc04c050  jal         func_130140
label_2a59a8:
    if (ctx->pc == 0x2A59A8u) {
        ctx->pc = 0x2A59A8u;
            // 0x2a59a8: 0xaea00004  sw          $zero, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x2A59ACu;
        goto label_2a59ac;
    }
    ctx->pc = 0x2A59A4u;
    SET_GPR_U32(ctx, 31, 0x2A59ACu);
    ctx->pc = 0x2A59A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A59A4u;
            // 0x2a59a8: 0xaea00004  sw          $zero, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A59ACu; }
        if (ctx->pc != 0x2A59ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgUnitMatrix__FPA4_f_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A59ACu; }
        if (ctx->pc != 0x2A59ACu) { return; }
    }
    ctx->pc = 0x2A59ACu;
label_2a59ac:
    // 0x2a59ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2a59acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a59b0:
    // 0x2a59b0: 0xaea20054  sw          $v0, 0x54($s5)
    ctx->pc = 0x2a59b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
label_2a59b4:
    // 0x2a59b4: 0xaea20050  sw          $v0, 0x50($s5)
    ctx->pc = 0x2a59b4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 2));
label_2a59b8:
    // 0x2a59b8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2a59b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2a59bc:
    // 0x2a59bc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2a59bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2a59c0:
    // 0x2a59c0: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2a59c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2a59c4:
    // 0x2a59c4: 0xc057e20  jal         func_15F880
label_2a59c8:
    if (ctx->pc == 0x2A59C8u) {
        ctx->pc = 0x2A59C8u;
            // 0x2a59c8: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A59CCu;
        goto label_2a59cc;
    }
    ctx->pc = 0x2A59C4u;
    SET_GPR_U32(ctx, 31, 0x2A59CCu);
    ctx->pc = 0x2A59C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A59C4u;
            // 0x2a59c8: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F880u;
    if (runtime->hasFunction(0x15F880u)) {
        auto targetFn = runtime->lookupFunction(0x15F880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A59CCu; }
        if (ctx->pc != 0x2A59CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEvent__4CMapFPfiP12MapEventInfo_0x15f880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A59CCu; }
        if (ctx->pc != 0x2A59CCu) { return; }
    }
    ctx->pc = 0x2A59CCu;
label_2a59cc:
    // 0x2a59cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2a59d0:
    if (ctx->pc == 0x2A59D0u) {
        ctx->pc = 0x2A59D4u;
        goto label_2a59d4;
    }
    ctx->pc = 0x2A59CCu;
    {
        const bool branch_taken_0x2a59cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a59cc) {
            ctx->pc = 0x2A59DCu;
            goto label_2a59dc;
        }
    }
    ctx->pc = 0x2A59D4u;
label_2a59d4:
    // 0x2a59d4: 0x1000003d  b           . + 4 + (0x3D << 2)
label_2a59d8:
    if (ctx->pc == 0x2A59D8u) {
        ctx->pc = 0x2A59D8u;
            // 0x2a59d8: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x2A59DCu;
        goto label_2a59dc;
    }
    ctx->pc = 0x2A59D4u;
    {
        const bool branch_taken_0x2a59d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A59D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A59D4u;
            // 0x2a59d8: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a59d4) {
            ctx->pc = 0x2A5ACCu;
            goto label_2a5acc;
        }
    }
    ctx->pc = 0x2A59DCu;
label_2a59dc:
    // 0x2a59dc: 0x8fd10d44  lw          $s1, 0xD44($fp)
    ctx->pc = 0x2a59dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 3396)));
label_2a59e0:
    // 0x2a59e0: 0x10000035  b           . + 4 + (0x35 << 2)
label_2a59e4:
    if (ctx->pc == 0x2A59E4u) {
        ctx->pc = 0x2A59E4u;
            // 0x2a59e4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A59E8u;
        goto label_2a59e8;
    }
    ctx->pc = 0x2A59E0u;
    {
        const bool branch_taken_0x2a59e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A59E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A59E0u;
            // 0x2a59e4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a59e0) {
            ctx->pc = 0x2A5AB8u;
            goto label_2a5ab8;
        }
    }
    ctx->pc = 0x2A59E8u;
label_2a59e8:
    // 0x2a59e8: 0x8e2202b0  lw          $v0, 0x2B0($s1)
    ctx->pc = 0x2a59e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_2a59ec:
    // 0x2a59ec: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x2a59ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_2a59f0:
    // 0x2a59f0: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_2a59f4:
    if (ctx->pc == 0x2A59F4u) {
        ctx->pc = 0x2A59F8u;
        goto label_2a59f8;
    }
    ctx->pc = 0x2A59F0u;
    {
        const bool branch_taken_0x2a59f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a59f0) {
            ctx->pc = 0x2A5AACu;
            goto label_2a5aac;
        }
    }
    ctx->pc = 0x2A59F8u;
label_2a59f8:
    // 0x2a59f8: 0x82220070  lb          $v0, 0x70($s1)
    ctx->pc = 0x2a59f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
label_2a59fc:
    // 0x2a59fc: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x2a59fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_2a5a00:
    // 0x2a5a00: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2a5a00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2a5a04:
    // 0x2a5a04: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
label_2a5a08:
    if (ctx->pc == 0x2A5A08u) {
        ctx->pc = 0x2A5A0Cu;
        goto label_2a5a0c;
    }
    ctx->pc = 0x2A5A04u;
    {
        const bool branch_taken_0x2a5a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a5a04) {
            ctx->pc = 0x2A5AACu;
            goto label_2a5aac;
        }
    }
    ctx->pc = 0x2A5A0Cu;
label_2a5a0c:
    // 0x2a5a0c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2a5a0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a5a10:
    // 0x2a5a10: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x2a5a10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_2a5a14:
    // 0x2a5a14: 0x320f809  jalr        $t9
label_2a5a18:
    if (ctx->pc == 0x2A5A18u) {
        ctx->pc = 0x2A5A18u;
            // 0x2a5a18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A5A1Cu;
        goto label_2a5a1c;
    }
    ctx->pc = 0x2A5A14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A5A1Cu);
        ctx->pc = 0x2A5A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5A14u;
            // 0x2a5a18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A5A1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A5A1Cu; }
            if (ctx->pc != 0x2A5A1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2A5A1Cu;
label_2a5a1c:
    // 0x2a5a1c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_2a5a20:
    if (ctx->pc == 0x2A5A20u) {
        ctx->pc = 0x2A5A24u;
        goto label_2a5a24;
    }
    ctx->pc = 0x2A5A1Cu;
    {
        const bool branch_taken_0x2a5a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5a1c) {
            ctx->pc = 0x2A5AACu;
            goto label_2a5aac;
        }
    }
    ctx->pc = 0x2A5A24u;
label_2a5a24:
    // 0x2a5a24: 0x8e220310  lw          $v0, 0x310($s1)
    ctx->pc = 0x2a5a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
label_2a5a28:
    // 0x2a5a28: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_2a5a2c:
    if (ctx->pc == 0x2A5A2Cu) {
        ctx->pc = 0x2A5A30u;
        goto label_2a5a30;
    }
    ctx->pc = 0x2A5A28u;
    {
        const bool branch_taken_0x2a5a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5a28) {
            ctx->pc = 0x2A5AACu;
            goto label_2a5aac;
        }
    }
    ctx->pc = 0x2A5A30u;
label_2a5a30:
    // 0x2a5a30: 0x8e220324  lw          $v0, 0x324($s1)
    ctx->pc = 0x2a5a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
label_2a5a34:
    // 0x2a5a34: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_2a5a38:
    if (ctx->pc == 0x2A5A38u) {
        ctx->pc = 0x2A5A38u;
            // 0x2a5a38: 0x263202b0  addiu       $s2, $s1, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 688));
        ctx->pc = 0x2A5A3Cu;
        goto label_2a5a3c;
    }
    ctx->pc = 0x2A5A34u;
    {
        const bool branch_taken_0x2a5a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5A34u;
            // 0x2a5a38: 0x263202b0  addiu       $s2, $s1, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5a34) {
            ctx->pc = 0x2A5AACu;
            goto label_2a5aac;
        }
    }
    ctx->pc = 0x2A5A3Cu;
label_2a5a3c:
    // 0x2a5a3c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2a5a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2a5a40:
    // 0x2a5a40: 0xc0a761c  jal         func_29D870
label_2a5a44:
    if (ctx->pc == 0x2A5A44u) {
        ctx->pc = 0x2A5A44u;
            // 0x2a5a44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A5A48u;
        goto label_2a5a48;
    }
    ctx->pc = 0x2A5A40u;
    SET_GPR_U32(ctx, 31, 0x2A5A48u);
    ctx->pc = 0x2A5A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5A40u;
            // 0x2a5a44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D870u;
    if (runtime->hasFunction(0x29D870u)) {
        auto targetFn = runtime->lookupFunction(0x29D870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5A48u; }
        if (ctx->pc != 0x2A5A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStart__14CFuncPointMngrFi_0x29d870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5A48u; }
        if (ctx->pc != 0x2A5A48u) { return; }
    }
    ctx->pc = 0x2A5A48u;
label_2a5a48:
    // 0x2a5a48: 0xc0a762c  jal         func_29D8B0
label_2a5a4c:
    if (ctx->pc == 0x2A5A4Cu) {
        ctx->pc = 0x2A5A4Cu;
            // 0x2a5a4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A5A50u;
        goto label_2a5a50;
    }
    ctx->pc = 0x2A5A48u;
    SET_GPR_U32(ctx, 31, 0x2A5A50u);
    ctx->pc = 0x2A5A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5A48u;
            // 0x2a5a4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5A50u; }
        if (ctx->pc != 0x2A5A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5A50u; }
        if (ctx->pc != 0x2A5A50u) { return; }
    }
    ctx->pc = 0x2A5A50u;
label_2a5a50:
    // 0x2a5a50: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_2a5a54:
    if (ctx->pc == 0x2A5A54u) {
        ctx->pc = 0x2A5A54u;
            // 0x2a5a54: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A5A58u;
        goto label_2a5a58;
    }
    ctx->pc = 0x2A5A50u;
    {
        const bool branch_taken_0x2a5a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5A50u;
            // 0x2a5a54: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5a50) {
            ctx->pc = 0x2A5AACu;
            goto label_2a5aac;
        }
    }
    ctx->pc = 0x2A5A58u;
label_2a5a58:
    // 0x2a5a58: 0x26840070  addiu       $a0, $s4, 0x70
    ctx->pc = 0x2a5a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
label_2a5a5c:
    // 0x2a5a5c: 0xc04db0c  jal         func_136C30
label_2a5a60:
    if (ctx->pc == 0x2A5A60u) {
        ctx->pc = 0x2A5A60u;
            // 0x2a5a60: 0x262500c0  addiu       $a1, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->pc = 0x2A5A64u;
        goto label_2a5a64;
    }
    ctx->pc = 0x2A5A5Cu;
    SET_GPR_U32(ctx, 31, 0x2A5A64u);
    ctx->pc = 0x2A5A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5A5Cu;
            // 0x2a5a60: 0x262500c0  addiu       $a1, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136C30u;
    if (runtime->hasFunction(0x136C30u)) {
        auto targetFn = runtime->lookupFunction(0x136C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5A64u; }
        if (ctx->pc != 0x2A5A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetReference__8mgCFrameFP8mgCFrame_0x136c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5A64u; }
        if (ctx->pc != 0x2A5A64u) { return; }
    }
    ctx->pc = 0x2A5A64u;
label_2a5a64:
    // 0x2a5a64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a5a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a5a68:
    // 0x2a5a68: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2a5a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2a5a6c:
    // 0x2a5a6c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2a5a6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2a5a70:
    // 0x2a5a70: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2a5a70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2a5a74:
    // 0x2a5a74: 0xc058240  jal         func_160900
label_2a5a78:
    if (ctx->pc == 0x2A5A78u) {
        ctx->pc = 0x2A5A78u;
            // 0x2a5a78: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A5A7Cu;
        goto label_2a5a7c;
    }
    ctx->pc = 0x2A5A74u;
    SET_GPR_U32(ctx, 31, 0x2A5A7Cu);
    ctx->pc = 0x2A5A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5A74u;
            // 0x2a5a78: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160900u;
    if (runtime->hasFunction(0x160900u)) {
        auto targetFn = runtime->lookupFunction(0x160900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5A7Cu; }
        if (ctx->pc != 0x2A5A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckFuncEvent__FP10CFuncPointPfiP12MapEventInfoPf_0x160900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5A7Cu; }
        if (ctx->pc != 0x2A5A7Cu) { return; }
    }
    ctx->pc = 0x2A5A7Cu;
label_2a5a7c:
    // 0x2a5a7c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2a5a7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5a80:
    // 0x2a5a80: 0xc04db18  jal         func_136C60
label_2a5a84:
    if (ctx->pc == 0x2A5A84u) {
        ctx->pc = 0x2A5A84u;
            // 0x2a5a84: 0x26840070  addiu       $a0, $s4, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
        ctx->pc = 0x2A5A88u;
        goto label_2a5a88;
    }
    ctx->pc = 0x2A5A80u;
    SET_GPR_U32(ctx, 31, 0x2A5A88u);
    ctx->pc = 0x2A5A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5A80u;
            // 0x2a5a84: 0x26840070  addiu       $a0, $s4, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136C60u;
    if (runtime->hasFunction(0x136C60u)) {
        auto targetFn = runtime->lookupFunction(0x136C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5A88u; }
        if (ctx->pc != 0x2A5A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteReference__8mgCFrameFv_0x136c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5A88u; }
        if (ctx->pc != 0x2A5A88u) { return; }
    }
    ctx->pc = 0x2A5A88u;
label_2a5a88:
    // 0x2a5a88: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_2a5a8c:
    if (ctx->pc == 0x2A5A8Cu) {
        ctx->pc = 0x2A5A8Cu;
            // 0x2a5a8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A5A90u;
        goto label_2a5a90;
    }
    ctx->pc = 0x2A5A88u;
    {
        const bool branch_taken_0x2a5a88 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5A88u;
            // 0x2a5a8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5a88) {
            ctx->pc = 0x2A5A9Cu;
            goto label_2a5a9c;
        }
    }
    ctx->pc = 0x2A5A90u;
label_2a5a90:
    // 0x2a5a90: 0xaeb00050  sw          $s0, 0x50($s5)
    ctx->pc = 0x2a5a90u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 16));
label_2a5a94:
    // 0x2a5a94: 0x1000000c  b           . + 4 + (0xC << 2)
label_2a5a98:
    if (ctx->pc == 0x2A5A98u) {
        ctx->pc = 0x2A5A98u;
            // 0x2a5a98: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A5A9Cu;
        goto label_2a5a9c;
    }
    ctx->pc = 0x2A5A94u;
    {
        const bool branch_taken_0x2a5a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5A94u;
            // 0x2a5a98: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5a94) {
            ctx->pc = 0x2A5AC8u;
            goto label_2a5ac8;
        }
    }
    ctx->pc = 0x2A5A9Cu;
label_2a5a9c:
    // 0x2a5a9c: 0xc0a762c  jal         func_29D8B0
label_2a5aa0:
    if (ctx->pc == 0x2A5AA0u) {
        ctx->pc = 0x2A5AA4u;
        goto label_2a5aa4;
    }
    ctx->pc = 0x2A5A9Cu;
    SET_GPR_U32(ctx, 31, 0x2A5AA4u);
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5AA4u; }
        if (ctx->pc != 0x2A5AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5AA4u; }
        if (ctx->pc != 0x2A5AA4u) { return; }
    }
    ctx->pc = 0x2A5AA4u;
label_2a5aa4:
    // 0x2a5aa4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_2a5aa8:
    if (ctx->pc == 0x2A5AA8u) {
        ctx->pc = 0x2A5AA8u;
            // 0x2a5aa8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A5AACu;
        goto label_2a5aac;
    }
    ctx->pc = 0x2A5AA4u;
    {
        const bool branch_taken_0x2a5aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5AA4u;
            // 0x2a5aa8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5aa4) {
            ctx->pc = 0x2A5A58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a5a58;
        }
    }
    ctx->pc = 0x2A5AACu;
label_2a5aac:
    // 0x2a5aac: 0x0  nop
    ctx->pc = 0x2a5aacu;
    // NOP
label_2a5ab0:
    // 0x2a5ab0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2a5ab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2a5ab4:
    // 0x2a5ab4: 0x26310330  addiu       $s1, $s1, 0x330
    ctx->pc = 0x2a5ab4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 816));
label_2a5ab8:
    // 0x2a5ab8: 0x8fc20d40  lw          $v0, 0xD40($fp)
    ctx->pc = 0x2a5ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 3392)));
label_2a5abc:
    // 0x2a5abc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2a5abcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2a5ac0:
    // 0x2a5ac0: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
label_2a5ac4:
    if (ctx->pc == 0x2A5AC4u) {
        ctx->pc = 0x2A5AC4u;
            // 0x2a5ac4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A5AC8u;
        goto label_2a5ac8;
    }
    ctx->pc = 0x2A5AC0u;
    {
        const bool branch_taken_0x2a5ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5AC0u;
            // 0x2a5ac4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5ac0) {
            ctx->pc = 0x2A59E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a59e8;
        }
    }
    ctx->pc = 0x2A5AC8u;
label_2a5ac8:
    // 0x2a5ac8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2a5ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2a5acc:
    // 0x2a5acc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2a5accu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2a5ad0:
    // 0x2a5ad0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2a5ad0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2a5ad4:
    // 0x2a5ad4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2a5ad4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2a5ad8:
    // 0x2a5ad8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2a5ad8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2a5adc:
    // 0x2a5adc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a5adcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2a5ae0:
    // 0x2a5ae0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a5ae0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2a5ae4:
    // 0x2a5ae4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a5ae4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a5ae8:
    // 0x2a5ae8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a5ae8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a5aec:
    // 0x2a5aec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a5aecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a5af0:
    // 0x2a5af0: 0x3e00008  jr          $ra
label_2a5af4:
    if (ctx->pc == 0x2A5AF4u) {
        ctx->pc = 0x2A5AF4u;
            // 0x2a5af4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x2A5AF8u;
        goto label_fallthrough_0x2a5af0;
    }
    ctx->pc = 0x2A5AF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5AF0u;
            // 0x2a5af4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2a5af0:
    ctx->pc = 0x2A5AF8u;
}
