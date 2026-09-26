#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ChangeLOD__11CCharacter2Fi
// Address: 0x178a60 - 0x178c68
void ChangeLOD__11CCharacter2Fi_0x178a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ChangeLOD__11CCharacter2Fi_0x178a60");
#endif

    switch (ctx->pc) {
        case 0x178a60u: goto label_178a60;
        case 0x178a64u: goto label_178a64;
        case 0x178a68u: goto label_178a68;
        case 0x178a6cu: goto label_178a6c;
        case 0x178a70u: goto label_178a70;
        case 0x178a74u: goto label_178a74;
        case 0x178a78u: goto label_178a78;
        case 0x178a7cu: goto label_178a7c;
        case 0x178a80u: goto label_178a80;
        case 0x178a84u: goto label_178a84;
        case 0x178a88u: goto label_178a88;
        case 0x178a8cu: goto label_178a8c;
        case 0x178a90u: goto label_178a90;
        case 0x178a94u: goto label_178a94;
        case 0x178a98u: goto label_178a98;
        case 0x178a9cu: goto label_178a9c;
        case 0x178aa0u: goto label_178aa0;
        case 0x178aa4u: goto label_178aa4;
        case 0x178aa8u: goto label_178aa8;
        case 0x178aacu: goto label_178aac;
        case 0x178ab0u: goto label_178ab0;
        case 0x178ab4u: goto label_178ab4;
        case 0x178ab8u: goto label_178ab8;
        case 0x178abcu: goto label_178abc;
        case 0x178ac0u: goto label_178ac0;
        case 0x178ac4u: goto label_178ac4;
        case 0x178ac8u: goto label_178ac8;
        case 0x178accu: goto label_178acc;
        case 0x178ad0u: goto label_178ad0;
        case 0x178ad4u: goto label_178ad4;
        case 0x178ad8u: goto label_178ad8;
        case 0x178adcu: goto label_178adc;
        case 0x178ae0u: goto label_178ae0;
        case 0x178ae4u: goto label_178ae4;
        case 0x178ae8u: goto label_178ae8;
        case 0x178aecu: goto label_178aec;
        case 0x178af0u: goto label_178af0;
        case 0x178af4u: goto label_178af4;
        case 0x178af8u: goto label_178af8;
        case 0x178afcu: goto label_178afc;
        case 0x178b00u: goto label_178b00;
        case 0x178b04u: goto label_178b04;
        case 0x178b08u: goto label_178b08;
        case 0x178b0cu: goto label_178b0c;
        case 0x178b10u: goto label_178b10;
        case 0x178b14u: goto label_178b14;
        case 0x178b18u: goto label_178b18;
        case 0x178b1cu: goto label_178b1c;
        case 0x178b20u: goto label_178b20;
        case 0x178b24u: goto label_178b24;
        case 0x178b28u: goto label_178b28;
        case 0x178b2cu: goto label_178b2c;
        case 0x178b30u: goto label_178b30;
        case 0x178b34u: goto label_178b34;
        case 0x178b38u: goto label_178b38;
        case 0x178b3cu: goto label_178b3c;
        case 0x178b40u: goto label_178b40;
        case 0x178b44u: goto label_178b44;
        case 0x178b48u: goto label_178b48;
        case 0x178b4cu: goto label_178b4c;
        case 0x178b50u: goto label_178b50;
        case 0x178b54u: goto label_178b54;
        case 0x178b58u: goto label_178b58;
        case 0x178b5cu: goto label_178b5c;
        case 0x178b60u: goto label_178b60;
        case 0x178b64u: goto label_178b64;
        case 0x178b68u: goto label_178b68;
        case 0x178b6cu: goto label_178b6c;
        case 0x178b70u: goto label_178b70;
        case 0x178b74u: goto label_178b74;
        case 0x178b78u: goto label_178b78;
        case 0x178b7cu: goto label_178b7c;
        case 0x178b80u: goto label_178b80;
        case 0x178b84u: goto label_178b84;
        case 0x178b88u: goto label_178b88;
        case 0x178b8cu: goto label_178b8c;
        case 0x178b90u: goto label_178b90;
        case 0x178b94u: goto label_178b94;
        case 0x178b98u: goto label_178b98;
        case 0x178b9cu: goto label_178b9c;
        case 0x178ba0u: goto label_178ba0;
        case 0x178ba4u: goto label_178ba4;
        case 0x178ba8u: goto label_178ba8;
        case 0x178bacu: goto label_178bac;
        case 0x178bb0u: goto label_178bb0;
        case 0x178bb4u: goto label_178bb4;
        case 0x178bb8u: goto label_178bb8;
        case 0x178bbcu: goto label_178bbc;
        case 0x178bc0u: goto label_178bc0;
        case 0x178bc4u: goto label_178bc4;
        case 0x178bc8u: goto label_178bc8;
        case 0x178bccu: goto label_178bcc;
        case 0x178bd0u: goto label_178bd0;
        case 0x178bd4u: goto label_178bd4;
        case 0x178bd8u: goto label_178bd8;
        case 0x178bdcu: goto label_178bdc;
        case 0x178be0u: goto label_178be0;
        case 0x178be4u: goto label_178be4;
        case 0x178be8u: goto label_178be8;
        case 0x178becu: goto label_178bec;
        case 0x178bf0u: goto label_178bf0;
        case 0x178bf4u: goto label_178bf4;
        case 0x178bf8u: goto label_178bf8;
        case 0x178bfcu: goto label_178bfc;
        case 0x178c00u: goto label_178c00;
        case 0x178c04u: goto label_178c04;
        case 0x178c08u: goto label_178c08;
        case 0x178c0cu: goto label_178c0c;
        case 0x178c10u: goto label_178c10;
        case 0x178c14u: goto label_178c14;
        case 0x178c18u: goto label_178c18;
        case 0x178c1cu: goto label_178c1c;
        case 0x178c20u: goto label_178c20;
        case 0x178c24u: goto label_178c24;
        case 0x178c28u: goto label_178c28;
        case 0x178c2cu: goto label_178c2c;
        case 0x178c30u: goto label_178c30;
        case 0x178c34u: goto label_178c34;
        case 0x178c38u: goto label_178c38;
        case 0x178c3cu: goto label_178c3c;
        case 0x178c40u: goto label_178c40;
        case 0x178c44u: goto label_178c44;
        case 0x178c48u: goto label_178c48;
        case 0x178c4cu: goto label_178c4c;
        case 0x178c50u: goto label_178c50;
        case 0x178c54u: goto label_178c54;
        case 0x178c58u: goto label_178c58;
        case 0x178c5cu: goto label_178c5c;
        case 0x178c60u: goto label_178c60;
        case 0x178c64u: goto label_178c64;
        default: break;
    }

    ctx->pc = 0x178a60u;

label_178a60:
    // 0x178a60: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x178a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_178a64:
    // 0x178a64: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x178a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_178a68:
    // 0x178a68: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x178a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_178a6c:
    // 0x178a6c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x178a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_178a70:
    // 0x178a70: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x178a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_178a74:
    // 0x178a74: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x178a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_178a78:
    // 0x178a78: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x178a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_178a7c:
    // 0x178a7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x178a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_178a80:
    // 0x178a80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x178a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_178a84:
    // 0x178a84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x178a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_178a88:
    // 0x178a88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x178a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_178a8c:
    // 0x178a8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x178a8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_178a90:
    // 0x178a90: 0x8c820354  lw          $v0, 0x354($a0)
    ctx->pc = 0x178a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 852)));
label_178a94:
    // 0x178a94: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
label_178a98:
    if (ctx->pc == 0x178A98u) {
        ctx->pc = 0x178A98u;
            // 0x178a98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x178A9Cu;
        goto label_178a9c;
    }
    ctx->pc = 0x178A94u;
    {
        const bool branch_taken_0x178a94 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x178A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178A94u;
            // 0x178a98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178a94) {
            ctx->pc = 0x178AACu;
            goto label_178aac;
        }
    }
    ctx->pc = 0x178A9Cu;
label_178a9c:
    // 0x178a9c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_178aa0:
    if (ctx->pc == 0x178AA0u) {
        ctx->pc = 0x178AA0u;
            // 0x178aa0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x178AA4u;
        goto label_178aa4;
    }
    ctx->pc = 0x178A9Cu;
    {
        const bool branch_taken_0x178a9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x178AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178A9Cu;
            // 0x178aa0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178a9c) {
            ctx->pc = 0x178AACu;
            goto label_178aac;
        }
    }
    ctx->pc = 0x178AA4u;
label_178aa4:
    // 0x178aa4: 0xc05e298  jal         func_178A60
label_178aa8:
    if (ctx->pc == 0x178AA8u) {
        ctx->pc = 0x178AACu;
        goto label_178aac;
    }
    ctx->pc = 0x178AA4u;
    SET_GPR_U32(ctx, 31, 0x178AACu);
    ctx->pc = 0x178A60u;
    goto label_178a60;
    ctx->pc = 0x178AACu;
label_178aac:
    // 0x178aac: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
label_178ab0:
    if (ctx->pc == 0x178AB0u) {
        ctx->pc = 0x178AB0u;
            // 0x178ab0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x178AB4u;
        goto label_178ab4;
    }
    ctx->pc = 0x178AACu;
    {
        const bool branch_taken_0x178aac = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x178AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178AACu;
            // 0x178ab0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178aac) {
            ctx->pc = 0x178AC8u;
            goto label_178ac8;
        }
    }
    ctx->pc = 0x178AB4u;
label_178ab4:
    // 0x178ab4: 0x8e22034c  lw          $v0, 0x34C($s1)
    ctx->pc = 0x178ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 844)));
label_178ab8:
    // 0x178ab8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x178ab8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_178abc:
    // 0x178abc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_178ac0:
    if (ctx->pc == 0x178AC0u) {
        ctx->pc = 0x178AC4u;
        goto label_178ac4;
    }
    ctx->pc = 0x178ABCu;
    {
        const bool branch_taken_0x178abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x178abc) {
            ctx->pc = 0x178AD0u;
            goto label_178ad0;
        }
    }
    ctx->pc = 0x178AC4u;
label_178ac4:
    // 0x178ac4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x178ac4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_178ac8:
    // 0x178ac8: 0x1000005c  b           . + 4 + (0x5C << 2)
label_178acc:
    if (ctx->pc == 0x178ACCu) {
        ctx->pc = 0x178ACCu;
            // 0x178acc: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x178AD0u;
        goto label_178ad0;
    }
    ctx->pc = 0x178AC8u;
    {
        const bool branch_taken_0x178ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178AC8u;
            // 0x178acc: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178ac8) {
            ctx->pc = 0x178C3Cu;
            goto label_178c3c;
        }
    }
    ctx->pc = 0x178AD0u;
label_178ad0:
    // 0x178ad0: 0x8e220350  lw          $v0, 0x350($s1)
    ctx->pc = 0x178ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 848)));
label_178ad4:
    // 0x178ad4: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x178ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_178ad8:
    // 0x178ad8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x178ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_178adc:
    // 0x178adc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x178adcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_178ae0:
    // 0x178ae0: 0x43b021  addu        $s6, $v0, $v1
    ctx->pc = 0x178ae0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_178ae4:
    // 0x178ae4: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x178ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_178ae8:
    // 0x178ae8: 0xae220358  sw          $v0, 0x358($s1)
    ctx->pc = 0x178ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 856), GPR_U32(ctx, 2));
label_178aec:
    // 0x178aec: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x178aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_178af0:
    // 0x178af0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_178af4:
    if (ctx->pc == 0x178AF4u) {
        ctx->pc = 0x178AF8u;
        goto label_178af8;
    }
    ctx->pc = 0x178AF0u;
    {
        const bool branch_taken_0x178af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x178af0) {
            ctx->pc = 0x178B0Cu;
            goto label_178b0c;
        }
    }
    ctx->pc = 0x178AF8u;
label_178af8:
    // 0x178af8: 0x8e220354  lw          $v0, 0x354($s1)
    ctx->pc = 0x178af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 852)));
label_178afc:
    // 0x178afc: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
label_178b00:
    if (ctx->pc == 0x178B00u) {
        ctx->pc = 0x178B00u;
            // 0x178b00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x178B04u;
        goto label_178b04;
    }
    ctx->pc = 0x178AFCu;
    {
        const bool branch_taken_0x178afc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x178B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178AFCu;
            // 0x178b00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178afc) {
            ctx->pc = 0x178B0Cu;
            goto label_178b0c;
        }
    }
    ctx->pc = 0x178B04u;
label_178b04:
    // 0x178b04: 0x1000004c  b           . + 4 + (0x4C << 2)
label_178b08:
    if (ctx->pc == 0x178B08u) {
        ctx->pc = 0x178B0Cu;
        goto label_178b0c;
    }
    ctx->pc = 0x178B04u;
    {
        const bool branch_taken_0x178b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x178b04) {
            ctx->pc = 0x178C38u;
            goto label_178c38;
        }
    }
    ctx->pc = 0x178B0Cu;
label_178b0c:
    // 0x178b0c: 0xae300354  sw          $s0, 0x354($s1)
    ctx->pc = 0x178b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 852), GPR_U32(ctx, 16));
label_178b10:
    // 0x178b10: 0x8e370070  lw          $s7, 0x70($s1)
    ctx->pc = 0x178b10u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_178b14:
    // 0x178b14: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
label_178b18:
    if (ctx->pc == 0x178B18u) {
        ctx->pc = 0x178B18u;
            // 0x178b18: 0x8ed0000c  lw          $s0, 0xC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
        ctx->pc = 0x178B1Cu;
        goto label_178b1c;
    }
    ctx->pc = 0x178B14u;
    {
        const bool branch_taken_0x178b14 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x178B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178B14u;
            // 0x178b18: 0x8ed0000c  lw          $s0, 0xC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178b14) {
            ctx->pc = 0x178B24u;
            goto label_178b24;
        }
    }
    ctx->pc = 0x178B1Cu;
label_178b1c:
    // 0x178b1c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_178b20:
    if (ctx->pc == 0x178B20u) {
        ctx->pc = 0x178B24u;
        goto label_178b24;
    }
    ctx->pc = 0x178B1Cu;
    {
        const bool branch_taken_0x178b1c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x178b1c) {
            ctx->pc = 0x178B2Cu;
            goto label_178b2c;
        }
    }
    ctx->pc = 0x178B24u;
label_178b24:
    // 0x178b24: 0x10000044  b           . + 4 + (0x44 << 2)
label_178b28:
    if (ctx->pc == 0x178B28u) {
        ctx->pc = 0x178B28u;
            // 0x178b28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x178B2Cu;
        goto label_178b2c;
    }
    ctx->pc = 0x178B24u;
    {
        const bool branch_taken_0x178b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178B24u;
            // 0x178b28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178b24) {
            ctx->pc = 0x178C38u;
            goto label_178c38;
        }
    }
    ctx->pc = 0x178B2Cu;
label_178b2c:
    // 0x178b2c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x178b2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_178b30:
    // 0x178b30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x178b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_178b34:
    // 0x178b34: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x178b34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_178b38:
    // 0x178b38: 0x320f809  jalr        $t9
label_178b3c:
    if (ctx->pc == 0x178B3Cu) {
        ctx->pc = 0x178B3Cu;
            // 0x178b3c: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x178B40u;
        goto label_178b40;
    }
    ctx->pc = 0x178B38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x178B40u);
        ctx->pc = 0x178B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178B38u;
            // 0x178b3c: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x178B40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x178B40u; }
            if (ctx->pc != 0x178B40u) { return; }
        }
        }
    }
    ctx->pc = 0x178B40u;
label_178b40:
    // 0x178b40: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x178b40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_178b44:
    // 0x178b44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x178b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_178b48:
    // 0x178b48: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x178b48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_178b4c:
    // 0x178b4c: 0x320f809  jalr        $t9
label_178b50:
    if (ctx->pc == 0x178B50u) {
        ctx->pc = 0x178B50u;
            // 0x178b50: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x178B54u;
        goto label_178b54;
    }
    ctx->pc = 0x178B4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x178B54u);
        ctx->pc = 0x178B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178B4Cu;
            // 0x178b50: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x178B54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x178B54u; }
            if (ctx->pc != 0x178B54u) { return; }
        }
        }
    }
    ctx->pc = 0x178B54u;
label_178b54:
    // 0x178b54: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x178b54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_178b58:
    // 0x178b58: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x178b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_178b5c:
    // 0x178b5c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x178b5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_178b60:
    // 0x178b60: 0x320f809  jalr        $t9
label_178b64:
    if (ctx->pc == 0x178B64u) {
        ctx->pc = 0x178B64u;
            // 0x178b64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x178B68u;
        goto label_178b68;
    }
    ctx->pc = 0x178B60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x178B68u);
        ctx->pc = 0x178B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178B60u;
            // 0x178b64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x178B68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x178B68u; }
            if (ctx->pc != 0x178B68u) { return; }
        }
        }
    }
    ctx->pc = 0x178B68u;
label_178b68:
    // 0x178b68: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x178b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_178b6c:
    // 0x178b6c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_178b70:
    if (ctx->pc == 0x178B70u) {
        ctx->pc = 0x178B70u;
            // 0x178b70: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x178B74u;
        goto label_178b74;
    }
    ctx->pc = 0x178B6Cu;
    {
        const bool branch_taken_0x178b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178B6Cu;
            // 0x178b70: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178b6c) {
            ctx->pc = 0x178B7Cu;
            goto label_178b7c;
        }
    }
    ctx->pc = 0x178B74u;
label_178b74:
    // 0x178b74: 0x10000030  b           . + 4 + (0x30 << 2)
label_178b78:
    if (ctx->pc == 0x178B78u) {
        ctx->pc = 0x178B7Cu;
        goto label_178b7c;
    }
    ctx->pc = 0x178B74u;
    {
        const bool branch_taken_0x178b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x178b74) {
            ctx->pc = 0x178C38u;
            goto label_178c38;
        }
    }
    ctx->pc = 0x178B7Cu;
label_178b7c:
    // 0x178b7c: 0x8efe0068  lw          $fp, 0x68($s7)
    ctx->pc = 0x178b7cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 104)));
label_178b80:
    // 0x178b80: 0x8ed10014  lw          $s1, 0x14($s6)
    ctx->pc = 0x178b80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
label_178b84:
    // 0x178b84: 0x10000028  b           . + 4 + (0x28 << 2)
label_178b88:
    if (ctx->pc == 0x178B88u) {
        ctx->pc = 0x178B88u;
            // 0x178b88: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x178B8Cu;
        goto label_178b8c;
    }
    ctx->pc = 0x178B84u;
    {
        const bool branch_taken_0x178b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178B84u;
            // 0x178b88: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178b84) {
            ctx->pc = 0x178C28u;
            goto label_178c28;
        }
    }
    ctx->pc = 0x178B8Cu;
label_178b8c:
    // 0x178b8c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x178b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_178b90:
    // 0x178b90: 0xc04d9ec  jal         func_1367B0
label_178b94:
    if (ctx->pc == 0x178B94u) {
        ctx->pc = 0x178B94u;
            // 0x178b94: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x178B98u;
        goto label_178b98;
    }
    ctx->pc = 0x178B90u;
    SET_GPR_U32(ctx, 31, 0x178B98u);
    ctx->pc = 0x178B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178B90u;
            // 0x178b94: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1367B0u;
    if (runtime->hasFunction(0x1367B0u)) {
        auto targetFn = runtime->lookupFunction(0x1367B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178B98u; }
        if (ctx->pc != 0x178B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFrame__8mgCFrameFi_0x1367b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178B98u; }
        if (ctx->pc != 0x178B98u) { return; }
    }
    ctx->pc = 0x178B98u;
label_178b98:
    // 0x178b98: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x178b98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_178b9c:
    // 0x178b9c: 0x1260001f  beqz        $s3, . + 4 + (0x1F << 2)
label_178ba0:
    if (ctx->pc == 0x178BA0u) {
        ctx->pc = 0x178BA4u;
        goto label_178ba4;
    }
    ctx->pc = 0x178B9Cu;
    {
        const bool branch_taken_0x178b9c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x178b9c) {
            ctx->pc = 0x178C1Cu;
            goto label_178c1c;
        }
    }
    ctx->pc = 0x178BA4u;
label_178ba4:
    // 0x178ba4: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x178ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_178ba8:
    // 0x178ba8: 0xc04d9ec  jal         func_1367B0
label_178bac:
    if (ctx->pc == 0x178BACu) {
        ctx->pc = 0x178BACu;
            // 0x178bac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x178BB0u;
        goto label_178bb0;
    }
    ctx->pc = 0x178BA8u;
    SET_GPR_U32(ctx, 31, 0x178BB0u);
    ctx->pc = 0x178BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178BA8u;
            // 0x178bac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1367B0u;
    if (runtime->hasFunction(0x1367B0u)) {
        auto targetFn = runtime->lookupFunction(0x1367B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178BB0u; }
        if (ctx->pc != 0x178BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFrame__8mgCFrameFi_0x1367b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178BB0u; }
        if (ctx->pc != 0x178BB0u) { return; }
    }
    ctx->pc = 0x178BB0u;
label_178bb0:
    // 0x178bb0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x178bb0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_178bb4:
    // 0x178bb4: 0x12800019  beqz        $s4, . + 4 + (0x19 << 2)
label_178bb8:
    if (ctx->pc == 0x178BB8u) {
        ctx->pc = 0x178BBCu;
        goto label_178bbc;
    }
    ctx->pc = 0x178BB4u;
    {
        const bool branch_taken_0x178bb4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x178bb4) {
            ctx->pc = 0x178C1Cu;
            goto label_178c1c;
        }
    }
    ctx->pc = 0x178BBCu;
label_178bbc:
    // 0x178bbc: 0x8e9500f8  lw          $s5, 0xF8($s4)
    ctx->pc = 0x178bbcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 248)));
label_178bc0:
    // 0x178bc0: 0x12a00009  beqz        $s5, . + 4 + (0x9 << 2)
label_178bc4:
    if (ctx->pc == 0x178BC4u) {
        ctx->pc = 0x178BC8u;
        goto label_178bc8;
    }
    ctx->pc = 0x178BC0u;
    {
        const bool branch_taken_0x178bc0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x178bc0) {
            ctx->pc = 0x178BE8u;
            goto label_178be8;
        }
    }
    ctx->pc = 0x178BC8u;
label_178bc8:
    // 0x178bc8: 0x8eb9001c  lw          $t9, 0x1C($s5)
    ctx->pc = 0x178bc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_178bcc:
    // 0x178bcc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x178bccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_178bd0:
    // 0x178bd0: 0x320f809  jalr        $t9
label_178bd4:
    if (ctx->pc == 0x178BD4u) {
        ctx->pc = 0x178BD4u;
            // 0x178bd4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x178BD8u;
        goto label_178bd8;
    }
    ctx->pc = 0x178BD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x178BD8u);
        ctx->pc = 0x178BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178BD0u;
            // 0x178bd4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x178BD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x178BD8u; }
            if (ctx->pc != 0x178BD8u) { return; }
        }
        }
    }
    ctx->pc = 0x178BD8u;
label_178bd8:
    // 0x178bd8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x178bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_178bdc:
    // 0x178bdc: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_178be0:
    if (ctx->pc == 0x178BE0u) {
        ctx->pc = 0x178BE4u;
        goto label_178be4;
    }
    ctx->pc = 0x178BDCu;
    {
        const bool branch_taken_0x178bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x178bdc) {
            ctx->pc = 0x178BE8u;
            goto label_178be8;
        }
    }
    ctx->pc = 0x178BE4u;
label_178be4:
    // 0x178be4: 0xaebe0050  sw          $fp, 0x50($s5)
    ctx->pc = 0x178be4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 30));
label_178be8:
    // 0x178be8: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x178be8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_178bec:
    // 0x178bec: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x178becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_178bf0:
    // 0x178bf0: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x178bf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_178bf4:
    // 0x178bf4: 0x320f809  jalr        $t9
label_178bf8:
    if (ctx->pc == 0x178BF8u) {
        ctx->pc = 0x178BF8u;
            // 0x178bf8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x178BFCu;
        goto label_178bfc;
    }
    ctx->pc = 0x178BF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x178BFCu);
        ctx->pc = 0x178BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178BF4u;
            // 0x178bf8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x178BFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x178BFCu; }
            if (ctx->pc != 0x178BFCu) { return; }
        }
        }
    }
    ctx->pc = 0x178BFCu;
label_178bfc:
    // 0x178bfc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x178bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_178c00:
    // 0x178c00: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x178c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_178c04:
    // 0x178c04: 0xc04d9bc  jal         func_1366F0
label_178c08:
    if (ctx->pc == 0x178C08u) {
        ctx->pc = 0x178C08u;
            // 0x178c08: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x178C0Cu;
        goto label_178c0c;
    }
    ctx->pc = 0x178C04u;
    SET_GPR_U32(ctx, 31, 0x178C0Cu);
    ctx->pc = 0x178C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178C04u;
            // 0x178c08: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1366F0u;
    if (runtime->hasFunction(0x1366F0u)) {
        auto targetFn = runtime->lookupFunction(0x1366F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178C0Cu; }
        if (ctx->pc != 0x178C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBBox__8mgCFrameFPfPf_0x1366f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178C0Cu; }
        if (ctx->pc != 0x178C0Cu) { return; }
    }
    ctx->pc = 0x178C0Cu;
label_178c0c:
    // 0x178c0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x178c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_178c10:
    // 0x178c10: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x178c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_178c14:
    // 0x178c14: 0xc04d97c  jal         func_1365F0
label_178c18:
    if (ctx->pc == 0x178C18u) {
        ctx->pc = 0x178C18u;
            // 0x178c18: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x178C1Cu;
        goto label_178c1c;
    }
    ctx->pc = 0x178C14u;
    SET_GPR_U32(ctx, 31, 0x178C1Cu);
    ctx->pc = 0x178C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178C14u;
            // 0x178c18: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1365F0u;
    if (runtime->hasFunction(0x1365F0u)) {
        auto targetFn = runtime->lookupFunction(0x1365F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178C1Cu; }
        if (ctx->pc != 0x178C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBBox__8mgCFrameFPfPf_0x1365f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178C1Cu; }
        if (ctx->pc != 0x178C1Cu) { return; }
    }
    ctx->pc = 0x178C1Cu;
label_178c1c:
    // 0x178c1c: 0x0  nop
    ctx->pc = 0x178c1cu;
    // NOP
label_178c20:
    // 0x178c20: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x178c20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_178c24:
    // 0x178c24: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x178c24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_178c28:
    // 0x178c28: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x178c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_178c2c:
    // 0x178c2c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x178c2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_178c30:
    // 0x178c30: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
label_178c34:
    if (ctx->pc == 0x178C34u) {
        ctx->pc = 0x178C34u;
            // 0x178c34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x178C38u;
        goto label_178c38;
    }
    ctx->pc = 0x178C30u;
    {
        const bool branch_taken_0x178c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178C30u;
            // 0x178c34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178c30) {
            ctx->pc = 0x178B8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_178b8c;
        }
    }
    ctx->pc = 0x178C38u;
label_178c38:
    // 0x178c38: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x178c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_178c3c:
    // 0x178c3c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x178c3cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_178c40:
    // 0x178c40: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x178c40u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_178c44:
    // 0x178c44: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x178c44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_178c48:
    // 0x178c48: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x178c48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_178c4c:
    // 0x178c4c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x178c4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_178c50:
    // 0x178c50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x178c50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_178c54:
    // 0x178c54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x178c54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_178c58:
    // 0x178c58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x178c58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_178c5c:
    // 0x178c5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x178c5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_178c60:
    // 0x178c60: 0x3e00008  jr          $ra
label_178c64:
    if (ctx->pc == 0x178C64u) {
        ctx->pc = 0x178C64u;
            // 0x178c64: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x178C68u;
        goto label_fallthrough_0x178c60;
    }
    ctx->pc = 0x178C60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178C60u;
            // 0x178c64: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x178c60:
    ctx->pc = 0x178C68u;
}
