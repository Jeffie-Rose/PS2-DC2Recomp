#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DataAssignMotionMDT__18mgCVisualMotionMDTFP10MDT_HEADERP14mgCVMotionDataP9mgCMemoryP9mgCMemoryP17mgCTextureManager
// Address: 0x289940 - 0x289b3c
void DataAssignMotionMDT__18mgCVisualMotionMDTFP10MDT_HEADERP14mgCVMotionDataP9mgCMemoryP9mgCMemoryP17mgCTextureManager_0x289940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DataAssignMotionMDT__18mgCVisualMotionMDTFP10MDT_HEADERP14mgCVMotionDataP9mgCMemoryP9mgCMemoryP17mgCTextureManager_0x289940");
#endif

    switch (ctx->pc) {
        case 0x289940u: goto label_289940;
        case 0x289944u: goto label_289944;
        case 0x289948u: goto label_289948;
        case 0x28994cu: goto label_28994c;
        case 0x289950u: goto label_289950;
        case 0x289954u: goto label_289954;
        case 0x289958u: goto label_289958;
        case 0x28995cu: goto label_28995c;
        case 0x289960u: goto label_289960;
        case 0x289964u: goto label_289964;
        case 0x289968u: goto label_289968;
        case 0x28996cu: goto label_28996c;
        case 0x289970u: goto label_289970;
        case 0x289974u: goto label_289974;
        case 0x289978u: goto label_289978;
        case 0x28997cu: goto label_28997c;
        case 0x289980u: goto label_289980;
        case 0x289984u: goto label_289984;
        case 0x289988u: goto label_289988;
        case 0x28998cu: goto label_28998c;
        case 0x289990u: goto label_289990;
        case 0x289994u: goto label_289994;
        case 0x289998u: goto label_289998;
        case 0x28999cu: goto label_28999c;
        case 0x2899a0u: goto label_2899a0;
        case 0x2899a4u: goto label_2899a4;
        case 0x2899a8u: goto label_2899a8;
        case 0x2899acu: goto label_2899ac;
        case 0x2899b0u: goto label_2899b0;
        case 0x2899b4u: goto label_2899b4;
        case 0x2899b8u: goto label_2899b8;
        case 0x2899bcu: goto label_2899bc;
        case 0x2899c0u: goto label_2899c0;
        case 0x2899c4u: goto label_2899c4;
        case 0x2899c8u: goto label_2899c8;
        case 0x2899ccu: goto label_2899cc;
        case 0x2899d0u: goto label_2899d0;
        case 0x2899d4u: goto label_2899d4;
        case 0x2899d8u: goto label_2899d8;
        case 0x2899dcu: goto label_2899dc;
        case 0x2899e0u: goto label_2899e0;
        case 0x2899e4u: goto label_2899e4;
        case 0x2899e8u: goto label_2899e8;
        case 0x2899ecu: goto label_2899ec;
        case 0x2899f0u: goto label_2899f0;
        case 0x2899f4u: goto label_2899f4;
        case 0x2899f8u: goto label_2899f8;
        case 0x2899fcu: goto label_2899fc;
        case 0x289a00u: goto label_289a00;
        case 0x289a04u: goto label_289a04;
        case 0x289a08u: goto label_289a08;
        case 0x289a0cu: goto label_289a0c;
        case 0x289a10u: goto label_289a10;
        case 0x289a14u: goto label_289a14;
        case 0x289a18u: goto label_289a18;
        case 0x289a1cu: goto label_289a1c;
        case 0x289a20u: goto label_289a20;
        case 0x289a24u: goto label_289a24;
        case 0x289a28u: goto label_289a28;
        case 0x289a2cu: goto label_289a2c;
        case 0x289a30u: goto label_289a30;
        case 0x289a34u: goto label_289a34;
        case 0x289a38u: goto label_289a38;
        case 0x289a3cu: goto label_289a3c;
        case 0x289a40u: goto label_289a40;
        case 0x289a44u: goto label_289a44;
        case 0x289a48u: goto label_289a48;
        case 0x289a4cu: goto label_289a4c;
        case 0x289a50u: goto label_289a50;
        case 0x289a54u: goto label_289a54;
        case 0x289a58u: goto label_289a58;
        case 0x289a5cu: goto label_289a5c;
        case 0x289a60u: goto label_289a60;
        case 0x289a64u: goto label_289a64;
        case 0x289a68u: goto label_289a68;
        case 0x289a6cu: goto label_289a6c;
        case 0x289a70u: goto label_289a70;
        case 0x289a74u: goto label_289a74;
        case 0x289a78u: goto label_289a78;
        case 0x289a7cu: goto label_289a7c;
        case 0x289a80u: goto label_289a80;
        case 0x289a84u: goto label_289a84;
        case 0x289a88u: goto label_289a88;
        case 0x289a8cu: goto label_289a8c;
        case 0x289a90u: goto label_289a90;
        case 0x289a94u: goto label_289a94;
        case 0x289a98u: goto label_289a98;
        case 0x289a9cu: goto label_289a9c;
        case 0x289aa0u: goto label_289aa0;
        case 0x289aa4u: goto label_289aa4;
        case 0x289aa8u: goto label_289aa8;
        case 0x289aacu: goto label_289aac;
        case 0x289ab0u: goto label_289ab0;
        case 0x289ab4u: goto label_289ab4;
        case 0x289ab8u: goto label_289ab8;
        case 0x289abcu: goto label_289abc;
        case 0x289ac0u: goto label_289ac0;
        case 0x289ac4u: goto label_289ac4;
        case 0x289ac8u: goto label_289ac8;
        case 0x289accu: goto label_289acc;
        case 0x289ad0u: goto label_289ad0;
        case 0x289ad4u: goto label_289ad4;
        case 0x289ad8u: goto label_289ad8;
        case 0x289adcu: goto label_289adc;
        case 0x289ae0u: goto label_289ae0;
        case 0x289ae4u: goto label_289ae4;
        case 0x289ae8u: goto label_289ae8;
        case 0x289aecu: goto label_289aec;
        case 0x289af0u: goto label_289af0;
        case 0x289af4u: goto label_289af4;
        case 0x289af8u: goto label_289af8;
        case 0x289afcu: goto label_289afc;
        case 0x289b00u: goto label_289b00;
        case 0x289b04u: goto label_289b04;
        case 0x289b08u: goto label_289b08;
        case 0x289b0cu: goto label_289b0c;
        case 0x289b10u: goto label_289b10;
        case 0x289b14u: goto label_289b14;
        case 0x289b18u: goto label_289b18;
        case 0x289b1cu: goto label_289b1c;
        case 0x289b20u: goto label_289b20;
        case 0x289b24u: goto label_289b24;
        case 0x289b28u: goto label_289b28;
        case 0x289b2cu: goto label_289b2c;
        case 0x289b30u: goto label_289b30;
        case 0x289b34u: goto label_289b34;
        case 0x289b38u: goto label_289b38;
        default: break;
    }

    ctx->pc = 0x289940u;

label_289940:
    // 0x289940: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x289940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_289944:
    // 0x289944: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x289944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_289948:
    // 0x289948: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x289948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_28994c:
    // 0x28994c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x28994cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_289950:
    // 0x289950: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x289950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_289954:
    // 0x289954: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x289954u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_289958:
    // 0x289958: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x289958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_28995c:
    // 0x28995c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x28995cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_289960:
    // 0x289960: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x289960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_289964:
    // 0x289964: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x289964u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_289968:
    // 0x289968: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x289968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_28996c:
    // 0x28996c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28996cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_289970:
    // 0x289970: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x289970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_289974:
    // 0x289974: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_289978:
    if (ctx->pc == 0x289978u) {
        ctx->pc = 0x289978u;
            // 0x289978: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28997Cu;
        goto label_28997c;
    }
    ctx->pc = 0x289974u;
    {
        const bool branch_taken_0x289974 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x289978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289974u;
            // 0x289978: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289974) {
            ctx->pc = 0x289984u;
            goto label_289984;
        }
    }
    ctx->pc = 0x28997Cu;
label_28997c:
    // 0x28997c: 0x10000065  b           . + 4 + (0x65 << 2)
label_289980:
    if (ctx->pc == 0x289980u) {
        ctx->pc = 0x289980u;
            // 0x289980: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x289984u;
        goto label_289984;
    }
    ctx->pc = 0x28997Cu;
    {
        const bool branch_taken_0x28997c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28997Cu;
            // 0x289980: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28997c) {
            ctx->pc = 0x289B14u;
            goto label_289b14;
        }
    }
    ctx->pc = 0x289984u;
label_289984:
    // 0x289984: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x289984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_289988:
    // 0x289988: 0x15200003  bnez        $t1, . + 4 + (0x3 << 2)
label_28998c:
    if (ctx->pc == 0x28998Cu) {
        ctx->pc = 0x28998Cu;
            // 0x28998c: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->pc = 0x289990u;
        goto label_289990;
    }
    ctx->pc = 0x289988u;
    {
        const bool branch_taken_0x289988 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x28998Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289988u;
            // 0x28998c: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289988) {
            ctx->pc = 0x289998u;
            goto label_289998;
        }
    }
    ctx->pc = 0x289990u;
label_289990:
    // 0x289990: 0x3c090038  lui         $t1, 0x38
    ctx->pc = 0x289990u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)56 << 16));
label_289994:
    // 0x289994: 0x25291ef0  addiu       $t1, $t1, 0x1EF0
    ctx->pc = 0x289994u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 7920));
label_289998:
    // 0x289998: 0xaea90008  sw          $t1, 0x8($s5)
    ctx->pc = 0x289998u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 9));
label_28999c:
    // 0x28999c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x28999cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2899a0:
    // 0x2899a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2899a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2899a4:
    // 0x2899a4: 0xc04fb88  jal         func_13EE20
label_2899a8:
    if (ctx->pc == 0x2899A8u) {
        ctx->pc = 0x2899A8u;
            // 0x2899a8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2899ACu;
        goto label_2899ac;
    }
    ctx->pc = 0x2899A4u;
    SET_GPR_U32(ctx, 31, 0x2899ACu);
    ctx->pc = 0x2899A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2899A4u;
            // 0x2899a8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13EE20u;
    if (runtime->hasFunction(0x13EE20u)) {
        auto targetFn = runtime->lookupFunction(0x13EE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2899ACu; }
        if (ctx->pc != 0x2899ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyMDTDataPointer__12mgCVisualMDTFP10MDT_HEADERP9mgCMemory_0x13ee20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2899ACu; }
        if (ctx->pc != 0x2899ACu) { return; }
    }
    ctx->pc = 0x2899ACu;
label_2899ac:
    // 0x2899ac: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x2899acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_2899b0:
    // 0x2899b0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2899b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2899b4:
    // 0x2899b4: 0xaea20050  sw          $v0, 0x50($s5)
    ctx->pc = 0x2899b4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 2));
label_2899b8:
    // 0x2899b8: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x2899b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_2899bc:
    // 0x2899bc: 0xaea20058  sw          $v0, 0x58($s5)
    ctx->pc = 0x2899bcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 88), GPR_U32(ctx, 2));
label_2899c0:
    // 0x2899c0: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2899c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2899c4:
    // 0x2899c4: 0xaea20054  sw          $v0, 0x54($s5)
    ctx->pc = 0x2899c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
label_2899c8:
    // 0x2899c8: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x2899c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2899cc:
    // 0x2899cc: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x2899ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2899d0:
    // 0x2899d0: 0xc0a252c  jal         func_2894B0
label_2899d4:
    if (ctx->pc == 0x2899D4u) {
        ctx->pc = 0x2899D4u;
            // 0x2899d4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2899D8u;
        goto label_2899d8;
    }
    ctx->pc = 0x2899D0u;
    SET_GPR_U32(ctx, 31, 0x2899D8u);
    ctx->pc = 0x2899D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2899D0u;
            // 0x2899d4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2894B0u;
    if (runtime->hasFunction(0x2894B0u)) {
        auto targetFn = runtime->lookupFunction(0x2894B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2899D8u; }
        if (ctx->pc != 0x2899D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateVertexWeight__18mgCVisualMotionMDTFPUiiP9mgCMemory_0x2894b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2899D8u; }
        if (ctx->pc != 0x2899D8u) { return; }
    }
    ctx->pc = 0x2899D8u;
label_2899d8:
    // 0x2899d8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2899d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2899dc:
    // 0x2899dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2899dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2899e0:
    // 0x2899e0: 0x2a41021  addu        $v0, $s5, $a0
    ctx->pc = 0x2899e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_2899e4:
    // 0x2899e4: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x2899e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_2899e8:
    // 0x2899e8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_2899ec:
    if (ctx->pc == 0x2899ECu) {
        ctx->pc = 0x2899F0u;
        goto label_2899f0;
    }
    ctx->pc = 0x2899E8u;
    {
        const bool branch_taken_0x2899e8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2899e8) {
            ctx->pc = 0x289A00u;
            goto label_289a00;
        }
    }
    ctx->pc = 0x2899F0u;
label_2899f0:
    // 0x2899f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2899f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2899f4:
    // 0x2899f4: 0x28620020  slti        $v0, $v1, 0x20
    ctx->pc = 0x2899f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
label_2899f8:
    // 0x2899f8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_2899fc:
    if (ctx->pc == 0x2899FCu) {
        ctx->pc = 0x2899FCu;
            // 0x2899fc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x289A00u;
        goto label_289a00;
    }
    ctx->pc = 0x2899F8u;
    {
        const bool branch_taken_0x2899f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2899FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2899F8u;
            // 0x2899fc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2899f8) {
            ctx->pc = 0x2899E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2899e0;
        }
    }
    ctx->pc = 0x289A00u;
label_289a00:
    // 0x289a00: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x289a00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_289a04:
    // 0x289a04: 0x2482003c  addiu       $v0, $a0, 0x3C
    ctx->pc = 0x289a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 60));
label_289a08:
    // 0x289a08: 0x41843  sra         $v1, $a0, 1
    ctx->pc = 0x289a08u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
label_289a0c:
    // 0x289a0c: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_289a10:
    if (ctx->pc == 0x289A10u) {
        ctx->pc = 0x289A10u;
            // 0x289a10: 0xaea20010  sw          $v0, 0x10($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x289A14u;
        goto label_289a14;
    }
    ctx->pc = 0x289A0Cu;
    {
        const bool branch_taken_0x289a0c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x289A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289A0Cu;
            // 0x289a10: 0xaea20010  sw          $v0, 0x10($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289a0c) {
            ctx->pc = 0x289A1Cu;
            goto label_289a1c;
        }
    }
    ctx->pc = 0x289A14u;
label_289a14:
    // 0x289a14: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x289a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_289a18:
    // 0x289a18: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x289a18u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_289a1c:
    // 0x289a1c: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x289a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_289a20:
    // 0x289a20: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x289a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_289a24:
    // 0x289a24: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x289a24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_289a28:
    // 0x289a28: 0xc04e640  jal         func_139900
label_289a2c:
    if (ctx->pc == 0x289A2Cu) {
        ctx->pc = 0x289A2Cu;
            // 0x289a2c: 0xaea20014  sw          $v0, 0x14($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x289A30u;
        goto label_289a30;
    }
    ctx->pc = 0x289A28u;
    SET_GPR_U32(ctx, 31, 0x289A30u);
    ctx->pc = 0x289A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289A28u;
            // 0x289a2c: 0xaea20014  sw          $v0, 0x14($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289A30u; }
        if (ctx->pc != 0x289A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289A30u; }
        if (ctx->pc != 0x289A30u) { return; }
    }
    ctx->pc = 0x289A30u;
label_289a30:
    // 0x289a30: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x289a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_289a34:
    // 0x289a34: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x289a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_289a38:
    // 0x289a38: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x289a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_289a3c:
    // 0x289a3c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x289a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_289a40:
    // 0x289a40: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x289a40u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_289a44:
    // 0x289a44: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x289a44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_289a48:
    // 0x289a48: 0xc04e79c  jal         func_139E70
label_289a4c:
    if (ctx->pc == 0x289A4Cu) {
        ctx->pc = 0x289A4Cu;
            // 0x289a4c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x289A50u;
        goto label_289a50;
    }
    ctx->pc = 0x289A48u;
    SET_GPR_U32(ctx, 31, 0x289A50u);
    ctx->pc = 0x289A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289A48u;
            // 0x289a4c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289A50u; }
        if (ctx->pc != 0x289A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289A50u; }
        if (ctx->pc != 0x289A50u) { return; }
    }
    ctx->pc = 0x289A50u;
label_289a50:
    // 0x289a50: 0xaea00048  sw          $zero, 0x48($s5)
    ctx->pc = 0x289a50u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 72), GPR_U32(ctx, 0));
label_289a54:
    // 0x289a54: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x289a54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_289a58:
    // 0x289a58: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x289a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_289a5c:
    // 0x289a5c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x289a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_289a60:
    // 0x289a60: 0x8c560008  lw          $s6, 0x8($v0)
    ctx->pc = 0x289a60u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_289a64:
    // 0x289a64: 0x16082a  slt         $at, $zero, $s6
    ctx->pc = 0x289a64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_289a68:
    // 0x289a68: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
label_289a6c:
    if (ctx->pc == 0x289A6Cu) {
        ctx->pc = 0x289A6Cu;
            // 0x289a6c: 0x24500010  addiu       $s0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x289A70u;
        goto label_289a70;
    }
    ctx->pc = 0x289A68u;
    {
        const bool branch_taken_0x289a68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x289A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289A68u;
            // 0x289a6c: 0x24500010  addiu       $s0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289a68) {
            ctx->pc = 0x289B0Cu;
            goto label_289b0c;
        }
    }
    ctx->pc = 0x289A70u;
label_289a70:
    // 0x289a70: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x289a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
label_289a74:
    // 0x289a74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x289a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_289a78:
    // 0x289a78: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x289a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_289a7c:
    // 0x289a7c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x289a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_289a80:
    // 0x289a80: 0x8eb9001c  lw          $t9, 0x1C($s5)
    ctx->pc = 0x289a80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_289a84:
    // 0x289a84: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x289a84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_289a88:
    // 0x289a88: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x289a88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_289a8c:
    // 0x289a8c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x289a8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_289a90:
    // 0x289a90: 0x320f809  jalr        $t9
label_289a94:
    if (ctx->pc == 0x289A94u) {
        ctx->pc = 0x289A94u;
            // 0x289a94: 0x27a800bc  addiu       $t0, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->pc = 0x289A98u;
        goto label_289a98;
    }
    ctx->pc = 0x289A90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x289A98u);
        ctx->pc = 0x289A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289A90u;
            // 0x289a94: 0x27a800bc  addiu       $t0, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x289A98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x289A98u; }
            if (ctx->pc != 0x289A98u) { return; }
        }
        }
    }
    ctx->pc = 0x289A98u;
label_289a98:
    // 0x289a98: 0x8eb9001c  lw          $t9, 0x1C($s5)
    ctx->pc = 0x289a98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_289a9c:
    // 0x289a9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x289a9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_289aa0:
    // 0x289aa0: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x289aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_289aa4:
    // 0x289aa4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x289aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_289aa8:
    // 0x289aa8: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x289aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_289aac:
    // 0x289aac: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x289aacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_289ab0:
    // 0x289ab0: 0x8fa600bc  lw          $a2, 0xBC($sp)
    ctx->pc = 0x289ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_289ab4:
    // 0x289ab4: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x289ab4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_289ab8:
    // 0x289ab8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x289ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_289abc:
    // 0x289abc: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x289abcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_289ac0:
    // 0x289ac0: 0x320f809  jalr        $t9
label_289ac4:
    if (ctx->pc == 0x289AC4u) {
        ctx->pc = 0x289AC4u;
            // 0x289ac4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x289AC8u;
        goto label_289ac8;
    }
    ctx->pc = 0x289AC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x289AC8u);
        ctx->pc = 0x289AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289AC0u;
            // 0x289ac4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x289AC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x289AC8u; }
            if (ctx->pc != 0x289AC8u) { return; }
        }
        }
    }
    ctx->pc = 0x289AC8u;
label_289ac8:
    // 0x289ac8: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x289ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_289acc:
    // 0x289acc: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x289accu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
label_289ad0:
    // 0x289ad0: 0x443025  or          $a2, $v0, $a0
    ctx->pc = 0x289ad0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_289ad4:
    // 0x289ad4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x289ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_289ad8:
    // 0x289ad8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x289ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_289adc:
    // 0x289adc: 0xac660020  sw          $a2, 0x20($v1)
    ctx->pc = 0x289adcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 6));
label_289ae0:
    // 0x289ae0: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x289ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_289ae4:
    // 0x289ae4: 0xac520024  sw          $s2, 0x24($v0)
    ctx->pc = 0x289ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 18));
label_289ae8:
    // 0x289ae8: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x289ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_289aec:
    // 0x289aec: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x289aecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_289af0:
    // 0x289af0: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x289af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_289af4:
    // 0x289af4: 0xc04e748  jal         func_139D20
label_289af8:
    if (ctx->pc == 0x289AF8u) {
        ctx->pc = 0x289AF8u;
            // 0x289af8: 0xac40002c  sw          $zero, 0x2C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
        ctx->pc = 0x289AFCu;
        goto label_289afc;
    }
    ctx->pc = 0x289AF4u;
    SET_GPR_U32(ctx, 31, 0x289AFCu);
    ctx->pc = 0x289AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289AF4u;
            // 0x289af8: 0xac40002c  sw          $zero, 0x2C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289AFCu; }
        if (ctx->pc != 0x289AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289AFCu; }
        if (ctx->pc != 0x289AFCu) { return; }
    }
    ctx->pc = 0x289AFCu;
label_289afc:
    // 0x289afc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x289afcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_289b00:
    // 0x289b00: 0x236102a  slt         $v0, $s1, $s6
    ctx->pc = 0x289b00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_289b04:
    // 0x289b04: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
label_289b08:
    if (ctx->pc == 0x289B08u) {
        ctx->pc = 0x289B0Cu;
        goto label_289b0c;
    }
    ctx->pc = 0x289B04u;
    {
        const bool branch_taken_0x289b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x289b04) {
            ctx->pc = 0x289A70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_289a70;
        }
    }
    ctx->pc = 0x289B0Cu;
label_289b0c:
    // 0x289b0c: 0x0  nop
    ctx->pc = 0x289b0cu;
    // NOP
label_289b10:
    // 0x289b10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x289b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_289b14:
    // 0x289b14: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x289b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_289b18:
    // 0x289b18: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x289b18u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_289b1c:
    // 0x289b1c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x289b1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_289b20:
    // 0x289b20: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x289b20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_289b24:
    // 0x289b24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x289b24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_289b28:
    // 0x289b28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x289b28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_289b2c:
    // 0x289b2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x289b2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_289b30:
    // 0x289b30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x289b30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_289b34:
    // 0x289b34: 0x3e00008  jr          $ra
label_289b38:
    if (ctx->pc == 0x289B38u) {
        ctx->pc = 0x289B38u;
            // 0x289b38: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x289B3Cu;
        goto label_fallthrough_0x289b34;
    }
    ctx->pc = 0x289B34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289B34u;
            // 0x289b38: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x289b34:
    ctx->pc = 0x289B3Cu;
}
