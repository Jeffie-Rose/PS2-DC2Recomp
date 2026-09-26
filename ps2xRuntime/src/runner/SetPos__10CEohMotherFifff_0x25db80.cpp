#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetPos__10CEohMotherFifff
// Address: 0x25db80 - 0x25ddf8
void SetPos__10CEohMotherFifff_0x25db80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPos__10CEohMotherFifff_0x25db80");
#endif

    switch (ctx->pc) {
        case 0x25db80u: goto label_25db80;
        case 0x25db84u: goto label_25db84;
        case 0x25db88u: goto label_25db88;
        case 0x25db8cu: goto label_25db8c;
        case 0x25db90u: goto label_25db90;
        case 0x25db94u: goto label_25db94;
        case 0x25db98u: goto label_25db98;
        case 0x25db9cu: goto label_25db9c;
        case 0x25dba0u: goto label_25dba0;
        case 0x25dba4u: goto label_25dba4;
        case 0x25dba8u: goto label_25dba8;
        case 0x25dbacu: goto label_25dbac;
        case 0x25dbb0u: goto label_25dbb0;
        case 0x25dbb4u: goto label_25dbb4;
        case 0x25dbb8u: goto label_25dbb8;
        case 0x25dbbcu: goto label_25dbbc;
        case 0x25dbc0u: goto label_25dbc0;
        case 0x25dbc4u: goto label_25dbc4;
        case 0x25dbc8u: goto label_25dbc8;
        case 0x25dbccu: goto label_25dbcc;
        case 0x25dbd0u: goto label_25dbd0;
        case 0x25dbd4u: goto label_25dbd4;
        case 0x25dbd8u: goto label_25dbd8;
        case 0x25dbdcu: goto label_25dbdc;
        case 0x25dbe0u: goto label_25dbe0;
        case 0x25dbe4u: goto label_25dbe4;
        case 0x25dbe8u: goto label_25dbe8;
        case 0x25dbecu: goto label_25dbec;
        case 0x25dbf0u: goto label_25dbf0;
        case 0x25dbf4u: goto label_25dbf4;
        case 0x25dbf8u: goto label_25dbf8;
        case 0x25dbfcu: goto label_25dbfc;
        case 0x25dc00u: goto label_25dc00;
        case 0x25dc04u: goto label_25dc04;
        case 0x25dc08u: goto label_25dc08;
        case 0x25dc0cu: goto label_25dc0c;
        case 0x25dc10u: goto label_25dc10;
        case 0x25dc14u: goto label_25dc14;
        case 0x25dc18u: goto label_25dc18;
        case 0x25dc1cu: goto label_25dc1c;
        case 0x25dc20u: goto label_25dc20;
        case 0x25dc24u: goto label_25dc24;
        case 0x25dc28u: goto label_25dc28;
        case 0x25dc2cu: goto label_25dc2c;
        case 0x25dc30u: goto label_25dc30;
        case 0x25dc34u: goto label_25dc34;
        case 0x25dc38u: goto label_25dc38;
        case 0x25dc3cu: goto label_25dc3c;
        case 0x25dc40u: goto label_25dc40;
        case 0x25dc44u: goto label_25dc44;
        case 0x25dc48u: goto label_25dc48;
        case 0x25dc4cu: goto label_25dc4c;
        case 0x25dc50u: goto label_25dc50;
        case 0x25dc54u: goto label_25dc54;
        case 0x25dc58u: goto label_25dc58;
        case 0x25dc5cu: goto label_25dc5c;
        case 0x25dc60u: goto label_25dc60;
        case 0x25dc64u: goto label_25dc64;
        case 0x25dc68u: goto label_25dc68;
        case 0x25dc6cu: goto label_25dc6c;
        case 0x25dc70u: goto label_25dc70;
        case 0x25dc74u: goto label_25dc74;
        case 0x25dc78u: goto label_25dc78;
        case 0x25dc7cu: goto label_25dc7c;
        case 0x25dc80u: goto label_25dc80;
        case 0x25dc84u: goto label_25dc84;
        case 0x25dc88u: goto label_25dc88;
        case 0x25dc8cu: goto label_25dc8c;
        case 0x25dc90u: goto label_25dc90;
        case 0x25dc94u: goto label_25dc94;
        case 0x25dc98u: goto label_25dc98;
        case 0x25dc9cu: goto label_25dc9c;
        case 0x25dca0u: goto label_25dca0;
        case 0x25dca4u: goto label_25dca4;
        case 0x25dca8u: goto label_25dca8;
        case 0x25dcacu: goto label_25dcac;
        case 0x25dcb0u: goto label_25dcb0;
        case 0x25dcb4u: goto label_25dcb4;
        case 0x25dcb8u: goto label_25dcb8;
        case 0x25dcbcu: goto label_25dcbc;
        case 0x25dcc0u: goto label_25dcc0;
        case 0x25dcc4u: goto label_25dcc4;
        case 0x25dcc8u: goto label_25dcc8;
        case 0x25dcccu: goto label_25dccc;
        case 0x25dcd0u: goto label_25dcd0;
        case 0x25dcd4u: goto label_25dcd4;
        case 0x25dcd8u: goto label_25dcd8;
        case 0x25dcdcu: goto label_25dcdc;
        case 0x25dce0u: goto label_25dce0;
        case 0x25dce4u: goto label_25dce4;
        case 0x25dce8u: goto label_25dce8;
        case 0x25dcecu: goto label_25dcec;
        case 0x25dcf0u: goto label_25dcf0;
        case 0x25dcf4u: goto label_25dcf4;
        case 0x25dcf8u: goto label_25dcf8;
        case 0x25dcfcu: goto label_25dcfc;
        case 0x25dd00u: goto label_25dd00;
        case 0x25dd04u: goto label_25dd04;
        case 0x25dd08u: goto label_25dd08;
        case 0x25dd0cu: goto label_25dd0c;
        case 0x25dd10u: goto label_25dd10;
        case 0x25dd14u: goto label_25dd14;
        case 0x25dd18u: goto label_25dd18;
        case 0x25dd1cu: goto label_25dd1c;
        case 0x25dd20u: goto label_25dd20;
        case 0x25dd24u: goto label_25dd24;
        case 0x25dd28u: goto label_25dd28;
        case 0x25dd2cu: goto label_25dd2c;
        case 0x25dd30u: goto label_25dd30;
        case 0x25dd34u: goto label_25dd34;
        case 0x25dd38u: goto label_25dd38;
        case 0x25dd3cu: goto label_25dd3c;
        case 0x25dd40u: goto label_25dd40;
        case 0x25dd44u: goto label_25dd44;
        case 0x25dd48u: goto label_25dd48;
        case 0x25dd4cu: goto label_25dd4c;
        case 0x25dd50u: goto label_25dd50;
        case 0x25dd54u: goto label_25dd54;
        case 0x25dd58u: goto label_25dd58;
        case 0x25dd5cu: goto label_25dd5c;
        case 0x25dd60u: goto label_25dd60;
        case 0x25dd64u: goto label_25dd64;
        case 0x25dd68u: goto label_25dd68;
        case 0x25dd6cu: goto label_25dd6c;
        case 0x25dd70u: goto label_25dd70;
        case 0x25dd74u: goto label_25dd74;
        case 0x25dd78u: goto label_25dd78;
        case 0x25dd7cu: goto label_25dd7c;
        case 0x25dd80u: goto label_25dd80;
        case 0x25dd84u: goto label_25dd84;
        case 0x25dd88u: goto label_25dd88;
        case 0x25dd8cu: goto label_25dd8c;
        case 0x25dd90u: goto label_25dd90;
        case 0x25dd94u: goto label_25dd94;
        case 0x25dd98u: goto label_25dd98;
        case 0x25dd9cu: goto label_25dd9c;
        case 0x25dda0u: goto label_25dda0;
        case 0x25dda4u: goto label_25dda4;
        case 0x25dda8u: goto label_25dda8;
        case 0x25ddacu: goto label_25ddac;
        case 0x25ddb0u: goto label_25ddb0;
        case 0x25ddb4u: goto label_25ddb4;
        case 0x25ddb8u: goto label_25ddb8;
        case 0x25ddbcu: goto label_25ddbc;
        case 0x25ddc0u: goto label_25ddc0;
        case 0x25ddc4u: goto label_25ddc4;
        case 0x25ddc8u: goto label_25ddc8;
        case 0x25ddccu: goto label_25ddcc;
        case 0x25ddd0u: goto label_25ddd0;
        case 0x25ddd4u: goto label_25ddd4;
        case 0x25ddd8u: goto label_25ddd8;
        case 0x25dddcu: goto label_25dddc;
        case 0x25dde0u: goto label_25dde0;
        case 0x25dde4u: goto label_25dde4;
        case 0x25dde8u: goto label_25dde8;
        case 0x25ddecu: goto label_25ddec;
        case 0x25ddf0u: goto label_25ddf0;
        case 0x25ddf4u: goto label_25ddf4;
        default: break;
    }

    ctx->pc = 0x25db80u;

label_25db80:
    // 0x25db80: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x25db80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_25db84:
    // 0x25db84: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x25db84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_25db88:
    // 0x25db88: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25db88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_25db8c:
    // 0x25db8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25db8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_25db90:
    // 0x25db90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25db90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_25db94:
    // 0x25db94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25db94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_25db98:
    // 0x25db98: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_25db9c:
    if (ctx->pc == 0x25DB9Cu) {
        ctx->pc = 0x25DB9Cu;
            // 0x25db9c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25DBA0u;
        goto label_25dba0;
    }
    ctx->pc = 0x25DB98u;
    {
        const bool branch_taken_0x25db98 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x25DB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DB98u;
            // 0x25db9c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25db98) {
            ctx->pc = 0x25DBACu;
            goto label_25dbac;
        }
    }
    ctx->pc = 0x25DBA0u;
label_25dba0:
    // 0x25dba0: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x25dba0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_25dba4:
    // 0x25dba4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_25dba8:
    if (ctx->pc == 0x25DBA8u) {
        ctx->pc = 0x25DBA8u;
            // 0x25dba8: 0x58100  sll         $s0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x25DBACu;
        goto label_25dbac;
    }
    ctx->pc = 0x25DBA4u;
    {
        const bool branch_taken_0x25dba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25DBA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DBA4u;
            // 0x25dba8: 0x58100  sll         $s0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dba4) {
            ctx->pc = 0x25DBB4u;
            goto label_25dbb4;
        }
    }
    ctx->pc = 0x25DBACu;
label_25dbac:
    // 0x25dbac: 0x1000008b  b           . + 4 + (0x8B << 2)
label_25dbb0:
    if (ctx->pc == 0x25DBB0u) {
        ctx->pc = 0x25DBB0u;
            // 0x25dbb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25DBB4u;
        goto label_25dbb4;
    }
    ctx->pc = 0x25DBACu;
    {
        const bool branch_taken_0x25dbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DBB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DBACu;
            // 0x25dbb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dbac) {
            ctx->pc = 0x25DDDCu;
            goto label_25dddc;
        }
    }
    ctx->pc = 0x25DBB4u;
label_25dbb4:
    // 0x25dbb4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25dbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25dbb8:
    // 0x25dbb8: 0x2302021  addu        $a0, $s1, $s0
    ctx->pc = 0x25dbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_25dbbc:
    // 0x25dbbc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x25dbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25dbc0:
    // 0x25dbc0: 0x1062006f  beq         $v1, $v0, . + 4 + (0x6F << 2)
label_25dbc4:
    if (ctx->pc == 0x25DBC4u) {
        ctx->pc = 0x25DBC4u;
            // 0x25dbc4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x25DBC8u;
        goto label_25dbc8;
    }
    ctx->pc = 0x25DBC0u;
    {
        const bool branch_taken_0x25dbc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25DBC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DBC0u;
            // 0x25dbc4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dbc0) {
            ctx->pc = 0x25DD80u;
            goto label_25dd80;
        }
    }
    ctx->pc = 0x25DBC8u;
label_25dbc8:
    // 0x25dbc8: 0x1062005e  beq         $v1, $v0, . + 4 + (0x5E << 2)
label_25dbcc:
    if (ctx->pc == 0x25DBCCu) {
        ctx->pc = 0x25DBCCu;
            // 0x25dbcc: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x25DBD0u;
        goto label_25dbd0;
    }
    ctx->pc = 0x25DBC8u;
    {
        const bool branch_taken_0x25dbc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25DBCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DBC8u;
            // 0x25dbcc: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dbc8) {
            ctx->pc = 0x25DD44u;
            goto label_25dd44;
        }
    }
    ctx->pc = 0x25DBD0u;
label_25dbd0:
    // 0x25dbd0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25dbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_25dbd4:
    // 0x25dbd4: 0x1062003b  beq         $v1, $v0, . + 4 + (0x3B << 2)
label_25dbd8:
    if (ctx->pc == 0x25DBD8u) {
        ctx->pc = 0x25DBD8u;
            // 0x25dbd8: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x25DBDCu;
        goto label_25dbdc;
    }
    ctx->pc = 0x25DBD4u;
    {
        const bool branch_taken_0x25dbd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25DBD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DBD4u;
            // 0x25dbd8: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dbd4) {
            ctx->pc = 0x25DCC4u;
            goto label_25dcc4;
        }
    }
    ctx->pc = 0x25DBDCu;
label_25dbdc:
    // 0x25dbdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25dbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25dbe0:
    // 0x25dbe0: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
label_25dbe4:
    if (ctx->pc == 0x25DBE4u) {
        ctx->pc = 0x25DBE8u;
        goto label_25dbe8;
    }
    ctx->pc = 0x25DBE0u;
    {
        const bool branch_taken_0x25dbe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25dbe0) {
            ctx->pc = 0x25DC54u;
            goto label_25dc54;
        }
    }
    ctx->pc = 0x25DBE8u;
label_25dbe8:
    // 0x25dbe8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_25dbec:
    if (ctx->pc == 0x25DBECu) {
        ctx->pc = 0x25DBF0u;
        goto label_25dbf0;
    }
    ctx->pc = 0x25DBE8u;
    {
        const bool branch_taken_0x25dbe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dbe8) {
            ctx->pc = 0x25DBF8u;
            goto label_25dbf8;
        }
    }
    ctx->pc = 0x25DBF0u;
label_25dbf0:
    // 0x25dbf0: 0x1000007a  b           . + 4 + (0x7A << 2)
label_25dbf4:
    if (ctx->pc == 0x25DBF4u) {
        ctx->pc = 0x25DBF4u;
            // 0x25dbf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25DBF8u;
        goto label_25dbf8;
    }
    ctx->pc = 0x25DBF0u;
    {
        const bool branch_taken_0x25dbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DBF0u;
            // 0x25dbf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dbf0) {
            ctx->pc = 0x25DDDCu;
            goto label_25dddc;
        }
    }
    ctx->pc = 0x25DBF8u;
label_25dbf8:
    // 0x25dbf8: 0xe7ac0050  swc1        $f12, 0x50($sp)
    ctx->pc = 0x25dbf8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_25dbfc:
    // 0x25dbfc: 0x27b20054  addiu       $s2, $sp, 0x54
    ctx->pc = 0x25dbfcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_25dc00:
    // 0x25dc00: 0xe64d0000  swc1        $f13, 0x0($s2)
    ctx->pc = 0x25dc00u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_25dc04:
    // 0x25dc04: 0x27b30058  addiu       $s3, $sp, 0x58
    ctx->pc = 0x25dc04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_25dc08:
    // 0x25dc08: 0xe66e0000  swc1        $f14, 0x0($s3)
    ctx->pc = 0x25dc08u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_25dc0c:
    // 0x25dc0c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25dc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_25dc10:
    // 0x25dc10: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x25dc10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
label_25dc14:
    // 0x25dc14: 0xc0975c0  jal         func_25D700
label_25dc18:
    if (ctx->pc == 0x25DC18u) {
        ctx->pc = 0x25DC18u;
            // 0x25dc18: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x25DC1Cu;
        goto label_25dc1c;
    }
    ctx->pc = 0x25DC14u;
    SET_GPR_U32(ctx, 31, 0x25DC1Cu);
    ctx->pc = 0x25DC18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25DC14u;
            // 0x25dc18: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D700u;
    if (runtime->hasFunction(0x25D700u)) {
        auto targetFn = runtime->lookupFunction(0x25D700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DC1Cu; }
        if (ctx->pc != 0x25DC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcPosWorldCoord__FPf_0x25d700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DC1Cu; }
        if (ctx->pc != 0x25DC1Cu) { return; }
    }
    ctx->pc = 0x25DC1Cu;
label_25dc1c:
    // 0x25dc1c: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x25dc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_25dc20:
    // 0x25dc20: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x25dc20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_25dc24:
    // 0x25dc24: 0xc66e0000  lwc1        $f14, 0x0($s3)
    ctx->pc = 0x25dc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_25dc28:
    // 0x25dc28: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x25dc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_25dc2c:
    // 0x25dc2c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_25dc30:
    if (ctx->pc == 0x25DC30u) {
        ctx->pc = 0x25DC30u;
            // 0x25dc30: 0xc64d0000  lwc1        $f13, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->pc = 0x25DC34u;
        goto label_25dc34;
    }
    ctx->pc = 0x25DC2Cu;
    {
        const bool branch_taken_0x25dc2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25DC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DC2Cu;
            // 0x25dc30: 0xc64d0000  lwc1        $f13, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dc2c) {
            ctx->pc = 0x25DC3Cu;
            goto label_25dc3c;
        }
    }
    ctx->pc = 0x25DC34u;
label_25dc34:
    // 0x25dc34: 0x10000069  b           . + 4 + (0x69 << 2)
label_25dc38:
    if (ctx->pc == 0x25DC38u) {
        ctx->pc = 0x25DC38u;
            // 0x25dc38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25DC3Cu;
        goto label_25dc3c;
    }
    ctx->pc = 0x25DC34u;
    {
        const bool branch_taken_0x25dc34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DC34u;
            // 0x25dc38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dc34) {
            ctx->pc = 0x25DDDCu;
            goto label_25dddc;
        }
    }
    ctx->pc = 0x25DC3Cu;
label_25dc3c:
    // 0x25dc3c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25dc3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25dc40:
    // 0x25dc40: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x25dc40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_25dc44:
    // 0x25dc44: 0x320f809  jalr        $t9
label_25dc48:
    if (ctx->pc == 0x25DC48u) {
        ctx->pc = 0x25DC4Cu;
        goto label_25dc4c;
    }
    ctx->pc = 0x25DC44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25DC4Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x25DC4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25DC4Cu; }
            if (ctx->pc != 0x25DC4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x25DC4Cu;
label_25dc4c:
    // 0x25dc4c: 0x10000063  b           . + 4 + (0x63 << 2)
label_25dc50:
    if (ctx->pc == 0x25DC50u) {
        ctx->pc = 0x25DC50u;
            // 0x25dc50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25DC54u;
        goto label_25dc54;
    }
    ctx->pc = 0x25DC4Cu;
    {
        const bool branch_taken_0x25dc4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DC50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DC4Cu;
            // 0x25dc50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dc4c) {
            ctx->pc = 0x25DDDCu;
            goto label_25dddc;
        }
    }
    ctx->pc = 0x25DC54u;
label_25dc54:
    // 0x25dc54: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x25dc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_25dc58:
    // 0x25dc58: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_25dc5c:
    if (ctx->pc == 0x25DC5Cu) {
        ctx->pc = 0x25DC5Cu;
            // 0x25dc5c: 0x2111021  addu        $v0, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->pc = 0x25DC60u;
        goto label_25dc60;
    }
    ctx->pc = 0x25DC58u;
    {
        const bool branch_taken_0x25dc58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DC58u;
            // 0x25dc5c: 0x2111021  addu        $v0, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dc58) {
            ctx->pc = 0x25DC98u;
            goto label_25dc98;
        }
    }
    ctx->pc = 0x25DC60u;
label_25dc60:
    // 0x25dc60: 0xe7ac0060  swc1        $f12, 0x60($sp)
    ctx->pc = 0x25dc60u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_25dc64:
    // 0x25dc64: 0x27b20064  addiu       $s2, $sp, 0x64
    ctx->pc = 0x25dc64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_25dc68:
    // 0x25dc68: 0xe64d0000  swc1        $f13, 0x0($s2)
    ctx->pc = 0x25dc68u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_25dc6c:
    // 0x25dc6c: 0x27b30068  addiu       $s3, $sp, 0x68
    ctx->pc = 0x25dc6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_25dc70:
    // 0x25dc70: 0xe66e0000  swc1        $f14, 0x0($s3)
    ctx->pc = 0x25dc70u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_25dc74:
    // 0x25dc74: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25dc74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_25dc78:
    // 0x25dc78: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x25dc78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_25dc7c:
    // 0x25dc7c: 0xc0975c0  jal         func_25D700
label_25dc80:
    if (ctx->pc == 0x25DC80u) {
        ctx->pc = 0x25DC80u;
            // 0x25dc80: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x25DC84u;
        goto label_25dc84;
    }
    ctx->pc = 0x25DC7Cu;
    SET_GPR_U32(ctx, 31, 0x25DC84u);
    ctx->pc = 0x25DC80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25DC7Cu;
            // 0x25dc80: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D700u;
    if (runtime->hasFunction(0x25D700u)) {
        auto targetFn = runtime->lookupFunction(0x25D700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DC84u; }
        if (ctx->pc != 0x25DC84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcPosWorldCoord__FPf_0x25d700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DC84u; }
        if (ctx->pc != 0x25DC84u) { return; }
    }
    ctx->pc = 0x25DC84u;
label_25dc84:
    // 0x25dc84: 0xc64d0000  lwc1        $f13, 0x0($s2)
    ctx->pc = 0x25dc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_25dc88:
    // 0x25dc88: 0xc66e0000  lwc1        $f14, 0x0($s3)
    ctx->pc = 0x25dc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_25dc8c:
    // 0x25dc8c: 0xc7ac0060  lwc1        $f12, 0x60($sp)
    ctx->pc = 0x25dc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_25dc90:
    // 0x25dc90: 0x0  nop
    ctx->pc = 0x25dc90u;
    // NOP
label_25dc94:
    // 0x25dc94: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x25dc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_25dc98:
    // 0x25dc98: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x25dc98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_25dc9c:
    // 0x25dc9c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_25dca0:
    if (ctx->pc == 0x25DCA0u) {
        ctx->pc = 0x25DCA0u;
            // 0x25dca0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25DCA4u;
        goto label_25dca4;
    }
    ctx->pc = 0x25DC9Cu;
    {
        const bool branch_taken_0x25dc9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25DCA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DC9Cu;
            // 0x25dca0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dc9c) {
            ctx->pc = 0x25DCACu;
            goto label_25dcac;
        }
    }
    ctx->pc = 0x25DCA4u;
label_25dca4:
    // 0x25dca4: 0x1000004e  b           . + 4 + (0x4E << 2)
label_25dca8:
    if (ctx->pc == 0x25DCA8u) {
        ctx->pc = 0x25DCA8u;
            // 0x25dca8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x25DCACu;
        goto label_25dcac;
    }
    ctx->pc = 0x25DCA4u;
    {
        const bool branch_taken_0x25dca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DCA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DCA4u;
            // 0x25dca8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dca4) {
            ctx->pc = 0x25DDE0u;
            goto label_25dde0;
        }
    }
    ctx->pc = 0x25DCACu;
label_25dcac:
    // 0x25dcac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25dcacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25dcb0:
    // 0x25dcb0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x25dcb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_25dcb4:
    // 0x25dcb4: 0x320f809  jalr        $t9
label_25dcb8:
    if (ctx->pc == 0x25DCB8u) {
        ctx->pc = 0x25DCBCu;
        goto label_25dcbc;
    }
    ctx->pc = 0x25DCB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25DCBCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x25DCBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25DCBCu; }
            if (ctx->pc != 0x25DCBCu) { return; }
        }
        }
    }
    ctx->pc = 0x25DCBCu;
label_25dcbc:
    // 0x25dcbc: 0x10000047  b           . + 4 + (0x47 << 2)
label_25dcc0:
    if (ctx->pc == 0x25DCC0u) {
        ctx->pc = 0x25DCC0u;
            // 0x25dcc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25DCC4u;
        goto label_25dcc4;
    }
    ctx->pc = 0x25DCBCu;
    {
        const bool branch_taken_0x25dcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DCC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DCBCu;
            // 0x25dcc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dcbc) {
            ctx->pc = 0x25DDDCu;
            goto label_25dddc;
        }
    }
    ctx->pc = 0x25DCC4u;
label_25dcc4:
    // 0x25dcc4: 0x2490000c  addiu       $s0, $a0, 0xC
    ctx->pc = 0x25dcc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_25dcc8:
    // 0x25dcc8: 0xe7ac0070  swc1        $f12, 0x70($sp)
    ctx->pc = 0x25dcc8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_25dccc:
    // 0x25dccc: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x25dcccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_25dcd0:
    // 0x25dcd0: 0xe7ad0074  swc1        $f13, 0x74($sp)
    ctx->pc = 0x25dcd0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_25dcd4:
    // 0x25dcd4: 0xe7ae0078  swc1        $f14, 0x78($sp)
    ctx->pc = 0x25dcd4u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_25dcd8:
    // 0x25dcd8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x25dcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_25dcdc:
    // 0x25dcdc: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_25dce0:
    if (ctx->pc == 0x25DCE0u) {
        ctx->pc = 0x25DCE0u;
            // 0x25dce0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25DCE4u;
        goto label_25dce4;
    }
    ctx->pc = 0x25DCDCu;
    {
        const bool branch_taken_0x25dcdc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25DCE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DCDCu;
            // 0x25dce0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dcdc) {
            ctx->pc = 0x25DCECu;
            goto label_25dcec;
        }
    }
    ctx->pc = 0x25DCE4u;
label_25dce4:
    // 0x25dce4: 0x1000003d  b           . + 4 + (0x3D << 2)
label_25dce8:
    if (ctx->pc == 0x25DCE8u) {
        ctx->pc = 0x25DCECu;
        goto label_25dcec;
    }
    ctx->pc = 0x25DCE4u;
    {
        const bool branch_taken_0x25dce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dce4) {
            ctx->pc = 0x25DDDCu;
            goto label_25dddc;
        }
    }
    ctx->pc = 0x25DCECu;
label_25dcec:
    // 0x25dcec: 0xc0a4308  jal         func_290C20
label_25dcf0:
    if (ctx->pc == 0x25DCF0u) {
        ctx->pc = 0x25DCF4u;
        goto label_25dcf4;
    }
    ctx->pc = 0x25DCECu;
    SET_GPR_U32(ctx, 31, 0x25DCF4u);
    ctx->pc = 0x290C20u;
    if (runtime->hasFunction(0x290C20u)) {
        auto targetFn = runtime->lookupFunction(0x290C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DCF4u; }
        if (ctx->pc != 0x25DCF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetType__13CEventSprite2Fv_0x290c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DCF4u; }
        if (ctx->pc != 0x25DCF4u) { return; }
    }
    ctx->pc = 0x25DCF4u;
label_25dcf4:
    // 0x25dcf4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_25dcf8:
    if (ctx->pc == 0x25DCF8u) {
        ctx->pc = 0x25DCFCu;
        goto label_25dcfc;
    }
    ctx->pc = 0x25DCF4u;
    {
        const bool branch_taken_0x25dcf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25dcf4) {
            ctx->pc = 0x25DD10u;
            goto label_25dd10;
        }
    }
    ctx->pc = 0x25DCFCu;
label_25dcfc:
    // 0x25dcfc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x25dcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25dd00:
    // 0x25dd00: 0xc0a42e0  jal         func_290B80
label_25dd04:
    if (ctx->pc == 0x25DD04u) {
        ctx->pc = 0x25DD04u;
            // 0x25dd04: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x25DD08u;
        goto label_25dd08;
    }
    ctx->pc = 0x25DD00u;
    SET_GPR_U32(ctx, 31, 0x25DD08u);
    ctx->pc = 0x25DD04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25DD00u;
            // 0x25dd04: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x290B80u;
    if (runtime->hasFunction(0x290B80u)) {
        auto targetFn = runtime->lookupFunction(0x290B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DD08u; }
        if (ctx->pc != 0x25DD08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPosition__13CEventSprite2FPf_0x290b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DD08u; }
        if (ctx->pc != 0x25DD08u) { return; }
    }
    ctx->pc = 0x25DD08u;
label_25dd08:
    // 0x25dd08: 0x1000000c  b           . + 4 + (0xC << 2)
label_25dd0c:
    if (ctx->pc == 0x25DD0Cu) {
        ctx->pc = 0x25DD0Cu;
            // 0x25dd0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25DD10u;
        goto label_25dd10;
    }
    ctx->pc = 0x25DD08u;
    {
        const bool branch_taken_0x25dd08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DD08u;
            // 0x25dd0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dd08) {
            ctx->pc = 0x25DD3Cu;
            goto label_25dd3c;
        }
    }
    ctx->pc = 0x25DD10u;
label_25dd10:
    // 0x25dd10: 0xc0a4308  jal         func_290C20
label_25dd14:
    if (ctx->pc == 0x25DD14u) {
        ctx->pc = 0x25DD14u;
            // 0x25dd14: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x25DD18u;
        goto label_25dd18;
    }
    ctx->pc = 0x25DD10u;
    SET_GPR_U32(ctx, 31, 0x25DD18u);
    ctx->pc = 0x25DD14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25DD10u;
            // 0x25dd14: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x290C20u;
    if (runtime->hasFunction(0x290C20u)) {
        auto targetFn = runtime->lookupFunction(0x290C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DD18u; }
        if (ctx->pc != 0x25DD18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetType__13CEventSprite2Fv_0x290c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DD18u; }
        if (ctx->pc != 0x25DD18u) { return; }
    }
    ctx->pc = 0x25DD18u;
label_25dd18:
    // 0x25dd18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25dd18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25dd1c:
    // 0x25dd1c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_25dd20:
    if (ctx->pc == 0x25DD20u) {
        ctx->pc = 0x25DD20u;
            // 0x25dd20: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x25DD24u;
        goto label_25dd24;
    }
    ctx->pc = 0x25DD1Cu;
    {
        const bool branch_taken_0x25dd1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x25DD20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DD1Cu;
            // 0x25dd20: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dd1c) {
            ctx->pc = 0x25DD38u;
            goto label_25dd38;
        }
    }
    ctx->pc = 0x25DD24u;
label_25dd24:
    // 0x25dd24: 0xc0975c0  jal         func_25D700
label_25dd28:
    if (ctx->pc == 0x25DD28u) {
        ctx->pc = 0x25DD2Cu;
        goto label_25dd2c;
    }
    ctx->pc = 0x25DD24u;
    SET_GPR_U32(ctx, 31, 0x25DD2Cu);
    ctx->pc = 0x25D700u;
    if (runtime->hasFunction(0x25D700u)) {
        auto targetFn = runtime->lookupFunction(0x25D700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DD2Cu; }
        if (ctx->pc != 0x25DD2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcPosWorldCoord__FPf_0x25d700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DD2Cu; }
        if (ctx->pc != 0x25DD2Cu) { return; }
    }
    ctx->pc = 0x25DD2Cu;
label_25dd2c:
    // 0x25dd2c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x25dd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25dd30:
    // 0x25dd30: 0xc0a42e0  jal         func_290B80
label_25dd34:
    if (ctx->pc == 0x25DD34u) {
        ctx->pc = 0x25DD34u;
            // 0x25dd34: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x25DD38u;
        goto label_25dd38;
    }
    ctx->pc = 0x25DD30u;
    SET_GPR_U32(ctx, 31, 0x25DD38u);
    ctx->pc = 0x25DD34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25DD30u;
            // 0x25dd34: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x290B80u;
    if (runtime->hasFunction(0x290B80u)) {
        auto targetFn = runtime->lookupFunction(0x290B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DD38u; }
        if (ctx->pc != 0x25DD38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPosition__13CEventSprite2FPf_0x290b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DD38u; }
        if (ctx->pc != 0x25DD38u) { return; }
    }
    ctx->pc = 0x25DD38u;
label_25dd38:
    // 0x25dd38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25dd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25dd3c:
    // 0x25dd3c: 0x10000027  b           . + 4 + (0x27 << 2)
label_25dd40:
    if (ctx->pc == 0x25DD40u) {
        ctx->pc = 0x25DD44u;
        goto label_25dd44;
    }
    ctx->pc = 0x25DD3Cu;
    {
        const bool branch_taken_0x25dd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dd3c) {
            ctx->pc = 0x25DDDCu;
            goto label_25dddc;
        }
    }
    ctx->pc = 0x25DD44u;
label_25dd44:
    // 0x25dd44: 0xe7ac0080  swc1        $f12, 0x80($sp)
    ctx->pc = 0x25dd44u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_25dd48:
    // 0x25dd48: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x25dd48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
label_25dd4c:
    // 0x25dd4c: 0xe7ad0084  swc1        $f13, 0x84($sp)
    ctx->pc = 0x25dd4cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_25dd50:
    // 0x25dd50: 0xe7ae0088  swc1        $f14, 0x88($sp)
    ctx->pc = 0x25dd50u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_25dd54:
    // 0x25dd54: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x25dd54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_25dd58:
    // 0x25dd58: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_25dd5c:
    if (ctx->pc == 0x25DD5Cu) {
        ctx->pc = 0x25DD5Cu;
            // 0x25dd5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25DD60u;
        goto label_25dd60;
    }
    ctx->pc = 0x25DD58u;
    {
        const bool branch_taken_0x25dd58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25DD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DD58u;
            // 0x25dd5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dd58) {
            ctx->pc = 0x25DD68u;
            goto label_25dd68;
        }
    }
    ctx->pc = 0x25DD60u;
label_25dd60:
    // 0x25dd60: 0x1000001e  b           . + 4 + (0x1E << 2)
label_25dd64:
    if (ctx->pc == 0x25DD64u) {
        ctx->pc = 0x25DD68u;
        goto label_25dd68;
    }
    ctx->pc = 0x25DD60u;
    {
        const bool branch_taken_0x25dd60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dd60) {
            ctx->pc = 0x25DDDCu;
            goto label_25dddc;
        }
    }
    ctx->pc = 0x25DD68u;
label_25dd68:
    // 0x25dd68: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25dd68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25dd6c:
    // 0x25dd6c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x25dd6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_25dd70:
    // 0x25dd70: 0x320f809  jalr        $t9
label_25dd74:
    if (ctx->pc == 0x25DD74u) {
        ctx->pc = 0x25DD74u;
            // 0x25dd74: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x25DD78u;
        goto label_25dd78;
    }
    ctx->pc = 0x25DD70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25DD78u);
        ctx->pc = 0x25DD74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DD70u;
            // 0x25dd74: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25DD78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25DD78u; }
            if (ctx->pc != 0x25DD78u) { return; }
        }
        }
    }
    ctx->pc = 0x25DD78u;
label_25dd78:
    // 0x25dd78: 0x10000018  b           . + 4 + (0x18 << 2)
label_25dd7c:
    if (ctx->pc == 0x25DD7Cu) {
        ctx->pc = 0x25DD7Cu;
            // 0x25dd7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25DD80u;
        goto label_25dd80;
    }
    ctx->pc = 0x25DD78u;
    {
        const bool branch_taken_0x25dd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DD7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DD78u;
            // 0x25dd7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dd78) {
            ctx->pc = 0x25DDDCu;
            goto label_25dddc;
        }
    }
    ctx->pc = 0x25DD80u;
label_25dd80:
    // 0x25dd80: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x25dd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_25dd84:
    // 0x25dd84: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_25dd88:
    if (ctx->pc == 0x25DD88u) {
        ctx->pc = 0x25DD88u;
            // 0x25dd88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25DD8Cu;
        goto label_25dd8c;
    }
    ctx->pc = 0x25DD84u;
    {
        const bool branch_taken_0x25dd84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DD88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DD84u;
            // 0x25dd88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dd84) {
            ctx->pc = 0x25DDDCu;
            goto label_25dddc;
        }
    }
    ctx->pc = 0x25DD8Cu;
label_25dd8c:
    // 0x25dd8c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25dd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_25dd90:
    // 0x25dd90: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x25dd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_25dd94:
    // 0x25dd94: 0xe7ac0090  swc1        $f12, 0x90($sp)
    ctx->pc = 0x25dd94u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_25dd98:
    // 0x25dd98: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x25dd98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
label_25dd9c:
    // 0x25dd9c: 0xe7ad0094  swc1        $f13, 0x94($sp)
    ctx->pc = 0x25dd9cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_25dda0:
    // 0x25dda0: 0xc0975c0  jal         func_25D700
label_25dda4:
    if (ctx->pc == 0x25DDA4u) {
        ctx->pc = 0x25DDA4u;
            // 0x25dda4: 0xe7ae0098  swc1        $f14, 0x98($sp) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->pc = 0x25DDA8u;
        goto label_25dda8;
    }
    ctx->pc = 0x25DDA0u;
    SET_GPR_U32(ctx, 31, 0x25DDA8u);
    ctx->pc = 0x25DDA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25DDA0u;
            // 0x25dda4: 0xe7ae0098  swc1        $f14, 0x98($sp) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D700u;
    if (runtime->hasFunction(0x25D700u)) {
        auto targetFn = runtime->lookupFunction(0x25D700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DDA8u; }
        if (ctx->pc != 0x25DDA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcPosWorldCoord__FPf_0x25d700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DDA8u; }
        if (ctx->pc != 0x25DDA8u) { return; }
    }
    ctx->pc = 0x25DDA8u;
label_25dda8:
    // 0x25dda8: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x25dda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_25ddac:
    // 0x25ddac: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x25ddacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_25ddb0:
    // 0x25ddb0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_25ddb4:
    if (ctx->pc == 0x25DDB4u) {
        ctx->pc = 0x25DDB4u;
            // 0x25ddb4: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x25DDB8u;
        goto label_25ddb8;
    }
    ctx->pc = 0x25DDB0u;
    {
        const bool branch_taken_0x25ddb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25DDB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DDB0u;
            // 0x25ddb4: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ddb0) {
            ctx->pc = 0x25DDC0u;
            goto label_25ddc0;
        }
    }
    ctx->pc = 0x25DDB8u;
label_25ddb8:
    // 0x25ddb8: 0x10000008  b           . + 4 + (0x8 << 2)
label_25ddbc:
    if (ctx->pc == 0x25DDBCu) {
        ctx->pc = 0x25DDBCu;
            // 0x25ddbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25DDC0u;
        goto label_25ddc0;
    }
    ctx->pc = 0x25DDB8u;
    {
        const bool branch_taken_0x25ddb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DDBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DDB8u;
            // 0x25ddbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ddb8) {
            ctx->pc = 0x25DDDCu;
            goto label_25dddc;
        }
    }
    ctx->pc = 0x25DDC0u;
label_25ddc0:
    // 0x25ddc0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x25ddc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_25ddc4:
    // 0x25ddc4: 0x7c620180  sq          $v0, 0x180($v1)
    ctx->pc = 0x25ddc4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 384), GPR_VEC(ctx, 2));
label_25ddc8:
    // 0x25ddc8: 0x8c790070  lw          $t9, 0x70($v1)
    ctx->pc = 0x25ddc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_25ddcc:
    // 0x25ddcc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x25ddccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_25ddd0:
    // 0x25ddd0: 0x320f809  jalr        $t9
label_25ddd4:
    if (ctx->pc == 0x25DDD4u) {
        ctx->pc = 0x25DDD4u;
            // 0x25ddd4: 0x24640070  addiu       $a0, $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
        ctx->pc = 0x25DDD8u;
        goto label_25ddd8;
    }
    ctx->pc = 0x25DDD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25DDD8u);
        ctx->pc = 0x25DDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DDD0u;
            // 0x25ddd4: 0x24640070  addiu       $a0, $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25DDD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25DDD8u; }
            if (ctx->pc != 0x25DDD8u) { return; }
        }
        }
    }
    ctx->pc = 0x25DDD8u;
label_25ddd8:
    // 0x25ddd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25ddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25dddc:
    // 0x25dddc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x25dddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_25dde0:
    // 0x25dde0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25dde0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25dde4:
    // 0x25dde4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25dde4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25dde8:
    // 0x25dde8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25dde8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25ddec:
    // 0x25ddec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25ddecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_25ddf0:
    // 0x25ddf0: 0x3e00008  jr          $ra
label_25ddf4:
    if (ctx->pc == 0x25DDF4u) {
        ctx->pc = 0x25DDF4u;
            // 0x25ddf4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x25DDF8u;
        goto label_fallthrough_0x25ddf0;
    }
    ctx->pc = 0x25DDF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25DDF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DDF0u;
            // 0x25ddf4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x25ddf0:
    ctx->pc = 0x25DDF8u;
}
